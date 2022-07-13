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
struct datarec {double processed; } ;
typedef  double __u64 ;

/* Variables and functions */

__attribute__((used)) static __u64 calc_pps(struct datarec *r, struct datarec *p, double period_)
{
	__u64 packets = 0;
	__u64 pps = 0;

	if (period_ > 0) {
		packets = r->processed - p->processed;
		pps = packets / period_;
	}
	return pps;
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
          double period_ = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_r0 = 1;
          struct datarec * r = (struct datarec *) malloc(_len_r0*sizeof(struct datarec));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].processed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 1;
          struct datarec * p = (struct datarec *) malloc(_len_p0*sizeof(struct datarec));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].processed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = calc_pps(r,p,period_);
          printf("%lf\n", benchRet); 
          free(r);
          free(p);
        
        break;
    }
    // big-arr
    case 1:
    {
          double period_ = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_r0 = 65025;
          struct datarec * r = (struct datarec *) malloc(_len_r0*sizeof(struct datarec));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].processed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 65025;
          struct datarec * p = (struct datarec *) malloc(_len_p0*sizeof(struct datarec));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].processed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = calc_pps(r,p,period_);
          printf("%lf\n", benchRet); 
          free(r);
          free(p);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double period_ = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_r0 = 100;
          struct datarec * r = (struct datarec *) malloc(_len_r0*sizeof(struct datarec));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].processed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_p0 = 100;
          struct datarec * p = (struct datarec *) malloc(_len_p0*sizeof(struct datarec));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].processed = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = calc_pps(r,p,period_);
          printf("%lf\n", benchRet); 
          free(r);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
