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
typedef  int /*<<< orphan*/  mrb_state ;

/* Variables and functions */
 int FMODE_APPEND ; 
 int FMODE_CREATE ; 
#define  FMODE_READABLE 130 
#define  FMODE_READWRITE 129 
 int FMODE_TRUNC ; 
#define  FMODE_WRITABLE 128 
 int O_APPEND ; 
 int O_CREAT ; 
 int O_RDONLY ; 
 int O_RDWR ; 
 int O_TRUNC ; 
 int O_WRONLY ; 

__attribute__((used)) static int
mrb_io_flags_to_modenum(mrb_state *mrb, int flags)
{
  int modenum = 0;

  switch(flags & (FMODE_READABLE|FMODE_WRITABLE|FMODE_READWRITE)) {
    case FMODE_READABLE:
      modenum = O_RDONLY;
      break;
    case FMODE_WRITABLE:
      modenum = O_WRONLY;
      break;
    case FMODE_READWRITE:
      modenum = O_RDWR;
      break;
  }

  if (flags & FMODE_APPEND) {
    modenum |= O_APPEND;
  }
  if (flags & FMODE_TRUNC) {
    modenum |= O_TRUNC;
  }
  if (flags & FMODE_CREATE) {
    modenum |= O_CREAT;
  }
#ifdef O_BINARY
  if (flags & FMODE_BINMODE) {
    modenum |= O_BINARY;
  }
#endif

  return modenum;
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
          int flags = 100;
          int _len_mrb0 = 1;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mrb_io_flags_to_modenum(mrb,flags);
          printf("%d\n", benchRet); 
          free(mrb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int flags = 255;
          int _len_mrb0 = 65025;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mrb_io_flags_to_modenum(mrb,flags);
          printf("%d\n", benchRet); 
          free(mrb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int flags = 10;
          int _len_mrb0 = 100;
          int * mrb = (int *) malloc(_len_mrb0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mrb0; _i0++) {
            mrb[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mrb_io_flags_to_modenum(mrb,flags);
          printf("%d\n", benchRet); 
          free(mrb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
