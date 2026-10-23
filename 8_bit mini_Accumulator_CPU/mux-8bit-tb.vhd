LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY mux_8bit_tb IS
END mux_8bit_tb;

ARCHITECTURE behavior OF mux_8bit_tb IS

    COMPONENT mux_8bit
        PORT (
            I0 : IN  std_logic_vector(7 downto 0);
            I1 : IN  std_logic_vector(7 downto 0);
            I2 : IN  std_logic_vector(7 downto 0);
            I3 : IN  std_logic_vector(7 downto 0);
            I4 : IN  std_logic_vector(7 downto 0);
            I5 : IN  std_logic_vector(7 downto 0);
            I6 : IN  std_logic_vector(7 downto 0);
            I7 : IN  std_logic_vector(7 downto 0);
            S  : IN  std_logic_vector(2 downto 0);
            Y  : OUT std_logic_vector(7 downto 0)
        );
    END COMPONENT;
	 
    -- Inputs
    signal I0 : std_logic_vector(7 downto 0) := (others => '0');
    signal I1 : std_logic_vector(7 downto 0) := (others => '0');
    signal I2 : std_logic_vector(7 downto 0) := (others => '0');
    signal I3 : std_logic_vector(7 downto 0) := (others => '0');
    signal I4 : std_logic_vector(7 downto 0) := (others => '0');
    signal I5 : std_logic_vector(7 downto 0) := (others => '0');
    signal I6 : std_logic_vector(7 downto 0) := (others => '0');
    signal I7 : std_logic_vector(7 downto 0) := (others => '0');
    signal S  : std_logic_vector(2 downto 0) := "000";

    -- Output
    signal Y : std_logic_vector(7 downto 0);

BEGIN

    uut: mux_8bit
        PORT MAP (
            I0 => I0,
            I1 => I1,
            I2 => I2,
            I3 => I3,
            I4 => I4,
            I5 => I5,
            I6 => I6,
            I7 => I7,
            S  => S,
            Y  => Y
        );
		  
    stim_proc: process
    begin

        -- Give each input a unique value
        I0 <= x"01";
        I1 <= x"02";
        I2 <= x"04";
        I3 <= x"08";
        I4 <= x"10";
        I5 <= x"20";
        I6 <= x"40";
        I7 <= x"80";
		  
        wait for 1 ns;

        -- Select I0
        S <= "000";
        wait for 10 ns;
        assert Y = x"01" report "Mux I0 selection failed" severity error;

        -- Select I1
        S <= "001";
        wait for 10 ns;
        assert Y = x"02" report "Mux I1 selection failed" severity error;

        -- Select I2
        S <= "010";
        wait for 10 ns;
        assert Y = x"04" report "Mux I2 selection failed" severity error;

        -- Select I3
        S <= "011";
        wait for 10 ns;
        assert Y = x"08" report "Mux I3 selection failed" severity error;

        -- Select I4
        S <= "100";
        wait for 10 ns;
        assert Y = x"10" report "Mux I4 selection failed" severity error;

        -- Select I5
        S <= "101";
        wait for 10 ns;
        assert Y = x"20" report "Mux I5 selection failed" severity error;

        -- Select I6
        S <= "110";
        wait for 10 ns;
        assert Y = x"40" report "Mux I6 selection failed" severity error;

        -- Select I7
        S <= "111";
        wait for 10 ns;
        assert Y = x"80" report "Mux I7 selection failed" severity error;

        report "All MUX tests completed." severity note;

        wait;
    end process;

END behavior;