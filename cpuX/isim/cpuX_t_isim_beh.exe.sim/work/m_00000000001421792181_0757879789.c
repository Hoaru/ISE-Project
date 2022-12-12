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
static const char *ng0 = "D:/Xilinx_ISE_14.7/ISE_project/cpuX/NPC.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {31, 0};
static int ng5[] = {28, 0};
static int ng6[] = {27, 0};
static int ng7[] = {2, 0};
static int ng8[] = {1, 0};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {2U, 0U};
static int ng11[] = {15, 0};
static int ng12[] = {16, 0};
static int ng13[] = {4, 0};



static void Always_9_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    int t17;
    char *t18;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 2008);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 4294967295U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 4294967295U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t14, 32);
    t16 = (t0 + 1196);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    xsi_set_current_line(12, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t17 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 32);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(13, ng0);
    t5 = (t0 + 1196);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t14 = (t4 + 4);
    t16 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 0);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 4294967295U);
    t13 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t13 & 4294967295U);
    t18 = (t0 + 1104);
    xsi_vlogvar_assign_value(t18, t4, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(15, ng0);

LAB16:    xsi_set_current_line(16, ng0);
    t5 = (t0 + 1196);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t14 = (t4 + 4);
    t16 = (t7 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (t8 >> 28);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 28);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t13 & 15U);
    t18 = (t0 + 1104);
    t21 = (t0 + 1104);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng4)));
    t25 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t15, t19, t20, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    t33 = (t20 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 67108863U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 67108863U);
    t7 = (t0 + 1104);
    t14 = (t0 + 1104);
    t16 = (t14 + 44U);
    t18 = *((char **)t16);
    t21 = ((char*)((ng6)));
    t22 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t15, t19, t20, ((int*)(t18)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t15 + 4);
    t27 = *((unsigned int *)t23);
    t17 = (!(t27));
    t24 = (t19 + 4);
    t30 = *((unsigned int *)t24);
    t28 = (!(t30));
    t31 = (t17 && t28);
    t25 = (t20 + 4);
    t34 = *((unsigned int *)t25);
    t32 = (!(t34));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 1104);
    t6 = (t0 + 1104);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng8)));
    t18 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t4, t15, t19, ((int*)(t14)), 2, t16, 32, 1, t18, 32, 1);
    t21 = (t4 + 4);
    t8 = *((unsigned int *)t21);
    t17 = (!(t8));
    t22 = (t15 + 4);
    t9 = *((unsigned int *)t22);
    t28 = (!(t9));
    t31 = (t17 && t28);
    t23 = (t19 + 4);
    t10 = *((unsigned int *)t23);
    t32 = (!(t10));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB21;

LAB22:    goto LAB15;

LAB11:    xsi_set_current_line(21, ng0);

LAB23:    xsi_set_current_line(22, ng0);
    t5 = (t0 + 784U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 65535U);
    t14 = (t0 + 1288);
    t16 = (t0 + 1288);
    t18 = (t16 + 44U);
    t21 = *((char **)t18);
    t22 = ((char*)((ng11)));
    t23 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t15, t19, t20, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t15 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (!(t27));
    t25 = (t19 + 4);
    t30 = *((unsigned int *)t25);
    t31 = (!(t30));
    t32 = (t28 && t31);
    t26 = (t20 + 4);
    t34 = *((unsigned int *)t26);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 1288);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t16 = ((char*)((ng4)));
    t18 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t4, t15, t19, ((int*)(t14)), 2, t16, 32, 1, t18, 32, 1);
    t21 = (t4 + 4);
    t8 = *((unsigned int *)t21);
    t17 = (!(t8));
    t22 = (t15 + 4);
    t9 = *((unsigned int *)t22);
    t28 = (!(t9));
    t31 = (t17 && t28);
    t23 = (t19 + 4);
    t10 = *((unsigned int *)t23);
    t32 = (!(t10));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1288);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t6, 32, t7, 32);
    t14 = (t0 + 1288);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 32);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1288);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1196);
    t14 = (t7 + 36U);
    t16 = *((char **)t14);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 32, t16, 32);
    t18 = (t0 + 1104);
    xsi_vlogvar_assign_value(t18, t4, 0, 0, 32);
    goto LAB15;

LAB17:    t37 = *((unsigned int *)t20);
    t38 = (t37 + 0);
    t39 = *((unsigned int *)t15);
    t40 = *((unsigned int *)t19);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t18, t4, t38, *((unsigned int *)t19), t42);
    goto LAB18;

LAB19:    t37 = *((unsigned int *)t20);
    t36 = (t37 + 0);
    t39 = *((unsigned int *)t15);
    t40 = *((unsigned int *)t19);
    t38 = (t39 - t40);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t7, t4, t36, *((unsigned int *)t19), t41);
    goto LAB20;

LAB21:    t11 = *((unsigned int *)t19);
    t36 = (t11 + 0);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t15);
    t38 = (t12 - t13);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t5, t2, t36, *((unsigned int *)t15), t41);
    goto LAB22;

LAB24:    t37 = *((unsigned int *)t20);
    t38 = (t37 + 0);
    t39 = *((unsigned int *)t15);
    t40 = *((unsigned int *)t19);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t14, t4, t38, *((unsigned int *)t19), t42);
    goto LAB25;

LAB26:    t11 = *((unsigned int *)t19);
    t36 = (t11 + 0);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t15);
    t38 = (t12 - t13);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t5, t2, t36, *((unsigned int *)t15), t41);
    goto LAB27;

}


extern void work_m_00000000001421792181_0757879789_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000001421792181_0757879789", "isim/cpuX_t_isim_beh.exe.sim/work/m_00000000001421792181_0757879789.didat");
	xsi_register_executes(pe);
}
