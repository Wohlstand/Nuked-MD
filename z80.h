#pragma once

enum {
    state_0 = 0,
    state_1,
    state_z
};

typedef struct {
    // input
    int i_int;
    int i_nmi;
    int i_wait;
    int i_reset;
    int i_busrq;

    // output

    int ext_data_i;
    int ext_data_o;
    int o_mreq;
    int o_halt;
    int o_iorq;
    int o_rd;
    int o_wr;
    int o_busak;
    int o_m1;
    int o_rfsh;

    // state
    int w1;
    int w2;
    int l1;
    int w3;
    int w4;
    int w5;
    int w6;
    int w7;
    int w8;
    int w9;
    int l2;
    int w10;
    int w11;
    int w12;
    int l3;
    int halt;
    int w13;
    int w14;
    int w15;
    int w16;
    int l4;
    int w17;
    int w18;
    int w19;
    int w20;
    int w21;
    int w22;
    int w23;
    int l5;
    int w24;
    int l6;
    int w25;
    int w26;
    int w27;
    int w28;
    int l7;
    int w29;
    int w30;
    int w31;
    int l8;
    int w32;
    int l9;
    int w33;
    int l10;
    int l11;
    int w34;
    int l12;
    int w35;
    int w36;
    int w37;
    int w38;
    int w39;
    int w40;
    int w41;
    int w42;
    int w43;
    int l13;
    int w44;
    int l14;
    int l15;
    int w45;
    int w46;
    int w192;
    int w47;
    int l16;
    int w48;
    int l17;
    int l18;
    int w49;
    int w50;
    int w51;
    int w52;
    int l19;
    int w53;
    int l20;
    int w54;
    int w55;
    int w56;
    int w57;
    int w58;
    int w59;
    int w60;
    int l21;
    int w61;
    int w62;
    int l22;
    int w63;
    int l23;
    int l24;
    int w64;
    int w65;
    int w66;
    int w67;
    int w68;
    int l25;
    int w69;
    int w70;
    int w71;
    int l26;
    int w72;
    int w73;
    int w74;
    int w75;
    int l27;
    int w76;
    int w77;
    int w78;
    int w79;
    int l28;
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
    int l29;
    int w104;
    int w105;
    int w106;
    int w107;
    int w108;
    int l30;
    int w109;
    int w110;
    int w111;
    int w112;
    int w113;
    int l31;
    int w114;
    int w115;
    int w116;
    int w117;
    int w118;
    int w119;
    int l32;
    int w120;
    int w121;
    int w122;
    int l33;
    int w123;
    int w124;
    int l34;
    int w125;
    int w126;
    int w127;
    int w128;
    int l35;
    int w129;
    int w130;
    int w131;
    int w132;
    int l36;
    int w133;
    int w134;
    int w135;
    int w136;
    int w137;
    int w138;
    int w139;
    int w140;
    int w141;
    int w142;
    int w143;
    int w144;
    int l37;
    int l38;
    int w145;
    int w146;
    int w147;
    int pla[99];
    int w148;
    int w149;
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
    int w162;
    int w163;
    int w164;
    int w165;
    int w166;
    int w167;
    int w168;
    int w169;
    int w170;
    int w171;
    int w172;
    int w173;
    int w174;
    int w175;
    int w176;
    int w177;
    int w178;
    int w179;
    int w180;
    int w181;
    int w182;
    int w183;
    int w184;
    int w185;
    int w186;
    int w187;
    int w188;
    int w189;
    int w190;
    int w191;
    int w193;
    int w194;
    int w195;
    int w196;
    int w197;
    int w198;
    int w199;
    int w200;
    int w201;
    int w202;
    int w203;
    int w204;
    int l39;
    int w205;
    int w206;
    int w207;
    int w208;
    int w209;
    int l40;
    int w210;
    int w211;
    int w212;
    int w213;
    int w214;
    int l41;
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
    int l42;
    int w228;
    int w229;
    int w230;
    int w231;
    int w232;
    int w233;
    int w234;
    int w235;
    int w236;
    int w237;
    int w238;
    int w239;
    int w240;
    int w241;
    int w242;
    int w243;
    int w244;
    int w245;
    int w246;
    int w247;
    int w248;
    int w249;
    int w250;
    int w251;
    int w252;
    int w253;
    int w254;
    int w255;
    int w256;

    // temp wires
    int tm_w1;
    int tm_w2;
    int tm_w3;
    int tm_w4;
    int tm_w5;
    int tm_w6;
    int tm_w7;
    int tm_w8;
    int tm_w9;
    int tm_w10;
    int tm_w11;
    int tm_w12;

} z80_t;