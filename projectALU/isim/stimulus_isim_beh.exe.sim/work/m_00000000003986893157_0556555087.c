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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "";
static const char *ng1 = "A=%d, B=%d, C_IN=%b,-- Function_class=%d, shift_direction=%b, Const_Var=%b, Const_amount=%d, shift_direction=%b, Logic_function=%d,--OUTPUT=%d \n";
static const char *ng2 = "E:/CodingProjects/4210/projectALU/alu.v";
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {19U, 0U};
static unsigned int ng5[] = {55U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {59U, 0U};
static unsigned int ng9[] = {38U, 0U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {39U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {129U, 0U};
static unsigned int ng15[] = {456U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {656U, 0U};
static unsigned int ng18[] = {218U, 0U};
static unsigned int ng19[] = {195U, 0U};
static unsigned int ng20[] = {228U, 0U};
static unsigned int ng21[] = {99U, 0U};
static unsigned int ng22[] = {286U, 0U};
static unsigned int ng23[] = {2U, 0U};
static unsigned int ng24[] = {77U, 0U};
static unsigned int ng25[] = {486U, 0U};
static unsigned int ng26[] = {3U, 0U};

void Monitor_244_1(char *);
void Monitor_244_1(char *);


static void Monitor_244_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 1448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1608);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1768);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 1928);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2568);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2088);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 2408);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    xsi_vlogfile_write(1, 0, 3, ng1, 11, t0, (char)118, t5, 32, (char)118, t8, 32, (char)118, t11, 1, (char)118, t14, 2, (char)118, t17, 1, (char)118, t20, 1, (char)118, t23, 5, (char)118, t26, 1, (char)118, t29, 2, (char)118, t31, 32);

LAB1:    return;
}

static void Initial_241_0(char *t0)
{

LAB0:    xsi_set_current_line(242, ng2);

LAB2:    xsi_set_current_line(244, ng2);
    Monitor_244_1(t0);

LAB1:    return;
}

static void Initial_247_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    int t11;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(248, ng2);

LAB4:    xsi_set_current_line(249, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(249, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(249, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(250, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(250, ng2);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(250, ng2);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(250, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(250, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(251, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB6:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB9;

LAB10:    xsi_set_current_line(251, ng2);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(251, ng2);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(251, ng2);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(251, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(251, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(252, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB11:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB12;

LAB13:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB14;

LAB15:    xsi_set_current_line(252, ng2);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(252, ng2);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(252, ng2);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(252, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(252, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(253, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB16:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB17;

LAB18:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB19;

LAB20:    xsi_set_current_line(253, ng2);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(253, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(253, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(253, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(253, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(253, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(255, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB21:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB22;

LAB23:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB24;

LAB25:    xsi_set_current_line(255, ng2);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(255, ng2);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(255, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(255, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(255, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(255, ng2);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(255, ng2);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(256, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB26:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB29;

LAB30:    xsi_set_current_line(256, ng2);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(256, ng2);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(256, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(256, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(256, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(256, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(257, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB31:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB32;

LAB33:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB34;

LAB35:    xsi_set_current_line(257, ng2);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(257, ng2);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(257, ng2);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(257, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(257, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(257, ng2);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(258, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB36:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB37;

LAB38:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB39;

LAB40:    xsi_set_current_line(258, ng2);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(258, ng2);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(258, ng2);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(258, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(258, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(258, ng2);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(259, ng2);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB41:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB42;

LAB43:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB44;

LAB45:    xsi_set_current_line(259, ng2);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(259, ng2);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(259, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(259, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(259, ng2);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    t4 = (t0 + 2248);
    t6 = (t4 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t5, t7, 2, t8, 32, 1);
    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(259, ng2);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB1;

LAB46:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB47;

LAB48:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB49;

}

void Monitor_244_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3792);
    t2 = (t0 + 4304);
    xsi_vlogfile_monitor((void *)Monitor_244_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003986893157_0556555087_init()
{
	static char *pe[] = {(void *)Initial_241_0,(void *)Initial_247_2,(void *)Monitor_244_1};
	xsi_register_didat("work_m_00000000003986893157_0556555087", "isim/stimulus_isim_beh.exe.sim/work/m_00000000003986893157_0556555087.didat");
	xsi_register_executes(pe);
}
