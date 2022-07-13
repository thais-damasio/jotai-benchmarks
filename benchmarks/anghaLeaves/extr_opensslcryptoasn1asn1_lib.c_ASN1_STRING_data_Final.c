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
struct TYPE_3__ {unsigned char* data; } ;
typedef  TYPE_1__ ASN1_STRING ;

/* Variables and functions */

unsigned char *ASN1_STRING_data(ASN1_STRING *x)
{
    return x->data;
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
          int _len_x0 = 1;
          struct TYPE_3__ * x = (struct TYPE_3__ *) malloc(_len_x0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
              int _len_x__i0__data0 = 1;
          x[_i0].data = (unsigned char *) malloc(_len_x__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_x__i0__data0; _j0++) {
            x[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned char * benchRet = ASN1_STRING_data(x);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].data);
          }
          free(x);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_x0 = 65025;
          struct TYPE_3__ * x = (struct TYPE_3__ *) malloc(_len_x0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
              int _len_x__i0__data0 = 1;
          x[_i0].data = (unsigned char *) malloc(_len_x__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_x__i0__data0; _j0++) {
            x[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned char * benchRet = ASN1_STRING_data(x);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].data);
          }
          free(x);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_x0 = 100;
          struct TYPE_3__ * x = (struct TYPE_3__ *) malloc(_len_x0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
              int _len_x__i0__data0 = 1;
          x[_i0].data = (unsigned char *) malloc(_len_x__i0__data0*sizeof(unsigned char));
          for(int _j0 = 0; _j0 < _len_x__i0__data0; _j0++) {
            x[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned char * benchRet = ASN1_STRING_data(x);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_x0; _aux++) {
          free(x[_aux].data);
          }
          free(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
