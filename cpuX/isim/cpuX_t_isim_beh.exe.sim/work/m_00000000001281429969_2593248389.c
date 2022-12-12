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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xilinx_ISE_14.7/ISE_project/cpuX/CTRL.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {13U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {35U, 0U};
static unsigned int ng8[] = {43U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {15U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {42U, 0U};



static void Always_12_0(char *t0)
{
    char t7[8];
    char t31[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2652);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:
LAB25:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);

LAB41:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB50;

LAB51:
LAB53:
LAB52:
LAB54:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1932);
    t5 = (t2 + 36U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng1)));
    memset(t32, 0, 8);
    xsi_vlog_signed_equal(t32, 32, t8, 32, t9, 32);
    memset(t31, 0, 8);
    t22 = (t32 + 4);
    t10 = *((unsigned int *)t22);
    t11 = (~(t10));
    t12 = *((unsigned int *)t32);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t22) != 0)
        goto LAB62;

LAB63:    t29 = (t31 + 4);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t29);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB64;

LAB65:    t18 = *((unsigned int *)t31);
    t19 = (~(t18));
    t20 = *((unsigned int *)t29);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t29) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t31) > 0)
        goto LAB70;

LAB71:    memcpy(t7, t37, 8);

LAB72:    t38 = (t0 + 1656);
    xsi_vlogvar_assign_value(t38, t7, 0, 0, 3);
    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);

LAB26:    xsi_set_current_line(28, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1932);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB25;

LAB9:    xsi_set_current_line(34, ng0);

LAB27:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB25;

LAB11:    xsi_set_current_line(40, ng0);

LAB28:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB25;

LAB13:    xsi_set_current_line(47, ng0);

LAB29:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB25;

LAB15:    xsi_set_current_line(53, ng0);

LAB30:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t4);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB34;

LAB31:    if (t19 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t7) = 1;

LAB34:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1472);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);

LAB37:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 1748);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB25;

LAB17:    xsi_set_current_line(61, ng0);

LAB38:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    goto LAB25;

LAB19:    xsi_set_current_line(65, ng0);

LAB39:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1104);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB25;

LAB21:    xsi_set_current_line(70, ng0);

LAB40:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1380);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB25;

LAB33:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(55, ng0);
    t29 = ((char*)((ng6)));
    t30 = (t0 + 1472);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 2);
    goto LAB37;

LAB42:    xsi_set_current_line(79, ng0);

LAB55:    xsi_set_current_line(80, ng0);
    t5 = ((char*)((ng4)));
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 3);
    goto LAB54;

LAB44:    xsi_set_current_line(83, ng0);

LAB56:    xsi_set_current_line(84, ng0);
    t5 = ((char*)((ng13)));
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 3);
    goto LAB54;

LAB46:    xsi_set_current_line(87, ng0);

LAB57:    xsi_set_current_line(88, ng0);
    t5 = ((char*)((ng6)));
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 3);
    goto LAB54;

LAB48:    xsi_set_current_line(91, ng0);

LAB58:    xsi_set_current_line(92, ng0);
    t5 = ((char*)((ng9)));
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 3);
    goto LAB54;

LAB50:    xsi_set_current_line(95, ng0);

LAB59:    xsi_set_current_line(96, ng0);
    t5 = ((char*)((ng13)));
    t8 = (t0 + 1840);
    xsi_vlogvar_assign_value(t8, t5, 0, 0, 3);
    goto LAB54;

LAB60:    *((unsigned int *)t31) = 1;
    goto LAB63;

LAB62:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB63;

LAB64:    t30 = (t0 + 1748);
    t33 = (t30 + 36U);
    t34 = *((char **)t33);
    goto LAB65;

LAB66:    t35 = (t0 + 1840);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t7, 3, t34, 3, t37, 3);
    goto LAB72;

LAB70:    memcpy(t7, t34, 8);
    goto LAB72;

}


extern void work_m_00000000001281429969_2593248389_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_00000000001281429969_2593248389", "isim/cpuX_t_isim_beh.exe.sim/work/m_00000000001281429969_2593248389.didat");
	xsi_register_executes(pe);
}
