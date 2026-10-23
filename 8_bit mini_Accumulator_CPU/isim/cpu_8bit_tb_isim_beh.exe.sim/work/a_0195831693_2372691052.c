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
static const char *ng0 = "/home/ise/computer/mimo/cpu-8bit-tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0195831693_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0195831693_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int64 t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(57, ng0);

LAB6:    t2 = (t0 + 3512);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3512);
    *((int *)t4) = 0;
    xsi_set_current_line(58, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5752);
    t7 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t7 = 0;

LAB16:    if (t7 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);

LAB22:    t2 = (t0 + 3528);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t10 = (t0 + 5756);
    xsi_report(t10, 28U, (unsigned char)2);
    goto LAB13;

LAB14:    t9 = 0;

LAB17:    if (t9 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t9 = (t9 + 1);
    goto LAB17;

LAB20:    t4 = (t0 + 3528);
    *((int *)t4) = 0;
    xsi_set_current_line(68, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5784);
    t12 = 1;
    if (8U == 8U)
        goto LAB33;

LAB34:    t12 = 0;

LAB35:    if (t12 == 1)
        goto LAB30;

LAB31:    t7 = (unsigned char)0;

LAB32:    if (t7 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(74, ng0);

LAB41:    t2 = (t0 + 3544);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t10 = (t0 + 5792);
    xsi_report(t10, 17U, (unsigned char)2);
    goto LAB29;

LAB30:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t13 = *((unsigned char *)t11);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB32;

LAB33:    t9 = 0;

LAB36:    if (t9 < 8U)
        goto LAB37;
    else
        goto LAB35;

LAB37:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB34;

LAB38:    t9 = (t9 + 1);
    goto LAB36;

LAB39:    t4 = (t0 + 3544);
    *((int *)t4) = 0;
    xsi_set_current_line(75, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB45:    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB40:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB39;
    else
        goto LAB41;

LAB42:    goto LAB40;

LAB43:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5809);
    t12 = 1;
    if (8U == 8U)
        goto LAB52;

LAB53:    t12 = 0;

LAB54:    if (t12 == 1)
        goto LAB49;

LAB50:    t7 = (unsigned char)0;

LAB51:    if (t7 == 0)
        goto LAB47;

LAB48:    xsi_set_current_line(81, ng0);

LAB60:    t2 = (t0 + 3560);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB44:    goto LAB43;

LAB46:    goto LAB44;

LAB47:    t10 = (t0 + 5817);
    xsi_report(t10, 21U, (unsigned char)2);
    goto LAB48;

LAB49:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t13 = *((unsigned char *)t11);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB51;

LAB52:    t9 = 0;

LAB55:    if (t9 < 8U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB53;

LAB57:    t9 = (t9 + 1);
    goto LAB55;

LAB58:    t4 = (t0 + 3560);
    *((int *)t4) = 0;
    xsi_set_current_line(82, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB64:    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB59:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB58;
    else
        goto LAB60;

LAB61:    goto LAB59;

LAB62:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5838);
    t12 = 1;
    if (8U == 8U)
        goto LAB71;

LAB72:    t12 = 0;

LAB73:    if (t12 == 1)
        goto LAB68;

LAB69:    t7 = (unsigned char)0;

LAB70:    if (t7 == 0)
        goto LAB66;

LAB67:    xsi_set_current_line(88, ng0);

LAB79:    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB63:    goto LAB62;

LAB65:    goto LAB63;

LAB66:    t10 = (t0 + 5846);
    xsi_report(t10, 17U, (unsigned char)2);
    goto LAB67;

LAB68:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t13 = *((unsigned char *)t11);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB70;

LAB71:    t9 = 0;

LAB74:    if (t9 < 8U)
        goto LAB75;
    else
        goto LAB73;

LAB75:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB72;

LAB76:    t9 = (t9 + 1);
    goto LAB74;

LAB77:    t4 = (t0 + 3576);
    *((int *)t4) = 0;
    xsi_set_current_line(89, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB83:    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB78:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB77;
    else
        goto LAB79;

LAB80:    goto LAB78;

LAB81:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5863);
    t12 = 1;
    if (8U == 8U)
        goto LAB90;

LAB91:    t12 = 0;

LAB92:    if (t12 == 1)
        goto LAB87;

LAB88:    t7 = (unsigned char)0;

LAB89:    if (t7 == 0)
        goto LAB85;

LAB86:    xsi_set_current_line(95, ng0);

LAB98:    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB82:    goto LAB81;

LAB84:    goto LAB82;

LAB85:    t10 = (t0 + 5871);
    xsi_report(t10, 30U, (unsigned char)2);
    goto LAB86;

LAB87:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t13 = *((unsigned char *)t11);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB89;

LAB90:    t9 = 0;

LAB93:    if (t9 < 8U)
        goto LAB94;
    else
        goto LAB92;

LAB94:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB91;

LAB95:    t9 = (t9 + 1);
    goto LAB93;

LAB96:    t4 = (t0 + 3592);
    *((int *)t4) = 0;
    xsi_set_current_line(96, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB96;
    else
        goto LAB98;

LAB99:    goto LAB97;

LAB100:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5901);
    t12 = 1;
    if (8U == 8U)
        goto LAB109;

LAB110:    t12 = 0;

LAB111:    if (t12 == 1)
        goto LAB106;

LAB107:    t7 = (unsigned char)0;

LAB108:    if (t7 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(102, ng0);

LAB117:    t2 = (t0 + 3608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    t10 = (t0 + 5909);
    xsi_report(t10, 30U, (unsigned char)2);
    goto LAB105;

LAB106:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t13 = *((unsigned char *)t11);
    t14 = (t13 == (unsigned char)3);
    t7 = t14;
    goto LAB108;

LAB109:    t9 = 0;

LAB112:    if (t9 < 8U)
        goto LAB113;
    else
        goto LAB111;

LAB113:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB110;

LAB114:    t9 = (t9 + 1);
    goto LAB112;

LAB115:    t4 = (t0 + 3608);
    *((int *)t4) = 0;
    xsi_set_current_line(103, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB121:    *((char **)t1) = &&LAB122;
    goto LAB1;

LAB116:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB115;
    else
        goto LAB117;

LAB118:    goto LAB116;

LAB119:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5939);
    t12 = 1;
    if (8U == 8U)
        goto LAB128;

LAB129:    t12 = 0;

LAB130:    if (t12 == 1)
        goto LAB125;

LAB126:    t7 = (unsigned char)0;

LAB127:    if (t7 == 0)
        goto LAB123;

LAB124:    xsi_set_current_line(109, ng0);

LAB136:    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB137;
    goto LAB1;

LAB120:    goto LAB119;

LAB122:    goto LAB120;

LAB123:    t10 = (t0 + 5947);
    xsi_report(t10, 21U, (unsigned char)2);
    goto LAB124;

LAB125:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t13 = *((unsigned char *)t11);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB127;

LAB128:    t9 = 0;

LAB131:    if (t9 < 8U)
        goto LAB132;
    else
        goto LAB130;

LAB132:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB129;

LAB133:    t9 = (t9 + 1);
    goto LAB131;

LAB134:    t4 = (t0 + 3624);
    *((int *)t4) = 0;
    xsi_set_current_line(110, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t8);

LAB140:    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB135:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB134;
    else
        goto LAB136;

LAB137:    goto LAB135;

LAB138:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5968);
    t12 = 1;
    if (8U == 8U)
        goto LAB147;

LAB148:    t12 = 0;

LAB149:    if (t12 == 1)
        goto LAB144;

LAB145:    t7 = (unsigned char)0;

LAB146:    if (t7 == 0)
        goto LAB142;

LAB143:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6006);
    xsi_report(t2, 36U, (unsigned char)0);
    xsi_set_current_line(118, ng0);

LAB155:    *((char **)t1) = &&LAB156;
    goto LAB1;

LAB139:    goto LAB138;

LAB141:    goto LAB139;

LAB142:    t10 = (t0 + 5976);
    xsi_report(t10, 30U, (unsigned char)2);
    goto LAB143;

LAB144:    t10 = (t0 + 1512U);
    t11 = *((char **)t10);
    t13 = *((unsigned char *)t11);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB146;

LAB147:    t9 = 0;

LAB150:    if (t9 < 8U)
        goto LAB151;
    else
        goto LAB149;

LAB151:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB148;

LAB152:    t9 = (t9 + 1);
    goto LAB150;

LAB153:    goto LAB2;

LAB154:    goto LAB153;

LAB156:    goto LAB154;

}


extern void work_a_0195831693_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0195831693_2372691052_p_0,(void *)work_a_0195831693_2372691052_p_1};
	xsi_register_didat("work_a_0195831693_2372691052", "isim/cpu_8bit_tb_isim_beh.exe.sim/work/a_0195831693_2372691052.didat");
	xsi_register_executes(pe);
}
