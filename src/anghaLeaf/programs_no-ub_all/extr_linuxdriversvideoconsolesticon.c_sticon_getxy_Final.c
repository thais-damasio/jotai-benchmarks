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
struct vc_data {unsigned long vc_origin; unsigned long vc_scr_end; unsigned long vc_cols; scalar_t__ vc_num; } ;

/* Variables and functions */
 scalar_t__ fg_console ; 
 unsigned long softback_buf ; 
 unsigned long softback_curr ; 
 unsigned long softback_end ; 
 unsigned long softback_in ; 
 scalar_t__ softback_lines ; 

__attribute__((used)) static unsigned long sticon_getxy(struct vc_data *conp, unsigned long pos,
				  int *px, int *py)
{
    int x, y;
    unsigned long ret;
    if (pos >= conp->vc_origin && pos < conp->vc_scr_end) {
    	unsigned long offset = (pos - conp->vc_origin) / 2;
    	
    	x = offset % conp->vc_cols;
    	y = offset / conp->vc_cols;
    	if (conp->vc_num == fg_console)
    	    y += softback_lines;
    	ret = pos + (conp->vc_cols - x) * 2;
    } else if (conp->vc_num == fg_console && softback_lines) {
    	unsigned long offset = pos - softback_curr;
    	
    	if (pos < softback_curr)
    	    offset += softback_end - softback_buf;
    	offset /= 2;
    	x = offset % conp->vc_cols;
    	y = offset / conp->vc_cols;
	ret = pos + (conp->vc_cols - x) * 2;
	if (ret == softback_end)
	    ret = softback_buf;
	if (ret == softback_in)
	    ret = conp->vc_origin;
    } else {
    	/* Should not happen */
    	x = y = 0;
    	ret = conp->vc_origin;
    }
    if (px) *px = x;
    if (py) *py = y;
    return ret;
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
          unsigned long pos = 255;
          int _len_conp0 = 1;
          struct vc_data * conp = (struct vc_data *) malloc(_len_conp0*sizeof(struct vc_data));
          for(int _i0 = 0; _i0 < _len_conp0; _i0++) {
            conp->vc_origin = ((-2 * (next_i()%2)) + 1) * next_i();
        conp->vc_scr_end = ((-2 * (next_i()%2)) + 1) * next_i();
        conp->vc_cols = ((-2 * (next_i()%2)) + 1) * next_i();
        conp->vc_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_px0 = 65025;
          int * px = (int *) malloc(_len_px0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_px0; _i0++) {
            px[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_py0 = 65025;
          int * py = (int *) malloc(_len_py0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_py0; _i0++) {
            py[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = sticon_getxy(conp,pos,px,py);
          printf("%lu\n", benchRet); 
          free(conp);
          free(px);
          free(py);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
