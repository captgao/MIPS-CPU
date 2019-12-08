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
static const char *ng0 = "F:/Project/mips-p7/timer.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};



static void Cont_38_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t42[8];
    char t43[8];
    char t46[8];
    char t80[8];
    char t81[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t124;

LAB0:    t1 = (t0 + 4352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1912U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t29);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t119 = (t0 + 5528);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    t122 = (t121 + 56U);
    t123 = *((char **)t122);
    memcpy(t123, t3, 8);
    xsi_driver_vfirst_trans(t119, 0, 31);
    t124 = (t0 + 5416);
    *((int *)t124) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 3112);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng2)));
    xsi_vlogtype_concat(t33, 32, 32, 2U, t37, 28, t36, 4);
    goto LAB13;

LAB14:    t44 = (t0 + 1912U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng3)));
    memset(t46, 0, 8);
    t47 = (t45 + 4);
    t48 = (t44 + 4);
    t49 = *((unsigned int *)t45);
    t50 = *((unsigned int *)t44);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB24;

LAB21:    if (t58 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t46) = 1;

LAB24:    memset(t43, 0, 8);
    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t62) != 0)
        goto LAB27;

LAB28:    t69 = (t43 + 4);
    t70 = *((unsigned int *)t43);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB29;

LAB30:    t76 = *((unsigned int *)t43);
    t77 = (~(t76));
    t78 = *((unsigned int *)t69);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t69) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t43) > 0)
        goto LAB35;

LAB36:    memcpy(t42, t80, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t42, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t43) = 1;
    goto LAB28;

LAB27:    t68 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB28;

LAB29:    t73 = (t0 + 3272);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    goto LAB30;

LAB31:    t82 = (t0 + 1912U);
    t83 = *((char **)t82);
    t82 = ((char*)((ng4)));
    memset(t84, 0, 8);
    t85 = (t83 + 4);
    t86 = (t82 + 4);
    t87 = *((unsigned int *)t83);
    t88 = *((unsigned int *)t82);
    t89 = (t87 ^ t88);
    t90 = *((unsigned int *)t85);
    t91 = *((unsigned int *)t86);
    t92 = (t90 ^ t91);
    t93 = (t89 | t92);
    t94 = *((unsigned int *)t85);
    t95 = *((unsigned int *)t86);
    t96 = (t94 | t95);
    t97 = (~(t96));
    t98 = (t93 & t97);
    if (t98 != 0)
        goto LAB41;

LAB38:    if (t96 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t84) = 1;

LAB41:    memset(t81, 0, 8);
    t100 = (t84 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t84);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t100) != 0)
        goto LAB44;

LAB45:    t107 = (t81 + 4);
    t108 = *((unsigned int *)t81);
    t109 = *((unsigned int *)t107);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB46;

LAB47:    t114 = *((unsigned int *)t81);
    t115 = (~(t114));
    t116 = *((unsigned int *)t107);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t107) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t81) > 0)
        goto LAB52;

LAB53:    memcpy(t80, t118, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t42, 32, t75, 32, t80, 32);
    goto LAB37;

LAB35:    memcpy(t42, t75, 8);
    goto LAB37;

LAB40:    t99 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t81) = 1;
    goto LAB45;

LAB44:    t106 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB45;

LAB46:    t111 = (t0 + 3432);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    goto LAB47;

LAB48:    t118 = ((char*)((ng1)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t80, 32, t113, 32, t118, 32);
    goto LAB54;

LAB52:    memcpy(t80, t113, 8);
    goto LAB54;

}

static void Cont_41_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t30[8];
    char t46[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    memset(t14, 0, 8);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t15) != 0)
        goto LAB6;

LAB7:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB8;

LAB9:    memcpy(t54, t14, 8);

LAB10:    t86 = (t0 + 5592);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    memset(t90, 0, 8);
    t91 = 1U;
    t92 = t91;
    t93 = (t54 + 4);
    t94 = *((unsigned int *)t54);
    t91 = (t91 & t94);
    t95 = *((unsigned int *)t93);
    t92 = (t92 & t95);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t97 | t91);
    t98 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t98 | t92);
    xsi_driver_vfirst_trans(t86, 0, 0);
    t99 = (t0 + 5432);
    *((int *)t99) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB6:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 2952);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t31 = (t28 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB14;

LAB11:    if (t42 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t30) = 1;

LAB14:    memset(t46, 0, 8);
    t47 = (t30 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t47) != 0)
        goto LAB17;

