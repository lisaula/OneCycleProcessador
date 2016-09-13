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
static const char *ng0 = "C:/Users/Raim/Documents/Lab_Orga_Archivos/Processador/ALU.v";
static int ng1[] = {8, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static int ng8[] = {0, 0};
static int ng9[] = {2, 0};



static void NetDecl_17_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3024);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0U);

LAB1:    return;
}

static void NetDecl_18_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1276U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 1, t2, 32);
    t5 = (t0 + 3060);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0U);
    t18 = (t0 + 2972);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_23_2(char *t0)
{
    char t7[8];
    char t11[8];
    char t16[8];
    char t19[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2980);
    *((int *)t2) = 1;
    t3 = (t0 + 2804);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB19:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = ((char*)((ng8)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t4, 8, t8, 32);
    t9 = (t0 + 1688);
    t10 = (t0 + 1688);
    t12 = (t10 + 44U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t11, t13, 2, t14, 32, 1);
    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t6 = (!(t26));
    if (t6 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t4 + 4);
    t26 = *((unsigned int *)t4);
    t27 = (t26 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t7) = t28;
    t29 = *((unsigned int *)t9);
    t30 = (t29 >> 7);
    t31 = (t30 & 1);
    *((unsigned int *)t8) = t31;
    t10 = (t0 + 1688);
    t12 = (t0 + 1688);
    t13 = (t12 + 44U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t17 = (t11 + 4);
    t32 = *((unsigned int *)t17);
    t6 = (!(t32));
    if (t6 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1964);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = (t0 + 1688);
    t9 = (t0 + 1688);
    t10 = (t9 + 44U);
    t12 = *((char **)t10);
    t13 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t7, t12, 2, t13, 32, 1);
    t14 = (t7 + 4);
    t26 = *((unsigned int *)t14);
    t6 = (!(t26));
    if (t6 == 1)
        goto LAB42;

LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(26, ng0);

LAB20:    xsi_set_current_line(27, ng0);
    t8 = (t0 + 1000U);
    t9 = *((char **)t8);
    t8 = (t0 + 1000U);
    t10 = *((char **)t8);
    t8 = (t0 + 976U);
    t12 = (t8 + 44U);
    t13 = *((char **)t12);
    t14 = (t0 + 1368U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_index_select_value(t11, 1, t10, t13, 2, t15, 1, 2);
    xsi_vlogtype_concat(t7, 9, 9, 2U, t11, 1, t9, 8);
    t14 = (t0 + 1092U);
    t17 = *((char **)t14);
    t14 = (t0 + 1092U);
    t18 = *((char **)t14);
    t14 = (t0 + 1068U);
    t20 = (t14 + 44U);
    t21 = *((char **)t20);
    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t19, 1, t18, t21, 2, t23, 1, 2);
    xsi_vlogtype_concat(t16, 9, 9, 2U, t19, 1, t17, 8);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 9, t7, 9, t16, 9);
    t22 = (t0 + 1596);
    xsi_vlogvar_assign_value(t22, t24, 0, 0, 8);
    t25 = (t0 + 1780);
    xsi_vlogvar_assign_value(t25, t24, 8, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = (t0 + 1596);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t10, 2, t13, 1, 2);
    t12 = (t0 + 1780);
    t14 = (t12 + 36U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t7, 2, 2, 2U, t15, 1, t11, 1);
    t17 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t18 = (t7 + 4);
    t20 = (t17 + 4);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t17);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t20);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t20);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB24;

LAB21:    if (t35 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t16) = 1;

LAB24:    t22 = (t0 + 1872);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = (t0 + 1596);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t10, 2, t13, 1, 2);
    t12 = (t0 + 1780);
    t14 = (t12 + 36U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t7, 2, 2, 2U, t15, 1, t11, 1);
    t17 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t18 = (t7 + 4);
    t20 = (t17 + 4);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t17);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t20);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t20);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB28;

