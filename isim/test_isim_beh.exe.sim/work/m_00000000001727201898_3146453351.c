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
static const char *ng0 = "F:/Project/mips-p7/npc.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {1, 0};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {14, 0};
static int ng7[] = {2, 0};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {12288U, 0U};



static void Cont_30_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t35[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t71[8];
    char t72[8];
    char t87[8];
    char t88[8];
    char t92[8];
    char t95[8];
    char t103[8];
    char t110[8];
    char t115[8];
    char t116[8];
    char t119[8];
    char t146[8];
    char t150[8];
    char t163[8];
    char t164[8];
    char t167[8];
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
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
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
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t117;
    char *t118;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t147;
    char *t148;
    char *t149;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t165;
    char *t166;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1368U);
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

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t200 = (t0 + 3568);
    t201 = (t200 + 56U);
    t202 = *((char **)t201);
    t203 = (t202 + 56U);
    t204 = *((char **)t203);
    memcpy(t204, t3, 8);
    xsi_driver_vfirst_trans(t200, 0, 31);
    t205 = (t0 + 3488);
    *((int *)t205) = 1;

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

LAB12:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t34, 32, t33, 32);
    goto LAB13;

LAB14:    t42 = (t0 + 1368U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng3)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t111 = *((unsigned int *)t41);
    t112 = (~(t111));
    t113 = *((unsigned int *)t67);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t115, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t73 = (t0 + 2008U);
    t74 = *((char **)t73);
    memset(t72, 0, 8);
    t73 = (t74 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t74);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t73) != 0)
        goto LAB40;

LAB41:    t81 = (t72 + 4);
    t82 = *((unsigned int *)t72);
    t83 = *((unsigned int *)t81);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB42;

LAB43:    t104 = *((unsigned int *)t72);
    t105 = (~(t104));
    t106 = *((unsigned int *)t81);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t81) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t72) > 0)
        goto LAB48;

LAB49:    memcpy(t71, t110, 8);

LAB50:    goto LAB30;

LAB31:    t117 = (t0 + 1368U);
    t118 = *((char **)t117);
    t117 = ((char*)((ng7)));
    memset(t119, 0, 8);
    t120 = (t118 + 4);
    t121 = (t117 + 4);
    t122 = *((unsigned int *)t118);
    t123 = *((unsigned int *)t117);
    t124 = (t122 ^ t123);
    t125 = *((unsigned int *)t120);
    t126 = *((unsigned int *)t121);
    t127 = (t125 ^ t126);
    t128 = (t124 | t127);
    t129 = *((unsigned int *)t120);
    t130 = *((unsigned int *)t121);
    t131 = (t129 | t130);
    t132 = (~(t131));
    t133 = (t128 & t132);
    if (t133 != 0)
        goto LAB54;

LAB51:    if (t131 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t119) = 1;

LAB54:    memset(t116, 0, 8);
    t135 = (t119 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (~(t136));
    t138 = *((unsigned int *)t119);
    t139 = (t138 & t137);
    t140 = (t139 & 1U);
    if (t140 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t135) != 0)
        goto LAB57;

LAB58:    t142 = (t116 + 4);
    t143 = *((unsigned int *)t116);
    t144 = *((unsigned int *)t142);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB59;

LAB60:    t159 = *((unsigned int *)t116);
    t160 = (~(t159));
    t161 = *((unsigned int *)t142);
    t162 = (t160 || t161);
    if (t162 > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t142) > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t116) > 0)
        goto LAB65;

LAB66:    memcpy(t115, t163, 8);

LAB67:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t71, 32, t115, 32);
    goto LAB37;

LAB35:    memcpy(t40, t71, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t72) = 1;
    goto LAB41;

LAB40:    t80 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB41;

LAB42:    t85 = (t0 + 1048U);
    t86 = *((char **)t85);
    t85 = ((char*)((ng4)));
    memset(t87, 0, 8);
    xsi_vlog_unsigned_add(t87, 32, t86, 32, t85, 32);
    t89 = ((char*)((ng5)));
    t90 = (t0 + 1528U);
    t91 = *((char **)t90);
    t90 = ((char*)((ng6)));
    t93 = (t0 + 1528U);
    t94 = *((char **)t93);
    memset(t95, 0, 8);
    t93 = (t95 + 4);
    t96 = (t94 + 4);
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 15);
    t99 = (t98 & 1);
    *((unsigned int *)t95) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 >> 15);
    t102 = (t101 & 1);
    *((unsigned int *)t93) = t102;
    xsi_vlog_mul_concat(t92, 14, 1, t90, 1U, t95, 1);
    xsi_vlogtype_concat(t88, 32, 32, 3U, t92, 14, t91, 16, t89, 2);
    memset(t103, 0, 8);
    xsi_vlog_unsigned_add(t103, 32, t87, 32, t88, 32);
    goto LAB43;

