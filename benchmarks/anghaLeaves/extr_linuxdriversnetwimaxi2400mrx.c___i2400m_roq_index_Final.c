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
struct i2400m_roq {int dummy; } ;
struct i2400m {scalar_t__ rx_roq; } ;

/* Variables and functions */

__attribute__((used)) static
unsigned __i2400m_roq_index(struct i2400m *i2400m, struct i2400m_roq *roq)
{
	return ((unsigned long) roq - (unsigned long) i2400m->rx_roq)
		/ sizeof(*roq);
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
          int _len_i2400m0 = 1;
          struct i2400m * i2400m = (struct i2400m *) malloc(_len_i2400m0*sizeof(struct i2400m));
          for(int _i0 = 0; _i0 < _len_i2400m0; _i0++) {
            i2400m[_i0].rx_roq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_roq0 = 1;
          struct i2400m_roq * roq = (struct i2400m_roq *) malloc(_len_roq0*sizeof(struct i2400m_roq));
          for(int _i0 = 0; _i0 < _len_roq0; _i0++) {
            roq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = __i2400m_roq_index(i2400m,roq);
          printf("%u\n", benchRet); 
          free(i2400m);
          free(roq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_i2400m0 = 65025;
          struct i2400m * i2400m = (struct i2400m *) malloc(_len_i2400m0*sizeof(struct i2400m));
          for(int _i0 = 0; _i0 < _len_i2400m0; _i0++) {
            i2400m[_i0].rx_roq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_roq0 = 65025;
          struct i2400m_roq * roq = (struct i2400m_roq *) malloc(_len_roq0*sizeof(struct i2400m_roq));
          for(int _i0 = 0; _i0 < _len_roq0; _i0++) {
            roq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = __i2400m_roq_index(i2400m,roq);
          printf("%u\n", benchRet); 
          free(i2400m);
          free(roq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_i2400m0 = 100;
          struct i2400m * i2400m = (struct i2400m *) malloc(_len_i2400m0*sizeof(struct i2400m));
          for(int _i0 = 0; _i0 < _len_i2400m0; _i0++) {
            i2400m[_i0].rx_roq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_roq0 = 100;
          struct i2400m_roq * roq = (struct i2400m_roq *) malloc(_len_roq0*sizeof(struct i2400m_roq));
          for(int _i0 = 0; _i0 < _len_roq0; _i0++) {
            roq[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = __i2400m_roq_index(i2400m,roq);
          printf("%u\n", benchRet); 
          free(i2400m);
          free(roq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
