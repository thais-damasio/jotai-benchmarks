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
struct dk_cxlflash_resize {int /*<<< orphan*/  rsrc_handle; int /*<<< orphan*/  context_id; int /*<<< orphan*/  hdr; } ;
struct dk_cxlflash_release {int /*<<< orphan*/  rsrc_handle; int /*<<< orphan*/  context_id; int /*<<< orphan*/  hdr; } ;

/* Variables and functions */

__attribute__((used)) static void marshal_rele_to_resize(struct dk_cxlflash_release *release,
				   struct dk_cxlflash_resize *resize)
{
	resize->hdr = release->hdr;
	resize->context_id = release->context_id;
	resize->rsrc_handle = release->rsrc_handle;
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
          int _len_release0 = 1;
          struct dk_cxlflash_release * release = (struct dk_cxlflash_release *) malloc(_len_release0*sizeof(struct dk_cxlflash_release));
          for(int _i0 = 0; _i0 < _len_release0; _i0++) {
            release->rsrc_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        release->context_id = ((-2 * (next_i()%2)) + 1) * next_i();
        release->hdr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resize0 = 1;
          struct dk_cxlflash_resize * resize = (struct dk_cxlflash_resize *) malloc(_len_resize0*sizeof(struct dk_cxlflash_resize));
          for(int _i0 = 0; _i0 < _len_resize0; _i0++) {
            resize->rsrc_handle = ((-2 * (next_i()%2)) + 1) * next_i();
        resize->context_id = ((-2 * (next_i()%2)) + 1) * next_i();
        resize->hdr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          marshal_rele_to_resize(release,resize);
          free(release);
          free(resize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
