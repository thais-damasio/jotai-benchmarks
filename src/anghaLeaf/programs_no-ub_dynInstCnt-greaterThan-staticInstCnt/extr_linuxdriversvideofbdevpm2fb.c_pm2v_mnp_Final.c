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
typedef  int s32 ;

/* Variables and functions */
 unsigned char PM2_REFERENCE_CLOCK ; 

__attribute__((used)) static void pm2v_mnp(u32 clk, unsigned char *mm, unsigned char *nn,
		     unsigned char *pp)
{
	unsigned char m;
	unsigned char n;
	unsigned char p;
	u32 f;
	s32 delta = 1000;

	*mm = *nn = *pp = 0;
	for (m = 1; m < 128; m++) {
		for (n = 2 * m + 1; n; n++) {
			for (p = 0; p < 2; p++) {
				f = (PM2_REFERENCE_CLOCK >> (p + 1)) * n / m;
				if (clk > f - delta && clk < f + delta) {
					delta = (clk > f) ? clk - f : f - clk;
					*mm = m;
					*nn = n;
					*pp = p;
				}
			}
		}
	}
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
          int clk = 255;
          int _len_mm0 = 65025;
          unsigned char * mm = (unsigned char *) malloc(_len_mm0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mm0; _i0++) {
            mm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nn0 = 65025;
          unsigned char * nn = (unsigned char *) malloc(_len_nn0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_nn0; _i0++) {
            nn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pp0 = 65025;
          unsigned char * pp = (unsigned char *) malloc(_len_pp0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
            pp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pm2v_mnp(clk,mm,nn,pp);
          free(mm);
          free(nn);
          free(pp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
