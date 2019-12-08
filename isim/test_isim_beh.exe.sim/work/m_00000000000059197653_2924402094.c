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
static const char *ng0 = "F:/Project/mips-p7/dm.v";
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static int ng4[] = {4096, 0};
static int ng5[] = {3, 0};
static const char *ng6 = "%d@%h: *%h <= %h";
static unsigned int ng7[] = {0U, 0U};



static void Cont_37_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 5992);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 1);
    t25 = (t0 + 5848);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_38_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1528U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t5 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    memset(t4, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t31) != 0)
        goto LAB10;

LAB11:    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB12;

LAB13:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t38) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t47, 8);

LAB20:    t48 = (t0 + 6056);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 1U;
    t54 = t53;
    t55 = (t3 + 4);
    t56 = *((unsigned int *)t3);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans(t48, 0, 0);
    t61 = (t0 + 5864);
    *((int *)t61) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t37 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB11;

LAB12:    t42 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t47 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t42, 32, t47, 32);
    goto LAB20;

LAB18:    memcpy(t3, t42, 8);
    goto LAB20;

}

static void Cont_40_2(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1528U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 4095U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 4095U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 12, 2);
    t22 = (t0 + 6120);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 5880);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_41_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 6184);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 5896);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Initial_43_4(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
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
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 3048);
    t16 = (t0 + 3048);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3048);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3368);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3368);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Always_46_5(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t45[8];
    char t47[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
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
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5912);
    *((int *)t2) = 1;
    t3 = (t0 + 5560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);

LAB14:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);
    xsi_set_current_line(47, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB9:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(47, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 3048);
    t17 = (t0 + 3048);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3368);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB9;

LAB12:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB13;

LAB15:    xsi_set_current_line(49, ng0);

LAB18:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB19:    t4 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t28 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t28 == 1)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t11 = *((char **)t3);
    t14 = (t0 + 3048);
    t17 = (t0 + 3048);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 1528U);
    t24 = *((char **)t23);
    memset(t16, 0, 8);
    t23 = (t16 + 4);
    t25 = (t24 + 4);
    t6 = *((unsigned int *)t24);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t25);
    t9 = (t8 >> 2);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 1023U);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t27 & 1023U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t19, t22, 2, 1, t16, 10, 2);
    t26 = (t13 + 4);
    t30 = *((unsigned int *)t26);
    t28 = (!(t30));
    t29 = (t15 + 4);
    t33 = *((unsigned int *)t29);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(64, ng0);
    t2 = xsi_vlog_time(t47, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2168U);
    t11 = *((char **)t3);
    t3 = ((char*)((ng7)));
    t14 = (t0 + 1528U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t18);
    t9 = (t8 >> 2);
    *((unsigned int *)t14) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t15, 30, t3, 2);
    t19 = (t0 + 3208);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t0, (char)118, t47, 64, (char)118, t11, 32, (char)118, t13, 32, (char)119, t21, 32);
    goto LAB17;

LAB20:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 2488U);
    t12 = *((char **)t11);

LAB27:    t11 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t12, 2, t11, 32);
    if (t31 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 32);
    if (t28 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 32);
    if (t28 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t12, 2, t2, 32);
    if (t28 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB26;

LAB22:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2648U);
    t4 = *((char **)t3);

LAB37:    t3 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 32);
    if (t31 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 32);
    if (t28 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB26;

LAB24:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1368U);
    t11 = *((char **)t3);
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB26;

LAB28:    xsi_set_current_line(52, ng0);
    t14 = (t0 + 1368U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t30 = (t27 >> 0);
    *((unsigned int *)t15) = t30;
    t33 = *((unsigned int *)t18);
    t34 = (t33 >> 0);
    *((unsigned int *)t14) = t34;
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & 255U);
    t38 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t38 & 255U);
    t19 = (t0 + 2328U);
    t20 = *((char **)t19);
    memset(t16, 0, 8);
    t19 = (t16 + 4);
    t21 = (t20 + 4);
    t39 = *((unsigned int *)t20);
    t40 = (t39 >> 8);
    *((unsigned int *)t16) = t40;
    t41 = *((unsigned int *)t21);
    t42 = (t41 >> 8);
    *((unsigned int *)t19) = t42;
    t43 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t43 & 16777215U);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & 16777215U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t16, 24, t15, 8);
    t22 = (t0 + 3208);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 32);
    goto LAB36;

