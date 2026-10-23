LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY program_rom_tb IS
END program_rom_tb;

ARCHITECTURE behavior OF program_rom_tb IS

    -- Component Declaration
    COMPONENT program_rom
        PORT (
            ADDR : IN  std_logic_vector(3 downto 0);
            DATA : OUT std_logic_vector(11 downto 0)
        );
    END COMPONENT;
	 
    -- Inputs
    signal ADDR : std_logic_vector(3 downto 0) := (others => '0');

    -- Output
    signal DATA : std_logic_vector(11 downto 0);

BEGIN

    -- Instantiate the Unit Under Test (UUT)
    uut: program_rom
        PORT MAP (
            ADDR => ADDR,
            DATA => DATA
        );

    -- Stimulus process
    stim_proc: process
    begin
	 
        -- Address 0: LDI 0x0F
        ADDR <= "0000";
        wait for 10 ns;

        -- Address 1: OR 0xA0
        ADDR <= "0001";
        wait for 10 ns;

        -- Address 2: NOT
        ADDR <= "0010";
        wait for 10 ns;

        -- Address 3: SHR
        ADDR <= "0011";
        wait for 10 ns;
		  
        -- Address 4: ADD 0xD8
        ADDR <= "0100";
        wait for 10 ns;

        -- Address 5: OR 0x81
        ADDR <= "0101";
        wait for 10 ns;

        -- Address 6: SHR
        ADDR <= "0110";
        wait for 10 ns;

        -- Test unused addresses: NOP
        ADDR <= "0111";
        wait for 10 ns;
		  
        ADDR <= "1000";
        wait for 10 ns;

        ADDR <= "1111";
        wait for 10 ns;

        -- End simulation
        wait;

    end process;
	 
END behavior;