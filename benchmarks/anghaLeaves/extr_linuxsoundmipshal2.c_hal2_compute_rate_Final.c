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
struct hal2_codec {int master; int inc; unsigned short mod; } ;

/* Variables and functions */

__attribute__((used)) static int hal2_compute_rate(struct hal2_codec *codec, unsigned int rate)
{
	unsigned short mod;

	if (44100 % rate < 48000 % rate) {
		mod = 4 * 44100 / rate;
		codec->master = 44100;
	} else {
		mod = 4 * 48000 / rate;
		codec->master = 48000;
	}

	codec->inc = 4;
	codec->mod = mod;
	rate = 4 * codec->master / mod;

	return rate;
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
          unsigned int rate = 100;
          int _len_codec0 = 1;
          struct hal2_codec * codec = (struct hal2_codec *) malloc(_len_codec0*sizeof(struct hal2_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].master = ((-2 * (next_i()%2)) + 1) * next_i();
        codec[_i0].inc = ((-2 * (next_i()%2)) + 1) * next_i();
        codec[_i0].mod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hal2_compute_rate(codec,rate);
          printf("%d\n", benchRet); 
          free(codec);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int rate = 255;
          int _len_codec0 = 65025;
          struct hal2_codec * codec = (struct hal2_codec *) malloc(_len_codec0*sizeof(struct hal2_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].master = ((-2 * (next_i()%2)) + 1) * next_i();
        codec[_i0].inc = ((-2 * (next_i()%2)) + 1) * next_i();
        codec[_i0].mod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hal2_compute_rate(codec,rate);
          printf("%d\n", benchRet); 
          free(codec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int rate = 10;
          int _len_codec0 = 100;
          struct hal2_codec * codec = (struct hal2_codec *) malloc(_len_codec0*sizeof(struct hal2_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].master = ((-2 * (next_i()%2)) + 1) * next_i();
        codec[_i0].inc = ((-2 * (next_i()%2)) + 1) * next_i();
        codec[_i0].mod = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hal2_compute_rate(codec,rate);
          printf("%d\n", benchRet); 
          free(codec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
