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
static const char *ng0 = "D:/Xilinx_ISE_14.7/ISE_project/cpuX/DM.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {255, 0};



static void Always_10_0(char *t0)
{
    char t4[8];
    char t28[8];
    char t29[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2192);
    *((int *)t2) = 1;
    t3 = (t0 + 2024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t5 = (t0 + 876U);
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
    *((unsigned int *)t4) = (t12 & 16777215U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 16777215U);
    t14 = (t0 + 1380);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 24);
    xsi_set_current_line(13, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t14 = (t4 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB21;

LAB18:    if (t18 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t4) = 1;

LAB21:    t14 = (t4 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB22;

LAB23:
LAB24:
LAB12:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1472);
    t7 = (t6 + 44U);
    t14 = *((char **)t7);
    t26 = (t0 + 1472);
    t27 = (t26 + 40U);
    t30 = *((char **)t27);
    t31 = (t0 + 1380);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    xsi_vlog_generic_get_array_select_value(t4, 32, t5, t14, t30, 2, 1, t33, 24, 2);
    t34 = (t0 + 1196);
    xsi_vlogvar_assign_value(t34, t4, 0, 0, 32);
    goto LAB2;

LAB8:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(14, ng0);
    xsi_set_current_line(14, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 1288);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 32);

LAB13:    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(15, ng0);
    t14 = ((char*)((ng2)));
    t26 = (t0 + 1472);
    t27 = (t0 + 1472);
    t30 = (t27 + 44U);
    t31 = *((char **)t30);
    t32 = (t0 + 1472);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t0 + 1288);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t28, t29, t31, t34, 2, 1, t37, 32, 1);
    t38 = (t28 + 4);
    t13 = *((unsigned int *)t38);
    t39 = (!(t13));
    t40 = (t29 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB13;

LAB16:    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t29);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t26, t14, 0, *((unsigned int *)t29), t44);
    goto LAB17;

LAB20:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(17, ng0);
    t26 = (t0 + 968U);
    t27 = *((char **)t26);
    t26 = (t0 + 1472);
    t30 = (t0 + 1472);
    t31 = (t30 + 44U);
    t32 = *((char **)t31);
    t33 = (t0 + 1472);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    t36 = (t0 + 1380);
    t37 = (t36 + 36U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t28, t29, t32, t35, 2, 1, t38, 24, 2);
    t40 = (t28 + 4);
    t45 = *((unsigned int *)t40);
    t39 = (!(t45));
    t46 = (t29 + 4);
    t47 = *((unsigned int *)t46);
    t41 = (!(t47));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB25;

LAB26:    goto LAB24;

LAB25:    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t29);
    t43 = (t48 - t49);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t26, t27, 0, *((unsigned int *)t29), t44);
    goto LAB26;

}


extern void work_m_00000000004143079246_2924402094_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000004143079246_2924402094", "isim/cpuX_t_isim_beh.exe.sim/work/m_00000000004143079246_2924402094.didat");
	xsi_register_executes(pe);
}
