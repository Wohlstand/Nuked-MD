#pragma once

#include "common.h"

typedef struct {
    sdffr_t dff1;
    sdffs_t dff2;
    int w1;
    int w2;
    int w3;
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
    int l1;
    int l2;
    int w20;
    int w21;
    int w22;
    int w23;
    int w24;
    sdffr_t dff3;
    int w25;
    int w26;
    int w27;
    int w28;
    int w30;
    int w31;
    int w32;
    int w33;
    int w34;
    int w35;
    int w36;
    int w37;
    int w38;
    int w39;
    int w40;
    int w41;
    int w42;
    int w43;
    int w44;
    int w46;
    int w47;
    int w48;
    int w49;
    int w50;
    int w51;
    int w52;
    int w53;
    int w54;
    int w55;
    int w56;
    int w57;
    int w58;
    int w59;
    int w60;
    int w61;
    int w62;
    int w63;
    int w64;
    int w65;
    int w66;
    int w67;

    int ext_data_out;
    int ext_data_in;
    int ext_test;
    int ext_jap;
    int ext_as_in;
    int ext_lds_in;
    int ext_uds_in;
    int ext_rw_in;
    int ext_dtack_out;
    int ext_address_in;
    int ext_cpu_reset;
    int ext_intak_vdp;
    int ext_sres;
    int ext_ce0_arb;
    int ext_ce0_tmss;
    int ext_m3;
    int ext_cart;
} tmss_t;