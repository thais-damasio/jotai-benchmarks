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
struct wm_adsp_compr_buf {int irq_count; int read_index; scalar_t__ avail; } ;

/* Variables and functions */

__attribute__((used)) static void wm_adsp_buffer_clear(struct wm_adsp_compr_buf *buf)
{
	buf->irq_count = 0xFFFFFFFF;
	buf->read_index = -1;
	buf->avail = 0;
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
          int _len_buf0 = 1;
          struct wm_adsp_compr_buf * buf = (struct wm_adsp_compr_buf *) malloc(_len_buf0*sizeof(struct wm_adsp_compr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].read_index = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wm_adsp_buffer_clear(buf);
          free(buf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_buf0 = 65025;
          struct wm_adsp_compr_buf * buf = (struct wm_adsp_compr_buf *) malloc(_len_buf0*sizeof(struct wm_adsp_compr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].read_index = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wm_adsp_buffer_clear(buf);
          free(buf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_buf0 = 100;
          struct wm_adsp_compr_buf * buf = (struct wm_adsp_compr_buf *) malloc(_len_buf0*sizeof(struct wm_adsp_compr_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].irq_count = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].read_index = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].avail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wm_adsp_buffer_clear(buf);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
