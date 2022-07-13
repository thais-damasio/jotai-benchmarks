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
struct textstream {scalar_t__ mode; } ;
typedef  enum iotype { ____Placeholder_iotype } iotype ;
typedef  int BOOL ;

/* Variables and functions */
 scalar_t__ ForAppending ; 
 scalar_t__ ForReading ; 
 scalar_t__ ForWriting ; 
 int IORead ; 

__attribute__((used)) static BOOL textstream_check_iomode(struct textstream *This, enum iotype type)
{
    if (type == IORead)
        return This->mode == ForWriting || This->mode == ForAppending;
    else
        return This->mode == ForReading;
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
          enum iotype type = 0;
          int _len_This0 = 1;
          struct textstream * This = (struct textstream *) malloc(_len_This0*sizeof(struct textstream));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = textstream_check_iomode(This,type);
          printf("%d\n", benchRet); 
          free(This);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum iotype type = 0;
          int _len_This0 = 65025;
          struct textstream * This = (struct textstream *) malloc(_len_This0*sizeof(struct textstream));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = textstream_check_iomode(This,type);
          printf("%d\n", benchRet); 
          free(This);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum iotype type = 0;
          int _len_This0 = 100;
          struct textstream * This = (struct textstream *) malloc(_len_This0*sizeof(struct textstream));
          for(int _i0 = 0; _i0 < _len_This0; _i0++) {
            This[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = textstream_check_iomode(This,type);
          printf("%d\n", benchRet); 
          free(This);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
