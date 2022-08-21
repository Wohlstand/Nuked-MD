#pragma once
#include <stdint.h>

typedef struct {
    // input
    int ic;

    // fsm
    int fsm_cnt1[2];
    int fsm_cnt2[2];

    // clock
    int ic_latch[2]; // 12
    int ic_check_latch[2]; // 4
    int prescaler_latch[2]; // 6
    int phi1_latch[2];
    int phi2_latch[2];
} fm_t;