LAB25:    if (t35 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t16) = 1;

LAB28:    t22 = (t0 + 1964);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 1);
    goto LAB19;

LAB9:    xsi_set_current_line(31, ng0);

LAB29:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1000U);
    t4 = *((char **)t3);
    t3 = (t0 + 1000U);
    t8 = *((char **)t3);
    t3 = (t0 + 976U);
    t9 = (t3 + 44U);
    t10 = *((char **)t9);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t11, 1, t8, t10, 2, t13, 1, 2);
    xsi_vlogtype_concat(t7, 9, 9, 2U, t11, 1, t4, 8);
    t12 = (t0 + 1092U);
    t14 = *((char **)t12);
    t12 = (t0 + 1092U);
    t15 = *((char **)t12);
    t12 = (t0 + 1068U);
    t17 = (t12 + 44U);
    t18 = *((char **)t17);
    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    xsi_vlog_generic_get_index_select_value(t19, 1, t15, t18, 2, t21, 1, 2);
    xsi_vlogtype_concat(t16, 9, 9, 2U, t19, 1, t14, 8);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_minus(t24, 9, t7, 9, t16, 9);
    t20 = (t0 + 1596);
    xsi_vlogvar_assign_value(t20, t24, 0, 0, 8);
    t22 = (t0 + 1780);
    xsi_vlogvar_assign_value(t22, t24, 8, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = (t0 + 1596);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t10, 2, t13, 1, 2);
    t12 = (t0 + 1780);
    t14 = (t12 + 36U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t7, 2, 2, 2U, t15, 1, t11, 1);
    t17 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t18 = (t7 + 4);
    t20 = (t17 + 4);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t17);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t20);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t20);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB33;

LAB30:    if (t35 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t16) = 1;

LAB33:    t22 = (t0 + 1964);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1596);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t8 = (t0 + 1596);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t11, 1, t4, t10, 2, t13, 1, 2);
    t12 = (t0 + 1780);
    t14 = (t12 + 36U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t7, 2, 2, 2U, t15, 1, t11, 1);
    t17 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t18 = (t7 + 4);
    t20 = (t17 + 4);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t17);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t20);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t20);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB37;

LAB34:    if (t35 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t16) = 1;

LAB37:    t22 = (t0 + 1872);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 1);
    goto LAB19;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1000U);
    t4 = *((char **)t3);
    t3 = (t0 + 1092U);
    t8 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_signed_bit_and(t7, 8, t4, 8, t8, 8);
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    goto LAB19;

LAB13:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1000U);
    t4 = *((char **)t3);
    t3 = (t0 + 1092U);
    t8 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_signed_bit_or(t7, 8, t4, 8, t8, 8);
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    goto LAB19;

LAB15:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1000U);
    t4 = *((char **)t3);
    t3 = (t0 + 1092U);
    t8 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_signed_bit_xor(t7, 8, t4, 8, t8, 8);
    t3 = (t0 + 1596);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 8);
    goto LAB19;

LAB23:    t21 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB27:    t21 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB32:    t21 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB33;

LAB36:    t21 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t9, t7, 0, *((unsigned int *)t11), 1);
    goto LAB39;

LAB40:    xsi_vlogvar_assign_value(t10, t7, 0, *((unsigned int *)t11), 1);
    goto LAB41;

LAB42:    xsi_vlogvar_assign_value(t8, t4, 0, *((unsigned int *)t7), 1);
    goto LAB43;

}


extern void work_m_00000000002290385813_0886308060_init()
{
	static char *pe[] = {(void *)NetDecl_17_0,(void *)NetDecl_18_1,(void *)Always_23_2};
	xsi_register_didat("work_m_00000000002290385813_0886308060", "isim/Tb_ALU_isim_beh.exe.sim/work/m_00000000002290385813_0886308060.didat");
	xsi_register_executes(pe);
}
