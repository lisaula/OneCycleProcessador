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
static const char *ng0 = "C:/Users/Raim/Documents/Lab_Orga_Archivos/Processador/SyncRAM.v";



static void Cont_12_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2204);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 2152);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_14_1(char *t0)
{
    char t4[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2160);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 1196);
    t5 = (t0 + 1196);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = (t0 + 1196);
    t19 = (t13 + 40U);
    t20 = *((char **)t19);
    t21 = (t0 + 784U);
    t23 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t4, t22, t12, t20, 2, 1, t23, 8, 2);
    t21 = (t4 + 4);
    t7 = *((unsigned int *)t21);
    t31 = (!(t7));
    t24 = (t22 + 4);
    t8 = *((unsigned int *)t24);
    t32 = (!(t8));
    t33 = (t31 && t32);
    if (t33 == 1)
        goto LAB13;

LAB14:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(17, ng0);
    t19 = (t0 + 1196);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t23 = (t0 + 1196);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = (t0 + 1196);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    t29 = (t0 + 784U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t22, 8, t21, t25, t28, 2, 1, t30, 8, 2);
    t29 = (t0 + 1288);
    xsi_vlogvar_assign_value(t29, t22, 0, 0, 8);
    goto LAB12;

LAB13:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t22);
    t34 = (t9 - t10);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t22), t35);
    goto LAB14;

}


extern void work_m_00000000002549828024_2047982043_init()
{
	static char *pe[] = {(void *)Cont_12_0,(void *)Always_14_1};
	xsi_register_didat("work_m_00000000002549828024_2047982043", "isim/tb_Main_isim_beh.exe.sim/work/m_00000000002549828024_2047982043.didat");
	xsi_register_executes(pe);
}
