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
static const char *ng0 = "D:/Xilinx_ISE_14.7/ISE_project/cpuX/EP.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {15, 0};
static int ng3[] = {0, 0};
static int ng4[] = {31, 0};
static int ng5[] = {16, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {65535U, 0U};
static unsigned int ng8[] = {2U, 0U};



static void Always_6_0(char *t0)
{
    char t7[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t47[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 1732);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(9, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(11, ng0);

LAB16:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 65535U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 65535U);
    t15 = (t0 + 920);
    t19 = (t0 + 920);
    t20 = (t19 + 44U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng2)));
    t23 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t16 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 920);
    t5 = (t0 + 920);
    t8 = (t5 + 44U);
    t15 = *((char **)t8);
    t19 = ((char*)((ng4)));
    t20 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t7, t16, t17, ((int*)(t15)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t21);
    t6 = (!(t9));
    t22 = (t16 + 4);
    t10 = *((unsigned int *)t22);
    t26 = (!(t10));
    t29 = (t6 && t26);
    t23 = (t17 + 4);
    t11 = *((unsigned int *)t23);
    t30 = (!(t11));
    t33 = (t29 && t30);
    if (t33 == 1)
        goto LAB19;

LAB20:    goto LAB15;

LAB9:    xsi_set_current_line(16, ng0);

LAB21:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 65535U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 65535U);
    t15 = (t0 + 920);
    t19 = (t0 + 920);
    t20 = (t19 + 44U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng2)));
    t23 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t16 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t17, 0, 8);
    t8 = (t17 + 4);
    t15 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t15);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t8) = t14;
    memset(t16, 0, 8);
    t19 = (t17 + 4);
    t25 = *((unsigned int *)t19);
    t28 = (~(t25));
    t32 = *((unsigned int *)t17);
    t35 = (t32 & t28);
    t37 = (t35 & 1U);
    if (t37 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t19) != 0)
        goto LAB26;

LAB27:    t21 = (t16 + 4);
    t38 = *((unsigned int *)t16);
    t41 = *((unsigned int *)t21);
    t42 = (t38 || t41);
    if (t42 > 0)
        goto LAB28;

LAB29:    t43 = *((unsigned int *)t16);
    t44 = (~(t43));
    t45 = *((unsigned int *)t21);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t21) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t16) > 0)
        goto LAB34;

LAB35:    memcpy(t7, t23, 8);

LAB36:    t24 = (t0 + 920);
    t27 = (t0 + 920);
    t31 = (t27 + 44U);
    t49 = *((char **)t31);
    t50 = ((char*)((ng4)));
    t51 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t18, t47, t48, ((int*)(t49)), 2, t50, 32, 1, t51, 32, 1);
    t52 = (t18 + 4);
    t53 = *((unsigned int *)t52);
    t6 = (!(t53));
    t54 = (t47 + 4);
    t55 = *((unsigned int *)t54);
    t26 = (!(t55));
    t29 = (t6 && t26);
    t56 = (t48 + 4);
    t57 = *((unsigned int *)t56);
    t30 = (!(t57));
    t33 = (t29 && t30);
    if (t33 == 1)
        goto LAB37;

LAB38:    goto LAB15;

LAB11:    xsi_set_current_line(21, ng0);

LAB39:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 920);
    t8 = (t0 + 920);
    t15 = (t8 + 44U);
    t19 = *((char **)t15);
    t20 = ((char*)((ng2)));
    t21 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t7, t16, t17, ((int*)(t19)), 2, t20, 32, 1, t21, 32, 1);
    t22 = (t7 + 4);
    t9 = *((unsigned int *)t22);
    t26 = (!(t9));
    t23 = (t16 + 4);
    t10 = *((unsigned int *)t23);
    t29 = (!(t10));
    t30 = (t26 && t29);
    t24 = (t17 + 4);
    t11 = *((unsigned int *)t24);
    t33 = (!(t11));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t8 = (t0 + 920);
    t15 = (t0 + 920);
    t19 = (t15 + 44U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng4)));
    t22 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t16, t17, t18, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t16 + 4);
    t25 = *((unsigned int *)t23);
    t6 = (!(t25));
    t24 = (t17 + 4);
    t28 = *((unsigned int *)t24);
    t26 = (!(t28));
    t29 = (t6 && t26);
    t27 = (t18 + 4);
    t32 = *((unsigned int *)t27);
    t30 = (!(t32));
    t33 = (t29 && t30);
    if (t33 == 1)
        goto LAB42;

LAB43:    goto LAB15;

LAB17:    t35 = *((unsigned int *)t18);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t17);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t15, t7, t36, *((unsigned int *)t17), t40);
    goto LAB18;

LAB19:    t12 = *((unsigned int *)t17);
    t34 = (t12 + 0);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t16);
    t36 = (t13 - t14);
    t39 = (t36 + 1);
    xsi_vlogvar_assign_value(t4, t2, t34, *((unsigned int *)t16), t39);
    goto LAB20;

LAB22:    t35 = *((unsigned int *)t18);
    t36 = (t35 + 0);
    t37 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t17);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t15, t7, t36, *((unsigned int *)t17), t40);
    goto LAB23;

LAB24:    *((unsigned int *)t16) = 1;
    goto LAB27;

LAB26:    t20 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB27;

LAB28:    t22 = ((char*)((ng7)));
    goto LAB29;

LAB30:    t23 = ((char*)((ng1)));
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t7, 16, t22, 16, t23, 16);
    goto LAB36;

LAB34:    memcpy(t7, t22, 8);
    goto LAB36;

LAB37:    t58 = *((unsigned int *)t48);
    t34 = (t58 + 0);
    t59 = *((unsigned int *)t18);
    t60 = *((unsigned int *)t47);
    t36 = (t59 - t60);
    t39 = (t36 + 1);
    xsi_vlogvar_assign_value(t24, t7, t34, *((unsigned int *)t47), t39);
    goto LAB38;

LAB40:    t12 = *((unsigned int *)t17);
    t36 = (t12 + 0);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t16);
    t39 = (t13 - t14);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t5, t4, t36, *((unsigned int *)t16), t40);
    goto LAB41;

LAB42:    t35 = *((unsigned int *)t18);
    t34 = (t35 + 0);
    t37 = *((unsigned int *)t16);
    t38 = *((unsigned int *)t17);
    t36 = (t37 - t38);
    t39 = (t36 + 1);
    xsi_vlogvar_assign_value(t8, t7, t34, *((unsigned int *)t17), t39);
    goto LAB43;

}


extern void work_m_00000000000489527538_3562244150_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000000489527538_3562244150", "isim/cpuX_t_isim_beh.exe.sim/work/m_00000000000489527538_3562244150.didat");
	xsi_register_executes(pe);
}
