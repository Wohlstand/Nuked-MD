#pragma once
#include <stdint.h>

typedef struct {
    int l1;
    int l2;
} dff_t;

typedef struct {
    int t;

    int dclk_prescaler_l1[2];
    int dclk_prescaler_l2;
    int dclk_prescaler_l3;
    dff_t dclk_prescaler_dff1;
    dff_t dclk_prescaler_dff2;

    int reset_comb;
    int reset_l1[2];
    int reset_l2[2];
    int reset_pulse;
    int reset_ext;
    dff_t mclk_prescaler_dff1;
    dff_t mclk_prescaler_dff2;
    int mclk_and1;
    dff_t mclk_prescaler_dff3;
    dff_t mclk_prescaler_dff4;
    int mclk_clk1;
    dff_t mclk_prescaler_dff5;
    dff_t mclk_prescaler_dff6;
    dff_t mclk_prescaler_dff7;
    int mclk_clk2;
    dff_t mclk_prescaler_dff8;
    dff_t mclk_prescaler_dff9;
    dff_t mclk_prescaler_dff10;
    dff_t mclk_prescaler_dff11;
    int mclk_clk3;
    dff_t mclk_prescaler_dff12;
    dff_t mclk_prescaler_dff13;
    dff_t mclk_prescaler_dff14;
    int mclk_clk4;
    dff_t mclk_prescaler_dff15;
    dff_t mclk_prescaler_dff16;
    dff_t mclk_prescaler_dff17;
    int mclk_clk5;
    int mclk_sbcr;
    int mclk_cpu_clk0;
    int mclk_cpu_clk1;
    int mclk_dclk;

    int cpu_sel;
    int cpu_as;
    int cpu_uds;
    int cpu_lds;
    int cpu_m1;
    int cpu_rd;
    int cpu_wr;
    int cpu_iorq;
    int cpu_mreq;
    int cpu_rw;
    int cpu_bg;
    int cpu_intak;
    int cpu_bgack;


    dff_t io_m1_dff1;
    dff_t io_m1_dff2;
    dff_t io_m1_dff3;
    dff_t io_m1_dff4;
    int io_m1_s1;
    int io_m1_s2;
    int io_m1_s3;
    int io_m1_s4;
    int io_m1_s5;
    int io_address;
    int io_address_22o;
    int io_oe0;
    int io_cas0;
    int io_ras0;
    int io_lwr;
    int io_uwr;
    int io_wr;
    int io_ipl1;
    int io_ipl2;
    int io_data;
    int w1;
    dff_t dff1;
    dff_t dff2;
    int t1;
    int w2;
    int w3;
    int w4;
    dff_t dff3;
    dff_t dff4;
    int t2;
    int t3;
    int t4;
    int w5;
    int l1[2];
    int l2[2];
    int l3[2];
    int w6;
    int l4[2];
    int w7;
    int l5[2];
    int w8;
    int l6;
    int l7;
    int l8;
    int w9;
    int w10;
    int w11;
    int w12;
    int w13;
    int w14;
    int w15;
    int w16;
    int w17;
    int w18;
    int w19;
    int w20;
    int w21;
    int w22;
    int w23;
    int w24;
    int w25;
    dff_t dff5;
    dff_t dff6;
    int w26;
    dff_t dff7;
    int w27;
    int w28;
    dff_t dff8;
    dff_t dff9;
    int w29;
    int w30;
    int w31;
    dff_t dff10;
    dff_t dff11;
    int w32;
    int w33;
    int w34;
    int w35;
    int w36;
    int w37;
    dff_t dff12;
    int w38;
    dff_t dff13;
    dff_t dff14;
    dff_t dff15;
    int w39;
    int w40;
    int w41;
    dff_t dff16;
    dff_t dff17;
    dff_t dff18;
    dff_t dff19;
    dff_t dff20;
    dff_t dff21;
    dff_t dff22;
    int w42;
    dff_t dff23;
    dff_t dff24;
    dff_t dff25;
    dff_t dff26;
    dff_t dff27;
    dff_t dff28;
    dff_t dff29;
    int w43;
    int w44;
    int w45;
    int w46;
    int w47;
    int t5;
    int w48;
    int l9[2];
    int l10;
    int l11;
    int w49;
    int w50;
    int t6;
    int l12[2];
    int w51;
    int l13[2];
    int w52;
    int l14;
    int w53;
    int w54;
    dff_t dff30;
    dff_t dff31;
    int w55;
    dff_t dff32;
    int w56;
    int w57;
    int w58;
    int t7;
    int t8;
    int w59;
    int w60;
    int w61;
    int w62;
    int w63;
    int w64;
    int w65;
    int w66;
    int t9;
    int t10;
    int t11;
    int w67;
    int w68;
    int cnt1[2];
    int w69;
    int l15[2];
    int w70;
    int w71;
    int w72;
    int w73;
    int w74;
    int w75;
    int w76;
    int w77;
    int w78;
    int w79;
    int w80;
    int w81;
    int w82;
    int w83;
    int w84;
    int w85;
    int w86;
    int w87;
    int w88;
    int w89;
    int w90;
    int w91;
    int w92;
    int w93;
    int w94;
    int w95;
    int w96;
    int w97;
    int w98;
    int w99;
    int w100;
    int w101;
    int w102;
    int w103;
    int w104;
    int l16;
    int w105;
    int w106;
    int w107;
    int w108;
    int w109;
    int w110;
    int w111;
    int w112;
    int w113;
    int w114;
    int w115;
    int w116;
    int w117;
    int w118;
    int l17;
    int w119;
    int w120;
    int w121;
    int t12;
    int w122;
    int w123;
    int w124;
    int w125;
    int w126;
    int w127;
    int w128;
    int w129;
    int w130;
    int w131;
    int w132;
    int w133;
    int w134;
    int w135;
    int t13;
    int w136;
    int w137;
    int t14;
    int w138;
    int w139;
    int w140;
    int w141;
    int w142;
    int l18;
    int l19;
    int w143;
    int t15;
    int t15_n;
    int t16;
    int t16_n;
    int t17;
    int w144;
    int w145;
    int t18;
    int t18_n;
    int w146;
    int t19;
    int t20;
    int w147;
    int w148;
    int w149;
    int t21;
    int w150;
    int w151;
    int w152;
    int w153;
    int w154;
    int w155;
    int w156;
    int w157;
    int w158;
    int w159;
    int w160;
    int w161;
    int t22;
    int w162;
    int w163;
    int w164;
    int w165;
    int w166;
    int w167;
    int w168;
    int w169;
    int w170;
    int t23;
    int t24;
    int w171;
    int w172;
    int w173;
    int w174;
    int w175;
    int t25;
    int w176;
    int w177;
    int w178;
    int w179;
    int w180;
    int l20;
    int w181;
    int w182;
    int w183;
    int l21;
    int l22;
    int l23;
    int w184;
    int l24;
    int l25;
    int l26;
    int w185;
    int t26;
    int t26_n;
    int w186;
    int l27[2];
    int w187;
    int w188;
    int w189;
    int w190;
    int w191;
    int w192;
    int w193;
    int w194;
    int w195;
    int l28[2];
    int w196;
    int t27;
    int w197;
    int w198;
    int w199;
    int w200;
    int w201;
    int w202;
    int l29[2];
    int l30[2];
    int w203;
    int w204;
    int l31;
    int l32;
    int l33[2];
    int l34;
    int w205;
    int w206;
    int w207;
    int w208;
    int w209;
    int w210;
    int w211;
    int w212;
    int w213;
    int w214;
    int w215;
    int w216;
    int w217;
    int w218;
    int w219;
    int w220;
    int w221;
    int w222;
    int w223;
    int w224;
    int w225;
    int w226;
    int w227;
    int w228;
    int w229;
    int w230;
    int w231;
    int w232;
    int w233;
    int w234;
    int w235;
    int l35; // 17 bits
    int l36; // 17 bits
    int l37; // 17 bits
    int l38; // 17 bits
    int l39; // 17 bits
#if 0
    int w236;
    int w237;
    int w238;
    int w239;
    int w240;
    int w241;
    int w242;
    int w243;
#endif
    int w244;
    int w245;

    int reg_clk0_sel;
    int reg_test0;
    int reg_test_18;
    int reg_hit;
    int reg_test1;
    int reg_80_b7;
    int reg_80_b6;
    int reg_lcb;
    int reg_ie1;
    int reg_80_b3;
    int reg_80_b2;
    int reg_m3;
    int reg_80_b0;
    int reg_lsm0;
    int reg_lsm1;
    int reg_ste;
    int reg_8c_b4;
    int reg_8c_b5;
    int reg_8c_b6;
    int reg_rs0;
    int reg_rs1;
    int reg_81_b0;
    int reg_81_b1;
    int reg_m5;
    int reg_m2;
    int reg_m1;
    int reg_ie0;
    int reg_disp;
    int reg_81_b7;
    int reg_lscr;
    int reg_hscr;
    int reg_vscr;
    int reg_ie2;
    int reg_8b_b4;
    int reg_8b_b5;
    int reg_8b_b6;
    int reg_8b_b7;
    int reg_lsm0_latch;
    int reg_lsm1_latch;
    int reg_code;
    int reg_addr;
    int reg_inc;
    dff_t reg_data;
    int reg_sa_high;
    int reg_dmd;
    int reg_lg[2];
    int reg_sa_low[2];

    int hclk1;
    int hclk2;

    int i_sel0;
    int i_as;
    int i_uds;
    int i_lds;
    int i_m1;
    int i_rd;
    int i_wr;
    int i_iorq;
    int i_mreq;
    int i_rw;
    int i_cpu_clk1;
    int i_bg;
    int i_intak;
    int i_bgack;

    int vram_address; // 17 bits

    int tm_w1;
    int tm_w2;
    int tm_w3;
    int tm_w4;
    int tm_w5;
    int tm_w6;
} vdp_t;
