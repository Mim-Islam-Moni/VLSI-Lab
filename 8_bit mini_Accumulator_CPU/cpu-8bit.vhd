library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu_8bit is
    Port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;
        Q     : out STD_LOGIC_VECTOR(7 downto 0);
        Z     : out STD_LOGIC;
        PC    : out STD_LOGIC_VECTOR(3 downto 0)
    );
end cpu_8bit;

architecture Structural of cpu_8bit is

    -- Internal signals
    signal PC_VALUE    : STD_LOGIC_VECTOR(3 downto 0);
    signal ROM_DATA    : STD_LOGIC_VECTOR(11 downto 0);

    signal OPCODE      : STD_LOGIC_VECTOR(3 downto 0);
    signal IMM         : STD_LOGIC_VECTOR(7 downto 0);

    signal ACC_VALUE   : STD_LOGIC_VECTOR(7 downto 0);
    signal ACC_D       : STD_LOGIC_VECTOR(7 downto 0);

    signal ACC_LOAD    : STD_LOGIC;
    signal ACC_SRC_IMM : STD_LOGIC;
    signal ALU_OP      : STD_LOGIC_VECTOR(2 downto 0);
    signal Z_LOAD      : STD_LOGIC;

    signal ALU_RESULT  : STD_LOGIC_VECTOR(7 downto 0);
    signal ALU_FLAG    : STD_LOGIC;

    signal Z_D         : STD_LOGIC;
    signal Z_VALUE     : STD_LOGIC;

begin

    -- 1. Program Counter
	 PC_UNIT: entity work.program_counter
		 port map (
			  CLK    => CLK,
			  RESET  => RESET,
			  PC_OUT => PC_VALUE
		 );

    -- 2. Program ROM
    ROM_UNIT: entity work.program_rom
        port map (
            ADDR => PC_VALUE,
            DATA => ROM_DATA
        );

    -- 3. Separate opcode and immediate value
    OPCODE <= ROM_DATA(11 downto 8);
    IMM    <= ROM_DATA(7 downto 0);

    -- 4. Control Unit
    CU_UNIT: entity work.control_unit
        port map (
            OPCODE      => OPCODE,
            ACC_LOAD    => ACC_LOAD,
            ACC_SRC_IMM => ACC_SRC_IMM,
            ALU_OP      => ALU_OP,
            Z_LOAD      => Z_LOAD
        );
		  
    -- 5. ALU
    ALU_UNIT: entity work.alu_8bit
        port map (
            A      => ACC_VALUE,
            B      => IMM,
            OPCODE => ALU_OP,
            RESULT => ALU_RESULT,
            FLAG   => ALU_FLAG
        );

    -- 6. Select accumulator input
    -- LDI selects the immediate value.
    -- Other supported instructions select the ALU result.
    ACC_D <= IMM when ACC_SRC_IMM = '1'
             else ALU_RESULT;

    -- 7. Eight-bit accumulator register
    ACC_UNIT: entity work.register_8bit
        port map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => ACC_LOAD,
            D     => ACC_D,
            Q     => ACC_VALUE
        );
		  
    -- 8. Calculate the zero flag from the value being written
    Z_D <= '1' when ACC_D = x"00" else '0';

    -- 9. One-bit zero flag register
    Z_UNIT: entity work.register_1bit
        port map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => Z_LOAD,
            D     => Z_D,
            Q     => Z_VALUE
        );
		  
    -- 10. External outputs
    Q  <= ACC_VALUE;
    Z  <= Z_VALUE;
    PC <= PC_VALUE;

end Structural;