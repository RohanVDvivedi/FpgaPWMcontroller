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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/rohan/Desktop/FpgaPWMcontroller/main.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {2500, 0};



static void Always_18_0(char *t0)
{
    char t9[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 6272);
    *((int *)t2) = 1;
    t3 = (t0 + 4992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 3568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(21, ng0);

LAB9:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 3728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB13:    t7 = (t9 + 4);
    t8 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    *((unsigned int *)t9) = t22;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB15;

LAB14:    t27 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t27 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t15 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t15, t9, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);
    t15 = (t0 + 3568);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB15:    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t9) = (t23 | t24);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t25 | t26);
    goto LAB14;

}

static void Always_37_1(char *t0)
{
    char t9[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6288);
    *((int *)t2) = 1;
    t3 = (t0 + 5240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 3888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1016);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;

LAB13:    t7 = (t9 + 4);
    t8 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    *((unsigned int *)t9) = t22;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB15;

LAB14:    t27 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t27 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t15 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t15, t9, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t15 = (t0 + 3888);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng1)));
    memset(t19, 0, 8);
    xsi_vlog_signed_add(t19, 32, t17, 32, t18, 32);
    t20 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB15:    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t9) = (t23 | t24);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t25 | t26);
    goto LAB14;

}

static void Always_46_2(char *t0)
{
    char t6[8];
    char t17[8];
    char t26[8];
    char t34[8];
    char t74[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;

LAB0:    t1 = (t0 + 5456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6304);
    *((int *)t2) = 1;
    t3 = (t0 + 5488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1728U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t34, t6, 8);

LAB12:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t2) == 0)
        goto LAB36;

LAB38:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB39:    memset(t17, 0, 8);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t5) != 0)
        goto LAB42;

LAB43:    t13 = (t17 + 4);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB44;

LAB45:    memcpy(t34, t17, 8);

LAB46:    t48 = (t34 + 4);
    t67 = *((unsigned int *)t48);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t2) == 0)
        goto LAB66;

LAB68:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB69:    memset(t17, 0, 8);
    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t5) != 0)
        goto LAB72;

LAB73:    t13 = (t17 + 4);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB74;

LAB75:    memcpy(t74, t17, 8);

LAB76:    t66 = (t74 + 4);
    t75 = *((unsigned int *)t66);
    t76 = (~(t75));
    t77 = *((unsigned int *)t74);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(64, ng0);

LAB92:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB90:
LAB56:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1888U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t18) == 0)
        goto LAB13;

LAB15:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB16:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB20:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t6 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t17) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB23;

LAB24:    xsi_set_current_line(47, ng0);

LAB27:    xsi_set_current_line(48, ng0);
    t72 = ((char*)((ng2)));
    t73 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t12 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB29;

LAB28:    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t4) < *((unsigned int *)t12))
        goto LAB30;

LAB31:    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB26;

LAB29:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB31;

LAB30:    *((unsigned int *)t6) = 1;
    goto LAB31;

LAB33:    xsi_set_current_line(51, ng0);
    t25 = (t0 + 3408);
    t27 = (t25 + 56U);
    t33 = *((char **)t27);
    t38 = ((char*)((ng1)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t33, 16, t38, 32);
    t39 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t39, t17, 0, 0, 16, 0LL);
    goto LAB35;

LAB36:    *((unsigned int *)t6) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t17) = 1;
    goto LAB43;

LAB42:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB43;

LAB44:    t18 = (t0 + 1888U);
    t19 = *((char **)t18);
    memset(t26, 0, 8);
    t18 = (t19 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t18) != 0)
        goto LAB49;

LAB50:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t27 = (t17 + 4);
    t33 = (t26 + 4);
    t38 = (t34 + 4);
    t41 = *((unsigned int *)t27);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t26) = 1;
    goto LAB50;

LAB49:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB50;

LAB51:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t38);
    *((unsigned int *)t34) = (t46 | t47);
    t39 = (t17 + 4);
    t40 = (t26 + 4);
    t50 = *((unsigned int *)t17);
    t51 = (~(t50));
    t52 = *((unsigned int *)t39);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t40);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t62 & t60);
    t63 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB53;

LAB54:    xsi_set_current_line(53, ng0);

LAB57:    xsi_set_current_line(54, ng0);
    t49 = ((char*)((ng1)));
    t66 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t66, t49, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t12 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB59;

LAB58:    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t4) > *((unsigned int *)t12))
        goto LAB60;

LAB61:    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB63;

LAB64:
LAB65:    goto LAB56;

LAB59:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;
    goto LAB61;

LAB63:    xsi_set_current_line(57, ng0);
    t25 = (t0 + 3408);
    t27 = (t25 + 56U);
    t33 = *((char **)t27);
    t38 = ((char*)((ng1)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t33, 16, t38, 32);
    t39 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t39, t17, 0, 0, 16, 0LL);
    goto LAB65;

LAB66:    *((unsigned int *)t6) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t17) = 1;
    goto LAB73;

LAB72:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB73;

LAB74:    t18 = (t0 + 1888U);
    t19 = *((char **)t18);
    memset(t26, 0, 8);
    t18 = (t19 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB80;

LAB78:    if (*((unsigned int *)t18) == 0)
        goto LAB77;

LAB79:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;

LAB80:    memset(t34, 0, 8);
    t27 = (t26 + 4);
    t35 = *((unsigned int *)t27);
    t36 = (~(t35));
    t37 = *((unsigned int *)t26);
    t41 = (t37 & t36);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t27) != 0)
        goto LAB83;

LAB84:    t43 = *((unsigned int *)t17);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t74) = t45;
    t38 = (t17 + 4);
    t39 = (t34 + 4);
    t40 = (t74 + 4);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t50 = (t46 | t47);
    *((unsigned int *)t40) = t50;
    t51 = *((unsigned int *)t40);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB76;

LAB77:    *((unsigned int *)t26) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t34) = 1;
    goto LAB84;

LAB83:    t33 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB84;

LAB85:    t53 = *((unsigned int *)t74);
    t54 = *((unsigned int *)t40);
    *((unsigned int *)t74) = (t53 | t54);
    t48 = (t17 + 4);
    t49 = (t34 + 4);
    t55 = *((unsigned int *)t17);
    t56 = (~(t55));
    t57 = *((unsigned int *)t48);
    t60 = (~(t57));
    t61 = *((unsigned int *)t34);
    t62 = (~(t61));
    t63 = *((unsigned int *)t49);
    t64 = (~(t63));
    t58 = (t56 & t60);
    t59 = (t62 & t64);
    t65 = (~(t58));
    t67 = (~(t59));
    t68 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t68 & t65);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t67);
    t70 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t70 & t65);
    t71 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t71 & t67);
    goto LAB87;

LAB88:    xsi_set_current_line(59, ng0);

LAB91:    xsi_set_current_line(60, ng0);
    t72 = ((char*)((ng2)));
    t73 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t73, t72, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 3408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    goto LAB90;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 6384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
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
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 6448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}


extern void work_m_04436201221699619443_1774854872_init()
{
	static char *pe[] = {(void *)Always_18_0,(void *)Always_37_1,(void *)Always_46_2,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_04436201221699619443_1774854872", "isim/test_isim_beh.exe.sim/work/m_04436201221699619443_1774854872.didat");
	xsi_register_executes(pe);
}
