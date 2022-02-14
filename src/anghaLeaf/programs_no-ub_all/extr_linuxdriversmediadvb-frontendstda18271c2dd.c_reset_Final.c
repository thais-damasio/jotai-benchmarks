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
       0            big-arr\n\
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

/* Type definitions */
typedef  int u32 ;
struct tda_state {int m_SettlingTime; int m_IFLevelAnalog; int m_IFLevelDigital; int m_IFLevelDVBC; int m_IFLevelDVBT; int m_EP4; int m_EP3_Standby; int m_bMaster; int m_bFMInput; scalar_t__ m_Frequency; } ;

/* Variables and functions */

__attribute__((used)) static void reset(struct tda_state *state)
{
	u32   ulIFLevelAnalog = 0;
	u32   ulIFLevelDigital = 2;
	u32   ulIFLevelDVBC = 7;
	u32   ulIFLevelDVBT = 6;
	u32   ulXTOut = 0;
	u32   ulStandbyMode = 0x06;    /* Send in stdb, but leave osc on */
	u32   ulSlave = 0;
	u32   ulFMInput = 0;
	u32   ulSettlingTime = 100;

	state->m_Frequency         = 0;
	state->m_SettlingTime = 100;
	state->m_IFLevelAnalog = (ulIFLevelAnalog & 0x07) << 2;
	state->m_IFLevelDigital = (ulIFLevelDigital & 0x07) << 2;
	state->m_IFLevelDVBC = (ulIFLevelDVBC & 0x07) << 2;
	state->m_IFLevelDVBT = (ulIFLevelDVBT & 0x07) << 2;

	state->m_EP4 = 0x20;
	if (ulXTOut != 0)
		state->m_EP4 |= 0x40;

	state->m_EP3_Standby = ((ulStandbyMode & 0x07) << 5) | 0x0F;
	state->m_bMaster = (ulSlave == 0);

	state->m_SettlingTime = ulSettlingTime;

	state->m_bFMInput = (ulFMInput == 2);
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

    // big-arr
    case 0:
    {
          int _len_state0 = 1;
          struct tda_state * state = (struct tda_state *) malloc(_len_state0*sizeof(struct tda_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state->m_SettlingTime = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_IFLevelAnalog = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_IFLevelDigital = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_IFLevelDVBC = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_IFLevelDVBT = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_EP4 = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_EP3_Standby = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_bMaster = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_bFMInput = ((-2 * (next_i()%2)) + 1) * next_i();
        state->m_Frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset(state);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
