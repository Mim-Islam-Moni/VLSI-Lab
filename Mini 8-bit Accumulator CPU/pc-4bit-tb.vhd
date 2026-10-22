LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY pc_4bit_tb IS
END pc_4bit_tb;

ARCHITECTURE behavior OF pc_4bit_tb IS

    COMPONENT program_counter
        PORT (
            CLK    : IN  std_logic;
            RESET  : IN  std_logic;
            PC_OUT : OUT std_logic_vector(3 downto 0)
        );
    END COMPONENT;

    -- Inputs
    signal CLK    : std_logic := '0';
    signal RESET  : std_logic := '0';

    -- Output
    signal PC_OUT : std_logic_vector(3 downto 0);

    constant CLK_period : time := 10 ns;

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: program_counter
        PORT MAP (
            CLK    => CLK,
            RESET  => RESET,
            PC_OUT => PC_OUT
        );

    -- Clock generation
    CLK_process : process
    begin
        CLK <= '0';
        wait for CLK_period / 2;
        CLK <= '1';
        wait for CLK_period / 2;
    end process;
	 
    -- Stimulus process
    stim_proc: process
    begin

        -- Apply reset
        RESET <= '1';
        wait for CLK_period * 2;

        -- Release reset; PC should start counting
        RESET <= '0';
        wait for CLK_period * 5;

        -- Apply reset again; PC should return to 0000
        RESET <= '1';
        wait for CLK_period * 2;
		  
        -- Release reset and count again
        RESET <= '0';
        wait for CLK_period * 5;

        -- End simulation
        wait;
    end process;

END behavior;