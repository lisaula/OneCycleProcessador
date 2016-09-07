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
static const char *ng0 = "C:/Users/Raim/Documents/Lab_Orga_Archivos/Processador/Tb_ALU.v";
static int ng1[] = {127, 0};
static int ng2[] = {1, 0};



static void Initial_11_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(12, ng0);

LAB2:    xsi_set_current_line(13, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng2)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t1, 32);
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1104);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}


extern void work_m_00000000001828591560_0122671264_init()
{
	static char *pe[] = {(void *)Initial_11_0};
	xsi_register_didat("work_m_00000000001828591560_0122671264", "isim/Tb_ALU_isim_beh.exe.sim/work/m_00000000001828591560_0122671264.didat");
	xsi_register_executes(pe);
}
