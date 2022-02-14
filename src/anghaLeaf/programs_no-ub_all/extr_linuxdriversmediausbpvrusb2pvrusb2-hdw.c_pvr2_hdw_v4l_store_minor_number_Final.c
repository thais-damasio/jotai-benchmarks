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
struct pvr2_hdw {int v4l_minor_number_video; int v4l_minor_number_vbi; int v4l_minor_number_radio; } ;
typedef  enum pvr2_v4l_type { ____Placeholder_pvr2_v4l_type } pvr2_v4l_type ;

/* Variables and functions */
#define  pvr2_v4l_type_radio 130 
#define  pvr2_v4l_type_vbi 129 
#define  pvr2_v4l_type_video 128 

void pvr2_hdw_v4l_store_minor_number(struct pvr2_hdw *hdw,
				     enum pvr2_v4l_type index,int v)
{
	switch (index) {
	case pvr2_v4l_type_video: hdw->v4l_minor_number_video = v;break;
	case pvr2_v4l_type_vbi: hdw->v4l_minor_number_vbi = v;break;
	case pvr2_v4l_type_radio: hdw->v4l_minor_number_radio = v;break;
	default: break;
	}
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
          enum pvr2_v4l_type index = 0;
          int v = 255;
          int _len_hdw0 = 1;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw->v4l_minor_number_video = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw->v4l_minor_number_vbi = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw->v4l_minor_number_radio = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pvr2_hdw_v4l_store_minor_number(hdw,index,v);
          free(hdw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}