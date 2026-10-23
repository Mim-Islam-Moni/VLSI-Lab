library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
    Port (
        OPCODE     : in  STD_LOGIC_VECTOR(3 downto 0);
        ACC_LOAD   : out STD_LOGIC;
        ACC_SRC_IMM : out STD_LOGIC;
        ALU_OP     : out STD_LOGIC_VECTOR(2 downto 0);
        Z_LOAD     : out STD_LOGIC
    );
end control_unit;

architecture Behavioral of control_unit is
begin

    process(OPCODE)
    begin

        -- Default: NOP
        ACC_LOAD    <= '0';
        ACC_SRC_IMM <= '0';
        ALU_OP      <= "000";
        Z_LOAD      <= '0';

        case OPCODE is

            -- LDI: Load immediate operand into ACC
            when "0001" =>
                ACC_LOAD    <= '1';
                ACC_SRC_IMM <= '1';
                Z_LOAD      <= '1';

            -- ADD: ACC + immediate operand
            when "0010" =>
                ACC_LOAD <= '1';
                ALU_OP   <= "000";
                Z_LOAD   <= '1';

            -- OR: ACC OR immediate operand
            when "0101" =>
                ACC_LOAD <= '1';
                ALU_OP   <= "011";
                Z_LOAD   <= '1';

            -- NOT: Invert ACC
            when "0111" =>
                ACC_LOAD <= '1';
                ALU_OP   <= "101";
                Z_LOAD   <= '1';

            -- SHR: Shift ACC right by one bit
            when "1001" =>
                ACC_LOAD <= '1';
                ALU_OP   <= "110";
                Z_LOAD   <= '1';

            -- Other opcodes: NOP
            when others =>
                ACC_LOAD    <= '0';
                ACC_SRC_IMM <= '0';
                ALU_OP      <= "000";
                Z_LOAD      <= '0';

        end case;

    end process;

end Behavioral;