LAB44:    t108 = (t0 + 1048U);
    t109 = *((char **)t108);
    t108 = ((char*)((ng2)));
    memset(t110, 0, 8);
    xsi_vlog_unsigned_add(t110, 32, t109, 32, t108, 32);
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t71, 32, t103, 32, t110, 32);
    goto LAB50;

LAB48:    memcpy(t71, t103, 8);
    goto LAB50;

LAB53:    t134 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t134) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t116) = 1;
    goto LAB58;

LAB57:    t141 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB58;

LAB59:    t147 = ((char*)((ng5)));
    t148 = (t0 + 1688U);
    t149 = *((char **)t148);
    t148 = (t0 + 1048U);
    t151 = *((char **)t148);
    memset(t150, 0, 8);
    t148 = (t150 + 4);
    t152 = (t151 + 4);
    t153 = *((unsigned int *)t151);
    t154 = (t153 >> 28);
    *((unsigned int *)t150) = t154;
    t155 = *((unsigned int *)t152);
    t156 = (t155 >> 28);
    *((unsigned int *)t148) = t156;
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t157 & 15U);
    t158 = *((unsigned int *)t148);
    *((unsigned int *)t148) = (t158 & 15U);
    xsi_vlogtype_concat(t146, 32, 32, 3U, t150, 4, t149, 26, t147, 2);
    goto LAB60;

LAB61:    t165 = (t0 + 1368U);
    t166 = *((char **)t165);
    t165 = ((char*)((ng8)));
    memset(t167, 0, 8);
    t168 = (t166 + 4);
    t169 = (t165 + 4);
    t170 = *((unsigned int *)t166);
    t171 = *((unsigned int *)t165);
    t172 = (t170 ^ t171);
    t173 = *((unsigned int *)t168);
    t174 = *((unsigned int *)t169);
    t175 = (t173 ^ t174);
    t176 = (t172 | t175);
    t177 = *((unsigned int *)t168);
    t178 = *((unsigned int *)t169);
    t179 = (t177 | t178);
    t180 = (~(t179));
    t181 = (t176 & t180);
    if (t181 != 0)
        goto LAB71;

LAB68:    if (t179 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t167) = 1;

LAB71:    memset(t164, 0, 8);
    t183 = (t167 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t167);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t183) != 0)
        goto LAB74;

LAB75:    t190 = (t164 + 4);
    t191 = *((unsigned int *)t164);
    t192 = *((unsigned int *)t190);
    t193 = (t191 || t192);
    if (t193 > 0)
        goto LAB76;

LAB77:    t196 = *((unsigned int *)t164);
    t197 = (~(t196));
    t198 = *((unsigned int *)t190);
    t199 = (t197 || t198);
    if (t199 > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t190) > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t164) > 0)
        goto LAB82;

LAB83:    memcpy(t163, t194, 8);

LAB84:    goto LAB62;

LAB63:    xsi_vlog_unsigned_bit_combine(t115, 32, t146, 32, t163, 32);
    goto LAB67;

LAB65:    memcpy(t115, t146, 8);
    goto LAB67;

LAB70:    t182 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t164) = 1;
    goto LAB75;

LAB74:    t189 = (t164 + 4);
    *((unsigned int *)t164) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB75;

LAB76:    t194 = (t0 + 1848U);
    t195 = *((char **)t194);
    goto LAB77;

LAB78:    t194 = ((char*)((ng9)));
    goto LAB79;

LAB80:    xsi_vlog_unsigned_bit_combine(t163, 32, t195, 32, t194, 32);
    goto LAB84;

LAB82:    memcpy(t163, t195, 8);
    goto LAB84;

}


extern void work_m_00000000001727201898_3146453351_init()
{
	static char *pe[] = {(void *)Cont_30_0};
	xsi_register_didat("work_m_00000000001727201898_3146453351", "isim/test_isim_beh.exe.sim/work/m_00000000001727201898_3146453351.didat");
	xsi_register_executes(pe);
}