LAB30:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t14 = (t0 + 1368U);
    t17 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t18 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t18);
    t37 = (t34 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 255U);
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & 255U);
    t19 = (t0 + 2328U);
    t20 = *((char **)t19);
    memset(t45, 0, 8);
    t19 = (t45 + 4);
    t21 = (t20 + 4);
    t40 = *((unsigned int *)t20);
    t41 = (t40 >> 16);
    *((unsigned int *)t45) = t41;
    t42 = *((unsigned int *)t21);
    t43 = (t42 >> 16);
    *((unsigned int *)t19) = t43;
    t44 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t44 & 65535U);
    t46 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t46 & 65535U);
    xsi_vlogtype_concat(t13, 32, 32, 3U, t45, 16, t16, 8, t15, 8);
    t22 = (t0 + 3208);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 32);
    goto LAB36;

LAB32:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 65535U);
    t14 = (t0 + 1368U);
    t17 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t18 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t18);
    t37 = (t34 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 255U);
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & 255U);
    t19 = (t0 + 2328U);
    t20 = *((char **)t19);
    memset(t45, 0, 8);
    t19 = (t45 + 4);
    t21 = (t20 + 4);
    t40 = *((unsigned int *)t20);
    t41 = (t40 >> 24);
    *((unsigned int *)t45) = t41;
    t42 = *((unsigned int *)t21);
    t43 = (t42 >> 24);
    *((unsigned int *)t19) = t43;
    t44 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t44 & 255U);
    t46 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t46 & 255U);
    xsi_vlogtype_concat(t13, 32, 32, 3U, t45, 8, t16, 8, t15, 16);
    t22 = (t0 + 3208);
    xsi_vlogvar_assign_value(t22, t13, 0, 0, 32);
    goto LAB36;

LAB34:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 16777215U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 16777215U);
    t14 = (t0 + 1368U);
    t17 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t18 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t18);
    t37 = (t34 >> 0);
    *((unsigned int *)t14) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 255U);
    t39 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t39 & 255U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t16, 8, t15, 24);
    t19 = (t0 + 3208);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 32);
    goto LAB36;

LAB38:    xsi_set_current_line(58, ng0);
    t11 = (t0 + 1368U);
    t14 = *((char **)t11);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t17 = (t14 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t27 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t27 & 65535U);
    t18 = (t0 + 2328U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t18 = (t16 + 4);
    t20 = (t19 + 4);
    t30 = *((unsigned int *)t19);
    t33 = (t30 >> 16);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t20);
    t37 = (t34 >> 16);
    *((unsigned int *)t18) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 65535U);
    t39 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t39 & 65535U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t16, 16, t15, 16);
    t21 = (t0 + 3208);
    xsi_vlogvar_assign_value(t21, t13, 0, 0, 32);
    goto LAB42;

LAB40:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2328U);
    t11 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 65535U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 65535U);
    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t30 = *((unsigned int *)t18);
    t33 = (t30 >> 0);
    *((unsigned int *)t16) = t33;
    t34 = *((unsigned int *)t19);
    t37 = (t34 >> 0);
    *((unsigned int *)t17) = t37;
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & 65535U);
    t39 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t39 & 65535U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t16, 16, t15, 16);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 32);
    goto LAB42;

LAB43:    t34 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t15);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t11, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB44;

}


extern void work_m_00000000000059197653_2924402094_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_38_1,(void *)Cont_40_2,(void *)Cont_41_3,(void *)Initial_43_4,(void *)Always_46_5};
	xsi_register_didat("work_m_00000000000059197653_2924402094", "isim/test_isim_beh.exe.sim/work/m_00000000000059197653_2924402094.didat");
	xsi_register_executes(pe);
}
