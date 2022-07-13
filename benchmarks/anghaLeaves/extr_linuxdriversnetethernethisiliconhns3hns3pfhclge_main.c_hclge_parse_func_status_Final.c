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
struct hclge_func_status_cmd {int pf_state; } ;
struct hclge_dev {int /*<<< orphan*/  flag; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  HCLGE_FLAG_MAIN ; 
 int HCLGE_PF_STATE_DONE ; 
 int HCLGE_PF_STATE_MAIN ; 

__attribute__((used)) static int hclge_parse_func_status(struct hclge_dev *hdev,
				   struct hclge_func_status_cmd *status)
{
	if (!(status->pf_state & HCLGE_PF_STATE_DONE))
		return -EINVAL;

	/* Set the pf to main pf */
	if (status->pf_state & HCLGE_PF_STATE_MAIN)
		hdev->flag |= HCLGE_FLAG_MAIN;
	else
		hdev->flag &= ~HCLGE_FLAG_MAIN;

	return 0;
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
          int _len_hdev0 = 1;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_status0 = 1;
          struct hclge_func_status_cmd * status = (struct hclge_func_status_cmd *) malloc(_len_status0*sizeof(struct hclge_func_status_cmd));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].pf_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_parse_func_status(hdev,status);
          printf("%d\n", benchRet); 
          free(hdev);
          free(status);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdev0 = 65025;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_status0 = 65025;
          struct hclge_func_status_cmd * status = (struct hclge_func_status_cmd *) malloc(_len_status0*sizeof(struct hclge_func_status_cmd));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].pf_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_parse_func_status(hdev,status);
          printf("%d\n", benchRet); 
          free(hdev);
          free(status);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdev0 = 100;
          struct hclge_dev * hdev = (struct hclge_dev *) malloc(_len_hdev0*sizeof(struct hclge_dev));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_status0 = 100;
          struct hclge_func_status_cmd * status = (struct hclge_func_status_cmd *) malloc(_len_status0*sizeof(struct hclge_func_status_cmd));
          for(int _i0 = 0; _i0 < _len_status0; _i0++) {
            status[_i0].pf_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_parse_func_status(hdev,status);
          printf("%d\n", benchRet); 
          free(hdev);
          free(status);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
