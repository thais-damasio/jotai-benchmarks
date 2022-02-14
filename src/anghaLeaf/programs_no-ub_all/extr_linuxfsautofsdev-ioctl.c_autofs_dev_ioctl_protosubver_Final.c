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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct file {int dummy; } ;
struct autofs_sb_info {int /*<<< orphan*/  sub_version; } ;
struct TYPE_2__ {int /*<<< orphan*/  sub_version; } ;
struct autofs_dev_ioctl {TYPE_1__ protosubver; } ;

/* Variables and functions */

__attribute__((used)) static int autofs_dev_ioctl_protosubver(struct file *fp,
					struct autofs_sb_info *sbi,
					struct autofs_dev_ioctl *param)
{
	param->protosubver.sub_version = sbi->sub_version;
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

    // big-arr
    case 0:
    {
          int _len_fp0 = 1;
          struct file * fp = (struct file *) malloc(_len_fp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbi0 = 1;
          struct autofs_sb_info * sbi = (struct autofs_sb_info *) malloc(_len_sbi0*sizeof(struct autofs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
            sbi->sub_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_param0 = 1;
          struct autofs_dev_ioctl * param = (struct autofs_dev_ioctl *) malloc(_len_param0*sizeof(struct autofs_dev_ioctl));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param->protosubver.sub_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = autofs_dev_ioctl_protosubver(fp,sbi,param);
          printf("%d\n", benchRet); 
          free(fp);
          free(sbi);
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
