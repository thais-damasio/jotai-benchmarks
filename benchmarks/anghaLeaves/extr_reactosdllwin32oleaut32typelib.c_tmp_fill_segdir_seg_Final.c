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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ len; } ;
typedef  TYPE_1__ WMSFT_SegContents ;
struct TYPE_6__ {int offset; int res08; int res0c; scalar_t__ length; } ;
typedef  TYPE_2__ MSFT_pSeg ;
typedef  int DWORD ;

/* Variables and functions */

__attribute__((used)) static void tmp_fill_segdir_seg(MSFT_pSeg *segdir, WMSFT_SegContents *contents, DWORD *running_offset)
{
    if(contents && contents->len){
        segdir->offset = *running_offset;
        segdir->length = contents->len;
        *running_offset += segdir->length;
    }else{
        segdir->offset = -1;
        segdir->length = 0;
    }

    /* TODO: do these ever change? */
    segdir->res08 = -1;
    segdir->res0c = 0xf;
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
          int _len_segdir0 = 1;
          struct TYPE_6__ * segdir = (struct TYPE_6__ *) malloc(_len_segdir0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_segdir0; _i0++) {
            segdir[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        segdir[_i0].res08 = ((-2 * (next_i()%2)) + 1) * next_i();
        segdir[_i0].res0c = ((-2 * (next_i()%2)) + 1) * next_i();
        segdir[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_contents0 = 1;
          struct TYPE_5__ * contents = (struct TYPE_5__ *) malloc(_len_contents0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_contents0; _i0++) {
            contents[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_running_offset0 = 1;
          int * running_offset = (int *) malloc(_len_running_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_running_offset0; _i0++) {
            running_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tmp_fill_segdir_seg(segdir,contents,running_offset);
          free(segdir);
          free(contents);
          free(running_offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
