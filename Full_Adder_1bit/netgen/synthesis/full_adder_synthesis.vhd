--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: full_adder_synthesis.vhd
-- /___/   /\     Timestamp: Mon Sep 28 05:35:41 2026
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm full_adder -w -dir netgen/synthesis -ofmt vhdl -sim full_adder.ngc full_adder_synthesis.vhd 
-- Device	: xc7a100t-3-csg324
-- Input file	: full_adder.ngc
-- Output file	: /home/ise/computer/full_adder/netgen/synthesis/full_adder_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: full_adder
-- Xilinx	: /opt/Xilinx/14.7/ISE_DS/ISE/
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity full_adder is
  port (
    A : in STD_LOGIC := 'X'; 
    B : in STD_LOGIC := 'X'; 
    CIN : in STD_LOGIC := 'X'; 
    SUM : out STD_LOGIC; 
    COUT : out STD_LOGIC 
  );
end full_adder;

architecture Structure of full_adder is
  signal A_IBUF_0 : STD_LOGIC; 
  signal B_IBUF_1 : STD_LOGIC; 
  signal CIN_IBUF_2 : STD_LOGIC; 
  signal SUM_OBUF_3 : STD_LOGIC; 
  signal COUT_OBUF_4 : STD_LOGIC; 
begin
  U3_U3_Y1 : LUT3
    generic map(
      INIT => X"E8"
    )
    port map (
      I0 => B_IBUF_1,
      I1 => CIN_IBUF_2,
      I2 => A_IBUF_0,
      O => COUT_OBUF_4
    );
  SUM1 : LUT3
    generic map(
      INIT => X"96"
    )
    port map (
      I0 => A_IBUF_0,
      I1 => B_IBUF_1,
      I2 => CIN_IBUF_2,
      O => SUM_OBUF_3
    );
  A_IBUF : IBUF
    port map (
      I => A,
      O => A_IBUF_0
    );
  B_IBUF : IBUF
    port map (
      I => B,
      O => B_IBUF_1
    );
  CIN_IBUF : IBUF
    port map (
      I => CIN,
      O => CIN_IBUF_2
    );
  SUM_OBUF : OBUF
    port map (
      I => SUM_OBUF_3,
      O => SUM
    );
  COUT_OBUF : OBUF
    port map (
      I => COUT_OBUF_4,
      O => COUT
    );

end Structure;

