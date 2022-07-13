// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint16_t ;
struct TYPE_3__ {int CCER; int CCMR2; } ;
typedef  TYPE_1__ TIM_TypeDef ;

/* Variables and functions */
 scalar_t__ TIM_CCER_CC4E ; 
 int TIM_CCER_CC4NP ; 
 int TIM_CCER_CC4P ; 
 scalar_t__ TIM_CCMR2_CC4S ; 
 scalar_t__ TIM_CCMR2_IC4F ; 

__attribute__((used)) static void TI4_Config(TIM_TypeDef* TIMx, uint16_t TIM_ICPolarity, uint16_t TIM_ICSelection,
                       uint16_t TIM_ICFilter)
{
  uint16_t tmpccmr2 = 0, tmpccer = 0, tmp = 0;

   /* Disable the Channel 4: Reset the CC4E Bit */
  TIMx->CCER &= (uint16_t)~((uint16_t)TIM_CCER_CC4E);
  tmpccmr2 = TIMx->CCMR2;
  tmpccer = TIMx->CCER;
  tmp = (uint16_t)(TIM_ICPolarity << 12);
  /* Select the Input and set the filter */
  tmpccmr2 &= (uint16_t)((uint16_t)(~(uint16_t)TIM_CCMR2_CC4S) & ((uint16_t)~((uint16_t)TIM_CCMR2_IC4F)));
  tmpccmr2 |= (uint16_t)(TIM_ICSelection << 8);
  tmpccmr2 |= (uint16_t)(TIM_ICFilter << 12);  
  /* Select the Polarity and set the CC4E Bit */
  tmpccer &= (uint16_t)~((uint16_t)(TIM_CCER_CC4P | TIM_CCER_CC4NP));
  tmpccer |= (uint16_t)(tmp | (uint16_t)TIM_CCER_CC4E);
  /* Write to TIMx CCMR2 and CCER registers */
  TIMx->CCMR2 = tmpccmr2;
  TIMx->CCER = tmpccer;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int TIM_ICPolarity = 100;
          int TIM_ICSelection = 100;
          int TIM_ICFilter = 100;
          int _len_TIMx0 = 1;
          struct TYPE_3__ * TIMx = (struct TYPE_3__ *) malloc(_len_TIMx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_TIMx0; _i0++) {
            TIMx[_i0].CCER = ((-2 * (next_i()%2)) + 1) * next_i();
        TIMx[_i0].CCMR2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TI4_Config(TIMx,TIM_ICPolarity,TIM_ICSelection,TIM_ICFilter);
          free(TIMx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int TIM_ICPolarity = 255;
          int TIM_ICSelection = 255;
          int TIM_ICFilter = 255;
          int _len_TIMx0 = 65025;
          struct TYPE_3__ * TIMx = (struct TYPE_3__ *) malloc(_len_TIMx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_TIMx0; _i0++) {
            TIMx[_i0].CCER = ((-2 * (next_i()%2)) + 1) * next_i();
        TIMx[_i0].CCMR2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TI4_Config(TIMx,TIM_ICPolarity,TIM_ICSelection,TIM_ICFilter);
          free(TIMx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int TIM_ICPolarity = 10;
          int TIM_ICSelection = 10;
          int TIM_ICFilter = 10;
          int _len_TIMx0 = 100;
          struct TYPE_3__ * TIMx = (struct TYPE_3__ *) malloc(_len_TIMx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_TIMx0; _i0++) {
            TIMx[_i0].CCER = ((-2 * (next_i()%2)) + 1) * next_i();
        TIMx[_i0].CCMR2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          TI4_Config(TIMx,TIM_ICPolarity,TIM_ICSelection,TIM_ICFilter);
          free(TIMx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
