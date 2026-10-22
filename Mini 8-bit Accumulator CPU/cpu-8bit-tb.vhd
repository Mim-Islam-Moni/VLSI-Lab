LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY cpu_8bit_tb IS
END cpu_8bit_tb;

ARCHITECTURE behavior OF cpu_8bit_tb IS

    COMPONENT cpu_8bit
        PORT (
            CLK   : IN  std_logic;
            RESET : IN  std_logic;
            Q     : OUT std_logic_vector(7 downto 0);
            Z     : OUT std_logic;
            PC    : OUT std_logic_vector(3 downto 0)
        );
    END COMPONENT;
	 
    -- Inputs
    SIGNAL CLK   : std_logic := '0';
    SIGNAL RESET : std_logic := '0';

    -- Outputs
    SIGNAL Q  : std_logic_vector(7 downto 0);
    SIGNAL Z  : std_logic;
    SIGNAL PC : std_logic_vector(3 downto 0);

    CONSTANT CLK_period : time := 10 ns;

BEGIN

    -- Instantiate the CPU
    uut: cpu_8bit
        PORT MAP (
            CLK   => CLK,
            RESET => RESET,
            Q     => Q,
            Z     => Z,
            PC    => PC
        );

    -- Clock generation
    clk_process: PROCESS
    BEGIN
        CLK <= '0';
        WAIT FOR CLK_period / 2;
        CLK <= '1';
        WAIT FOR CLK_period / 2;
    END PROCESS;
	 
    -- Reset and test program
    stim_proc: PROCESS
    BEGIN
        -- Apply synchronous reset
        RESET <= '1';
        WAIT UNTIL rising_edge(CLK);
        WAIT FOR 1 ns;

        ASSERT PC = "0000"
            REPORT "ERROR: PC did not reset to 0"
            SEVERITY error;

        RESET <= '0';
		  
        -- Instruction 0: LDI 0x0F
        WAIT UNTIL rising_edge(CLK);
        WAIT FOR 1 ns;
        ASSERT Q = x"0F" AND Z = '0'
            REPORT "ERROR: LDI failed"
            SEVERITY error;

        -- Instruction 1: OR 0xA0
        WAIT UNTIL rising_edge(CLK);
        WAIT FOR 1 ns;
        ASSERT Q = x"AF" AND Z = '0'
            REPORT "ERROR: OR 0xA0 failed"
            SEVERITY error;

        -- Instruction 2: NOT
        WAIT UNTIL rising_edge(CLK);
        WAIT FOR 1 ns;
        ASSERT Q = x"50" AND Z = '0'
            REPORT "ERROR: NOT failed"
            SEVERITY error;

        -- Instruction 3: SHR
        WAIT UNTIL rising_edge(CLK);
        WAIT FOR 1 ns;
        ASSERT Q = x"28" AND Z = '0'
            REPORT "ERROR: SHR at address 3 failed"
            SEVERITY error;
				
        -- Instruction 4: ADD 0xD8
        WAIT UNTIL rising_edge(CLK);
        WAIT FOR 1 ns;
        ASSERT Q = x"00" AND Z = '1'
            REPORT "ERROR: ADD or zero flag failed"
            SEVERITY error;

        -- Instruction 5: OR 0x81
        WAIT UNTIL rising_edge(CLK);
        WAIT FOR 1 ns;
        ASSERT Q = x"81" AND Z = '0'
            REPORT "ERROR: OR 0x81 failed"
            SEVERITY error;
				
        -- Instruction 6: SHR
        WAIT UNTIL rising_edge(CLK);
        WAIT FOR 1 ns;
        ASSERT Q = x"40" AND Z = '0'
            REPORT "ERROR: SHR at address 6 failed"
            SEVERITY error;

        REPORT "SUCCESS: All Set 5 CPU tests passed!"
            SEVERITY note;

        WAIT;
    END PROCESS;

END behavior;