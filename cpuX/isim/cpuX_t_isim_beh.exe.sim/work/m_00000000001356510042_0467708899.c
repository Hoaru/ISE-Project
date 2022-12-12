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
static const char *ng0 = "D:/Xilinx_ISE_14.7/ISE_project/cpuX/IM.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {537919488U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {537985024U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {36900U, 0U};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {537395210U, 0U};
static unsigned int ng9[] = {16U, 0U};
static unsigned int ng10[] = {304611332U, 0U};
static unsigned int ng11[] = {20U, 0U};
static unsigned int ng12[] = {34770976U, 0U};
static unsigned int ng13[] = {24U, 0U};
static unsigned int ng14[] = {571473921U, 0U};
static unsigned int ng15[] = {28U, 0U};
static unsigned int ng16[] = {573636609U, 0U};
static unsigned int ng17[] = {32U, 0U};
static unsigned int ng18[] = {134217732U, 0U};
static unsigned int ng19[] = {36U, 0U};
static unsigned int ng20[] = {2886860864U, 0U};
static unsigned int ng21[] = {40U, 0U};
static unsigned int ng22[] = {2349858880U, 0U};
static unsigned int ng23[] = {44U, 0U};
static unsigned int ng24[] = {34684970U, 0U};



static void Always_9_0(char *t0)
{
    char t4[8];
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
    int t15;
    char *t16;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 2376);
    *((int *)t2) = 1;
    t3 = (t0 + 2208);
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
    *((unsigned int *)t4) = (t12 & 16777215U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 16777215U);
    t14 = (t0 + 828);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 24);
    xsi_set_current_line(12, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);

LAB6:    t6 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t6, 24);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 24, t2, 24);
    if (t15 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB33:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 26);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 63U);
    t16 = (t0 + 1196);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 6);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 63U);
    t16 = (t0 + 1288);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 6);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 6);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 6);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 31U);
    t16 = (t0 + 1380);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 5);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 21);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 21);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 31U);
    t16 = (t0 + 1472);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 5);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 16);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 16);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 31U);
    t16 = (t0 + 1564);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 5);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 11);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 11);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 31U);
    t16 = (t0 + 1656);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 5);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 65535U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 65535U);
    t16 = (t0 + 1012);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 16);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    t11 = (t10 >> 0);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 67108863U);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 67108863U);
    t16 = (t0 + 1104);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 26);
    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);
    t7 = ((char*)((ng2)));
    t14 = (t0 + 920);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB33;

LAB9:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB11:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng6)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB13:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB15:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng10)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB17:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng12)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB19:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng14)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB21:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng16)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB23:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng18)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB25:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng20)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng22)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng24)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 32);
    goto LAB33;

}


extern void work_m_00000000001356510042_0467708899_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000001356510042_0467708899", "isim/cpuX_t_isim_beh.exe.sim/work/m_00000000001356510042_0467708899.didat");
	xsi_register_executes(pe);
}
