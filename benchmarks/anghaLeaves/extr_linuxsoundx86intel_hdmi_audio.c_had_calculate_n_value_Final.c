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

/* Type definitions */
typedef  int u32 ;

/* Variables and functions */
#define  AUD_SAMPLE_RATE_176_4 134 
#define  AUD_SAMPLE_RATE_32 133 
#define  AUD_SAMPLE_RATE_44_1 132 
#define  AUD_SAMPLE_RATE_48 131 
#define  AUD_SAMPLE_RATE_88_2 130 
#define  AUD_SAMPLE_RATE_96 129 
 int EINVAL ; 
#define  HAD_MAX_RATE 128 

__attribute__((used)) static int had_calculate_n_value(u32 aud_samp_freq)
{
	int n_val;

	/* Select N according to HDMI 1.3a spec*/
	switch (aud_samp_freq) {
	case AUD_SAMPLE_RATE_32:
		n_val = 4096;
		break;

	case AUD_SAMPLE_RATE_44_1:
		n_val = 6272;
		break;

	case AUD_SAMPLE_RATE_48:
		n_val = 6144;
		break;

	case AUD_SAMPLE_RATE_88_2:
		n_val = 12544;
		break;

	case AUD_SAMPLE_RATE_96:
		n_val = 12288;
		break;

	case AUD_SAMPLE_RATE_176_4:
		n_val = 25088;
		break;

	case HAD_MAX_RATE:
		n_val = 24576;
		break;

	default:
		n_val = -EINVAL;
		break;
	}
	return n_val;
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
          int aud_samp_freq = 100;
          int benchRet = had_calculate_n_value(aud_samp_freq);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int aud_samp_freq = 255;
          int benchRet = had_calculate_n_value(aud_samp_freq);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int aud_samp_freq = 10;
          int benchRet = had_calculate_n_value(aud_samp_freq);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
