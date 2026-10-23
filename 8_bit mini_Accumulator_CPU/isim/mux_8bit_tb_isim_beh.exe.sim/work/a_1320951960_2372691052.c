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
static const char *ng0 = "/home/ise/computer/mimo/mux-8bit-tb.vhd";



static void work_a_1320951960_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 3624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6787);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 6795);
    t4 = (t0 + 4072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 6803);
    t4 = (t0 + 4136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 6811);
    t4 = (t0 + 4200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 6819);
    t4 = (t0 + 4264);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6827);
    t4 = (t0 + 4328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6835);
    t4 = (t0 + 4392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6843);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(67, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 6851);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(71, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 6854);
    t10 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t10 = 0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6885);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t7 = (t0 + 6862);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB13;

LAB14:    t11 = 0;

LAB17:    if (t11 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t11 = (t11 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t10 = 1;
    if (8U == 8U)
        goto LAB26;

LAB27:    t10 = 0;

LAB28:    if (t10 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6919);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(81, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    t7 = (t0 + 6896);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB25;

LAB26:    t11 = 0;

LAB29:    if (t11 < 8U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB27;

LAB31:    t11 = (t11 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 6922);
    t10 = 1;
    if (8U == 8U)
        goto LAB38;

LAB39:    t10 = 0;

LAB40:    if (t10 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6953);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(86, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t7 = (t0 + 6930);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB37;

LAB38:    t11 = 0;

LAB41:    if (t11 < 8U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB39;

LAB43:    t11 = (t11 + 1);
    goto LAB41;

LAB44:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 6956);
    t10 = 1;
    if (8U == 8U)
        goto LAB50;

LAB51:    t10 = 0;

LAB52:    if (t10 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6987);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(91, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    t7 = (t0 + 6964);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB49;

LAB50:    t11 = 0;

LAB53:    if (t11 < 8U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB51;

LAB55:    t11 = (t11 + 1);
    goto LAB53;

LAB56:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 6990);
    t10 = 1;
    if (8U == 8U)
        goto LAB62;

LAB63:    t10 = 0;

LAB64:    if (t10 == 0)
        goto LAB60;

LAB61:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 7021);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(96, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    t7 = (t0 + 6998);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB61;

LAB62:    t11 = 0;

LAB65:    if (t11 < 8U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB63;

LAB67:    t11 = (t11 + 1);
    goto LAB65;

LAB68:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 7024);
    t10 = 1;
    if (8U == 8U)
        goto LAB74;

LAB75:    t10 = 0;

LAB76:    if (t10 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 7055);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(101, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB82:    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    t7 = (t0 + 7032);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB73;

LAB74:    t11 = 0;

LAB77:    if (t11 < 8U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB75;

LAB79:    t11 = (t11 + 1);
    goto LAB77;

LAB80:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 7058);
    t10 = 1;
    if (8U == 8U)
        goto LAB86;

LAB87:    t10 = 0;

LAB88:    if (t10 == 0)
        goto LAB84;

LAB85:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 7089);
    t4 = (t0 + 4520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(106, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 3432);
    xsi_process_wait(t2, t9);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB81:    goto LAB80;

LAB83:    goto LAB81;

LAB84:    t7 = (t0 + 7066);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB85;

LAB86:    t11 = 0;

LAB89:    if (t11 < 8U)
        goto LAB90;
    else
        goto LAB88;

LAB90:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB87;

LAB91:    t11 = (t11 + 1);
    goto LAB89;

LAB92:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 7092);
    t10 = 1;
    if (8U == 8U)
        goto LAB98;

LAB99:    t10 = 0;

LAB100:    if (t10 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 7123);
    xsi_report(t2, 24U, (unsigned char)0);
    xsi_set_current_line(111, ng0);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    t7 = (t0 + 7100);
    xsi_report(t7, 23U, (unsigned char)2);
    goto LAB97;

LAB98:    t11 = 0;

LAB101:    if (t11 < 8U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB99;

LAB103:    t11 = (t11 + 1);
    goto LAB101;

LAB104:    goto LAB2;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

}


extern void work_a_1320951960_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1320951960_2372691052_p_0};
	xsi_register_didat("work_a_1320951960_2372691052", "isim/mux_8bit_tb_isim_beh.exe.sim/work/a_1320951960_2372691052.didat");
	xsi_register_executes(pe);
}
