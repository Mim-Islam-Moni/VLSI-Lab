library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity program_rom is
    Port (
        ADDR : in  STD_LOGIC_VECTOR(3 downto 0);
        DATA : out STD_LOGIC_VECTOR(11 downto 0)
    );
end program_rom;

architecture Behavioral of program_rom is
begin

    process(ADDR)
    begin
        case ADDR is

            -- Set 5 program
            when "0000" =>
                DATA <= "000100001111"; -- LDI 0x0F

            when "0001" =>
                DATA <= "010110100000"; -- OR 0xA0

            when "0010" =>
                DATA <= "011100000000"; -- NOT


            when "0011" =>
                DATA <= "100100000000"; -- SHR

            when "0100" =>
                DATA <= "001011011000"; -- ADD 0xD8

            when "0101" =>
                DATA <= "010110000001"; -- OR 0x81

            when "0110" =>
                DATA <= "100100000000"; -- SHR
					 
            -- Unused addresses: NOP
            when others =>
                DATA <= "000000000000";

        end case;
    end process;

end Behavioral;