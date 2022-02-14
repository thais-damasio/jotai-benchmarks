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
typedef  enum qe_clock { ____Placeholder_qe_clock } qe_clock ;

/* Variables and functions */
 int EINVAL ; 
#define  QE_CLK10 143 
#define  QE_CLK11 142 
#define  QE_CLK12 141 
#define  QE_CLK13 140 
#define  QE_CLK14 139 
#define  QE_CLK15 138 
#define  QE_CLK16 137 
#define  QE_CLK17 136 
#define  QE_CLK18 135 
#define  QE_CLK19 134 
#define  QE_CLK21 133 
#define  QE_CLK3 132 
#define  QE_CLK4 131 
#define  QE_CLK6 130 
#define  QE_CLK8 129 
#define  QE_CLK9 128 

__attribute__((used)) static int ucc_get_tdm_tx_clk(u32 tdm_num, enum qe_clock clock)
{
	int clock_bits = -EINVAL;

	switch (tdm_num) {
	case 0:
		switch (clock) {
		case QE_CLK4:
			clock_bits = 6;
			break;
		case QE_CLK9:
			clock_bits = 7;
			break;
		default:
			break;
		}
		break;
	case 1:
		switch (clock) {
		case QE_CLK6:
			clock_bits = 6;
			break;
		case QE_CLK11:
			clock_bits = 7;
			break;
		default:
			break;
		}
		break;
	case 2:
		switch (clock) {
		case QE_CLK8:
			clock_bits = 6;
			break;
		case QE_CLK13:
			clock_bits = 7;
			break;
		default:
			break;
		}
		break;
	case 3:
		switch (clock) {
		case QE_CLK10:
			clock_bits = 6;
			break;
		case QE_CLK15:
			clock_bits = 7;
			break;
		default:
			break;
		}
		break;
	case 4:
		switch (clock) {
		case QE_CLK12:
			clock_bits = 6;
			break;
		case QE_CLK17:
			clock_bits = 7;
			break;
		default:
			break;
		}
		break;
	case 5:
		switch (clock) {
		case QE_CLK14:
			clock_bits = 6;
			break;
		case QE_CLK19:
			clock_bits = 7;
			break;
		default:
			break;
		}
		break;
	case 6:
		switch (clock) {
		case QE_CLK16:
			clock_bits = 6;
			break;
		case QE_CLK21:
			clock_bits = 7;
			break;
		default:
			break;
		}
		break;
	case 7:
		switch (clock) {
		case QE_CLK18:
			clock_bits = 6;
			break;
		case QE_CLK3:
			clock_bits = 7;
			break;
		default:
			break;
		}
		break;
	}

	return clock_bits;
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
          int tdm_num = 255;
          enum qe_clock clock = 0;
          int benchRet = ucc_get_tdm_tx_clk(tdm_num,clock);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}