LAB18:    t55 = *((unsigned int *)t14);
    t56 = *((unsigned int *)t46);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t14 + 4);
    t59 = (t46 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB13:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t46) = 1;
    goto LAB18;

LAB17:    t53 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB18;

LAB19:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t14 + 4);
    t69 = (t46 + 4);
    t70 = *((unsigned int *)t14);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t46);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB21;

}

static void Initial_42_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(42, ng0);

LAB2:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3272);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3432);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_47_3(char *t0)
{
    char t14[8];
    char t38[8];
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
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5448);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(69, ng0);

LAB27:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB28:    t11 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t11, 2);
    if (t13 == 1)
        goto LAB29;

LAB30:    t12 = ((char*)((ng7)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 2, t12, 2);
    if (t23 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB35;

LAB36:
LAB37:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3112);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(53, ng0);

LAB13:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:
LAB21:    goto LAB12;

LAB15:    xsi_set_current_line(55, ng0);

LAB22:    xsi_set_current_line(56, ng0);
    t11 = (t0 + 2232U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 15U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 15U);
    t22 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t22, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t16 = (t10 & 1);
    *((unsigned int *)t2) = t16;
    t11 = (t14 + 4);
    t17 = *((unsigned int *)t11);
    t18 = (~(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB25:    goto LAB21;

LAB17:    xsi_set_current_line(62, ng0);

LAB26:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2232U);
    t4 = *((char **)t3);
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB21;

LAB23:    xsi_set_current_line(58, ng0);
    t12 = ((char*)((ng6)));
    t15 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t15, t12, 0, 0, 2, 0LL);
    goto LAB25;

LAB29:    goto LAB37;

LAB31:    xsi_set_current_line(72, ng0);

LAB38:    xsi_set_current_line(73, ng0);
    t15 = (t0 + 3432);
    t22 = (t15 + 56U);
    t24 = *((char **)t22);
    t25 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t26 = (t24 + 4);
    t27 = (t25 + 4);
    t6 = *((unsigned int *)t24);
    t7 = *((unsigned int *)t25);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t26);
    t10 = *((unsigned int *)t27);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t26);
    t19 = *((unsigned int *)t27);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t28 = (t17 & t21);
    if (t28 != 0)
        goto LAB42;

LAB39:    if (t20 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t14) = 1;

LAB42:    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t11 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t11, 32, t12, 32);
    t15 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 32, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(77, ng0);

LAB46:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 3272);
    t11 = (t3 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t15, t12, 0, 0, 32, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB37;

LAB35:    xsi_set_current_line(81, ng0);

LAB47:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 3112);
    t11 = (t3 + 56U);
    t12 = *((char **)t11);
    t15 = (t0 + 3112);
    t22 = (t15 + 72U);
    t24 = *((char **)t22);
    t25 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t12, t24, 2, t25, 32, 1);
    t26 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t27 = (t14 + 4);
    t29 = (t26 + 4);
    t6 = *((unsigned int *)t14);
    t7 = *((unsigned int *)t26);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t27);
    t10 = *((unsigned int *)t29);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t27);
    t19 = *((unsigned int *)t29);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t28 = (t17 & t21);
    if (t28 != 0)
        goto LAB51;

LAB48:    if (t20 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t38) = 1;

LAB51:    t36 = (t38 + 4);
    t31 = *((unsigned int *)t36);
    t32 = (~(t31));
    t33 = *((unsigned int *)t38);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(86, ng0);

LAB58:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t11 = *((char **)t3);
    t12 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB54:    goto LAB37;

LAB41:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(74, ng0);
    t36 = ((char*)((ng5)));
    t37 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 2, 0LL);
    goto LAB45;

LAB50:    t30 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(82, ng0);

LAB55:    xsi_set_current_line(83, ng0);
    t37 = ((char*)((ng2)));
    t39 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t39, t37, 0, 0, 2, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    t11 = (t0 + 3112);
    t12 = (t11 + 72U);
    t15 = *((char **)t12);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t14, t15, 2, t22, 32, 1);
    t24 = (t14 + 4);
    t6 = *((unsigned int *)t24);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB56;

LAB57:    goto LAB54;

LAB56:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t14), 1, 0LL);
    goto LAB57;

}


extern void work_m_00000000001216468645_1678943863_init()
{
	static char *pe[] = {(void *)Cont_38_0,(void *)Cont_41_1,(void *)Initial_42_2,(void *)Always_47_3};
	xsi_register_didat("work_m_00000000001216468645_1678943863", "isim/test_isim_beh.exe.sim/work/m_00000000001216468645_1678943863.didat");
	xsi_register_executes(pe);
}
