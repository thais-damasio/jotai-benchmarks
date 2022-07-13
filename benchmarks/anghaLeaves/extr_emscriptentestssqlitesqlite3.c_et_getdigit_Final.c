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
typedef  double LONGDOUBLE_TYPE ;

/* Variables and functions */

__attribute__((used)) static char et_getdigit(LONGDOUBLE_TYPE *val, int *cnt){
  int digit;
  LONGDOUBLE_TYPE d;
  if( (*cnt)++ >= 16 ) return '0';
  digit = (int)*val;
  d = digit;
  digit += '0';
  *val = (*val - d)*10.0;
  return (char)digit;
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
          int _len_val0 = 1;
          double * val = (double *) malloc(_len_val0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_cnt0 = 1;
          int * cnt = (int *) malloc(_len_cnt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cnt0; _i0++) {
            cnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = et_getdigit(val,cnt);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(val);
          free(cnt);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_val0 = 65025;
          double * val = (double *) malloc(_len_val0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_cnt0 = 65025;
          int * cnt = (int *) malloc(_len_cnt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cnt0; _i0++) {
            cnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = et_getdigit(val,cnt);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(val);
          free(cnt);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_val0 = 100;
          double * val = (double *) malloc(_len_val0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_cnt0 = 100;
          int * cnt = (int *) malloc(_len_cnt0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cnt0; _i0++) {
            cnt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = et_getdigit(val,cnt);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(val);
          free(cnt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
