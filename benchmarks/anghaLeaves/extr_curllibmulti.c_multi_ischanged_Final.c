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
struct Curl_multi {int recheckstate; } ;

/* Variables and functions */
 int FALSE ; 

__attribute__((used)) static bool multi_ischanged(struct Curl_multi *multi, bool clear)
{
  bool retval = multi->recheckstate;
  if(clear)
    multi->recheckstate = FALSE;
  return retval;
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
          int clear = 100;
          int _len_multi0 = 1;
          struct Curl_multi * multi = (struct Curl_multi *) malloc(_len_multi0*sizeof(struct Curl_multi));
          for(int _i0 = 0; _i0 < _len_multi0; _i0++) {
            multi[_i0].recheckstate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = multi_ischanged(multi,clear);
          printf("%d\n", benchRet); 
          free(multi);
        
        break;
    }
    // big-arr
    case 1:
    {
          int clear = 255;
          int _len_multi0 = 65025;
          struct Curl_multi * multi = (struct Curl_multi *) malloc(_len_multi0*sizeof(struct Curl_multi));
          for(int _i0 = 0; _i0 < _len_multi0; _i0++) {
            multi[_i0].recheckstate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = multi_ischanged(multi,clear);
          printf("%d\n", benchRet); 
          free(multi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int clear = 10;
          int _len_multi0 = 100;
          struct Curl_multi * multi = (struct Curl_multi *) malloc(_len_multi0*sizeof(struct Curl_multi));
          for(int _i0 = 0; _i0 < _len_multi0; _i0++) {
            multi[_i0].recheckstate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = multi_ischanged(multi,clear);
          printf("%d\n", benchRet); 
          free(multi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
