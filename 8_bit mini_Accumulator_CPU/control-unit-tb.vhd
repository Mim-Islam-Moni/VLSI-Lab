library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit_tb is
end control_unit_tb;

architecture behavior of control_unit_tb is

    component control_unit
        Port (
            OPCODE      : in  STD_LOGIC_VECTOR(3 downto 0);
            ACC_LOAD    : out STD_LOGIC;
            ACC_SRC_IMM : out STD_LOGIC;
            ALU_OP      : out STD_LOGIC_VECTOR(2 downto 0);
            Z_LOAD      : out STD_LOGIC
        );
    end component;
	 
    signal OPCODE      : STD_LOGIC_VECTOR(3 downto 0) := "0000";
    signal ACC_LOAD    : STD_LOGIC;
    signal ACC_SRC_IMM : STD_LOGIC;
    signal ALU_OP      : STD_LOGIC_VECTOR(2 downto 0);
    signal Z_LOAD      : STD_LOGIC;

begin

    uut: control_unit
        port map (
            OPCODE      => OPCODE,
            ACC_LOAD    => ACC_LOAD,
            ACC_SRC_IMM => ACC_SRC_IMM,
            ALU_OP      => ALU_OP,
            Z_LOAD      => Z_LOAD
        );

    stim_proc: process
    begin

        OPCODE <= "0001"; -- LDI
        wait for 10 ns;

        OPCODE <= "0010"; -- ADD
        wait for 10 ns;

        OPCODE <= "0101"; -- OR
        wait for 10 ns;

        OPCODE <= "0111"; -- NOT
        wait for 10 ns;
		  
        OPCODE <= "1001"; -- SHR
        wait for 10 ns;

        OPCODE <= "0000"; -- NOP
        wait for 10 ns;

        wait;
    end process;

end behavior;