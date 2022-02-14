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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  ULONG ;
struct TYPE_3__ {scalar_t__ HighPart; scalar_t__ LowPart; } ;
typedef  scalar_t__ SEEKMODE ;
typedef  TYPE_1__ LARGE_INTEGER ;
typedef  int /*<<< orphan*/  ARC_STATUS ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int /*<<< orphan*/  ESUCCESS ; 
 scalar_t__ SeekAbsolute ; 
 scalar_t__ gRamDiskOffset ; 
 scalar_t__ gRamDiskSize ; 

__attribute__((used)) static ARC_STATUS RamDiskSeek(ULONG FileId, LARGE_INTEGER* Position, SEEKMODE SeekMode)
{
    //
    // Only accept absolute mode now
    //
    if (SeekMode != SeekAbsolute)
        return EINVAL;

    //
    // Check if we're in the ramdisk
    //
    if (Position->HighPart != 0)
        return EINVAL;
    if (Position->LowPart >= gRamDiskSize)
        return EINVAL;

    //
    // OK, remember seek position
    //
    gRamDiskOffset = Position->LowPart;

    return ESUCCESS;
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
          int FileId = 255;
          long SeekMode = 255;
          int _len_Position0 = 1;
          struct TYPE_3__ * Position = (struct TYPE_3__ *) malloc(_len_Position0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_Position0; _i0++) {
            Position->HighPart = ((-2 * (next_i()%2)) + 1) * next_i();
        Position->LowPart = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = RamDiskSeek(FileId,Position,SeekMode);
          printf("%d\n", benchRet); 
          free(Position);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
