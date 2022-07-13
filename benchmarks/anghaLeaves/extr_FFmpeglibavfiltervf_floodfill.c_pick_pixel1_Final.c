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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int** data; int* linesize; } ;
typedef  TYPE_1__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static void pick_pixel1(AVFrame *frame, int x, int y,
                        int *s0, int *s1, int *s2, int *s3)
{
    if (*s0 < 0)
        *s0 = frame->data[0][y * frame->linesize[0] + x];
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
          int x = 100;
          int y = 100;
          int _len_frame0 = 1;
          struct TYPE_3__ * frame = (struct TYPE_3__ *) malloc(_len_frame0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__data0 = 1;
          frame[_i0].data = (int **) malloc(_len_frame__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_frame__i0__data0; _j0++) {
            int _len_frame__i0__data1 = 1;
            frame[_i0].data[_j0] = (int *) malloc(_len_frame__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_frame__i0__data1; _j1++) {
              frame[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_frame__i0__linesize0 = 1;
          frame[_i0].linesize = (int *) malloc(_len_frame__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__linesize0; _j0++) {
            frame[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s00 = 1;
          int * s0 = (int *) malloc(_len_s00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s00; _i0++) {
            s0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s10 = 1;
          int * s1 = (int *) malloc(_len_s10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 1;
          int * s2 = (int *) malloc(_len_s20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s30 = 1;
          int * s3 = (int *) malloc(_len_s30*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s30; _i0++) {
            s3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pick_pixel1(frame,x,y,s0,s1,s2,s3);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          free(frame);
          free(s0);
          free(s1);
          free(s2);
          free(s3);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int _len_frame0 = 65025;
          struct TYPE_3__ * frame = (struct TYPE_3__ *) malloc(_len_frame0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__data0 = 1;
          frame[_i0].data = (int **) malloc(_len_frame__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_frame__i0__data0; _j0++) {
            int _len_frame__i0__data1 = 1;
            frame[_i0].data[_j0] = (int *) malloc(_len_frame__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_frame__i0__data1; _j1++) {
              frame[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_frame__i0__linesize0 = 1;
          frame[_i0].linesize = (int *) malloc(_len_frame__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__linesize0; _j0++) {
            frame[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s00 = 65025;
          int * s0 = (int *) malloc(_len_s00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s00; _i0++) {
            s0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s10 = 65025;
          int * s1 = (int *) malloc(_len_s10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 65025;
          int * s2 = (int *) malloc(_len_s20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s30 = 65025;
          int * s3 = (int *) malloc(_len_s30*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s30; _i0++) {
            s3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pick_pixel1(frame,x,y,s0,s1,s2,s3);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          free(frame);
          free(s0);
          free(s1);
          free(s2);
          free(s3);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int _len_frame0 = 100;
          struct TYPE_3__ * frame = (struct TYPE_3__ *) malloc(_len_frame0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__data0 = 1;
          frame[_i0].data = (int **) malloc(_len_frame__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_frame__i0__data0; _j0++) {
            int _len_frame__i0__data1 = 1;
            frame[_i0].data[_j0] = (int *) malloc(_len_frame__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_frame__i0__data1; _j1++) {
              frame[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_frame__i0__linesize0 = 1;
          frame[_i0].linesize = (int *) malloc(_len_frame__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__linesize0; _j0++) {
            frame[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s00 = 100;
          int * s0 = (int *) malloc(_len_s00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s00; _i0++) {
            s0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s10 = 100;
          int * s1 = (int *) malloc(_len_s10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 100;
          int * s2 = (int *) malloc(_len_s20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s30 = 100;
          int * s3 = (int *) malloc(_len_s30*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s30; _i0++) {
            s3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pick_pixel1(frame,x,y,s0,s1,s2,s3);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(*(frame[_aux].data));
        free(frame[_aux].data);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          free(frame);
          free(s0);
          free(s1);
          free(s2);
          free(s3);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
