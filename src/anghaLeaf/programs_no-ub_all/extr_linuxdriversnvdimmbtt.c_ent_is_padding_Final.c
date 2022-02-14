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
struct log_entry {scalar_t__ lba; scalar_t__ old_map; scalar_t__ new_map; scalar_t__ seq; } ;

/* Variables and functions */

__attribute__((used)) static bool ent_is_padding(struct log_entry *ent)
{
	return (ent->lba == 0) && (ent->old_map == 0) && (ent->new_map == 0)
		&& (ent->seq == 0);
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
          int _len_ent0 = 1;
          struct log_entry * ent = (struct log_entry *) malloc(_len_ent0*sizeof(struct log_entry));
          for(int _i0 = 0; _i0 < _len_ent0; _i0++) {
            ent->lba = ((-2 * (next_i()%2)) + 1) * next_i();
        ent->old_map = ((-2 * (next_i()%2)) + 1) * next_i();
        ent->new_map = ((-2 * (next_i()%2)) + 1) * next_i();
        ent->seq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ent_is_padding(ent);
          printf("%d\n", benchRet); 
          free(ent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}