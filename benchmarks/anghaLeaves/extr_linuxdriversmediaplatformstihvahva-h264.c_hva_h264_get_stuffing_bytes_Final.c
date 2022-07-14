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
typedef  int u32 ;
struct hva_h264_po {int stuffing_bits; } ;
struct hva_h264_task {struct hva_h264_po po; } ;

/* Variables and functions */

__attribute__((used)) static u32 hva_h264_get_stuffing_bytes(struct hva_h264_task *task)
{
	struct hva_h264_po *po = &task->po;

	return po->stuffing_bits >> 3;
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
          int _len_task0 = 1;
          struct hva_h264_task * task = (struct hva_h264_task *) malloc(_len_task0*sizeof(struct hva_h264_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].po.stuffing_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hva_h264_get_stuffing_bytes(task);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_task0 = 65025;
          struct hva_h264_task * task = (struct hva_h264_task *) malloc(_len_task0*sizeof(struct hva_h264_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].po.stuffing_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hva_h264_get_stuffing_bytes(task);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_task0 = 100;
          struct hva_h264_task * task = (struct hva_h264_task *) malloc(_len_task0*sizeof(struct hva_h264_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
            task[_i0].po.stuffing_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hva_h264_get_stuffing_bytes(task);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}