/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/computer/full_adder/not_gate_tb.vhd";



static void work_a_0574237845_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;

LAB0:    t1 = (t0 + 2344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(22, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2152);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(25, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2152);
    xsi_process_wait(t2, t7);

LAB12:    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 4330);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB9;

LAB10:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4364);
    xsi_report(t2, 34U, (unsigned char)0);
    xsi_set_current_line(29, ng0);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB11:    goto LAB10;

LAB13:    goto LAB11;

LAB14:    t2 = (t0 + 4347);
    xsi_report(t2, 17U, (unsigned char)2);
    goto LAB15;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}


extern void work_a_0574237845_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0574237845_3212880686_p_0};
	xsi_register_didat("work_a_0574237845_3212880686", "isim/not_gate_tb_isim_beh.exe.sim/work/a_0574237845_3212880686.didat");
	xsi_register_executes(pe);
}
