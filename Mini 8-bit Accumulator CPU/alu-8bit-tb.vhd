library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit_tb is
end alu_8bit_tb;

architecture behavior of alu_8bit_tb is

    component alu_8bit
        Port (
            A      : in  STD_LOGIC_VECTOR(7 downto 0);
            B      : in  STD_LOGIC_VECTOR(7 downto 0);
            OPCODE : in  STD_LOGIC_VECTOR(2 downto 0);
            RESULT : out STD_LOGIC_VECTOR(7 downto 0);
            FLAG   : out STD_LOGIC
        );
    end component;
	 
    signal A      : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal B      : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal OPCODE : STD_LOGIC_VECTOR(2 downto 0) := "000";
    signal RESULT : STD_LOGIC_VECTOR(7 downto 0);
    signal FLAG   : STD_LOGIC;

begin

    uut: alu_8bit
        port map (
            A      => A,
            B      => B,
            OPCODE => OPCODE,
            RESULT => RESULT,
            FLAG   => FLAG
        );

    stim_proc: process
    begin

        -- Test 1: ADD
        A <= x"0F";
        B <= x"D8";
        OPCODE <= "000";
        wait for 10 ns;
        assert RESULT = x"E7" and FLAG = '0'
            report "ADD test failed"
            severity error;

        -- Test 2: SUB
        A <= x"0F";
        B <= x"0F";
        OPCODE <= "001";
        wait for 10 ns;
		  
        assert RESULT = x"00" and FLAG = '1'
            report "SUB test failed"
            severity error;

        -- Test 3: AND
        A <= x"F0";
        B <= x"0F";
        OPCODE <= "010";
        wait for 10 ns;
		  
        assert RESULT = x"00" and FLAG = '1'
            report "AND test failed"
            severity error;

        -- Test 4: OR
        A <= x"0F";
        B <= x"A0";
        OPCODE <= "011";
        wait for 10 ns;
		  
        assert RESULT = x"AF" and FLAG = '0'
            report "OR test failed"
            severity error;

        -- Test 5: XOR
        A <= x"AA";
        B <= x"FF";
        OPCODE <= "100";
        wait for 10 ns;

        assert RESULT = x"55" and FLAG = '0'
            report "XOR test failed"
            severity error;
				
        -- Test 6: NOT
        A <= x"AF";
        B <= x"00";
        OPCODE <= "101";
        wait for 10 ns;

        assert RESULT = x"50" and FLAG = '0'
            report "NOT test failed"
            severity error;

        -- Test 7: SHR
        A <= x"81";
        B <= x"00";
        OPCODE <= "110";
        wait for 10 ns;

        assert RESULT = x"40" and FLAG = '0'
            report "SHR test failed"
            severity error;

        -- Test 8: Unused opcode
        A <= x"12";
        B <= x"34";
        OPCODE <= "111";
        wait for 10 ns;
        assert RESULT = x"00" and FLAG = '1'
            report "Unused opcode test failed"
            severity error;

        report "All ALU tests completed."
            severity note;

        wait;

    end process;

end behavior;

