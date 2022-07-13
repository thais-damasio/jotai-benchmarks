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
struct nd_cmd_get_config_size {int /*<<< orphan*/  max_xfer; int /*<<< orphan*/  config_size; scalar_t__ status; } ;

/* Variables and functions */
 int EINVAL ; 
 int /*<<< orphan*/  LABEL_SIZE ; 
 int /*<<< orphan*/  SZ_4K ; 

__attribute__((used)) static int nfit_test_cmd_get_config_size(struct nd_cmd_get_config_size *nd_cmd,
		unsigned int buf_len)
{
	if (buf_len < sizeof(*nd_cmd))
		return -EINVAL;

	nd_cmd->status = 0;
	nd_cmd->config_size = LABEL_SIZE;
	nd_cmd->max_xfer = SZ_4K;

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
          unsigned int buf_len = 100;
          int _len_nd_cmd0 = 1;
          struct nd_cmd_get_config_size * nd_cmd = (struct nd_cmd_get_config_size *) malloc(_len_nd_cmd0*sizeof(struct nd_cmd_get_config_size));
          for(int _i0 = 0; _i0 < _len_nd_cmd0; _i0++) {
            nd_cmd[_i0].max_xfer = ((-2 * (next_i()%2)) + 1) * next_i();
        nd_cmd[_i0].config_size = ((-2 * (next_i()%2)) + 1) * next_i();
        nd_cmd[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfit_test_cmd_get_config_size(nd_cmd,buf_len);
          printf("%d\n", benchRet); 
          free(nd_cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int buf_len = 255;
          int _len_nd_cmd0 = 65025;
          struct nd_cmd_get_config_size * nd_cmd = (struct nd_cmd_get_config_size *) malloc(_len_nd_cmd0*sizeof(struct nd_cmd_get_config_size));
          for(int _i0 = 0; _i0 < _len_nd_cmd0; _i0++) {
            nd_cmd[_i0].max_xfer = ((-2 * (next_i()%2)) + 1) * next_i();
        nd_cmd[_i0].config_size = ((-2 * (next_i()%2)) + 1) * next_i();
        nd_cmd[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfit_test_cmd_get_config_size(nd_cmd,buf_len);
          printf("%d\n", benchRet); 
          free(nd_cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int buf_len = 10;
          int _len_nd_cmd0 = 100;
          struct nd_cmd_get_config_size * nd_cmd = (struct nd_cmd_get_config_size *) malloc(_len_nd_cmd0*sizeof(struct nd_cmd_get_config_size));
          for(int _i0 = 0; _i0 < _len_nd_cmd0; _i0++) {
            nd_cmd[_i0].max_xfer = ((-2 * (next_i()%2)) + 1) * next_i();
        nd_cmd[_i0].config_size = ((-2 * (next_i()%2)) + 1) * next_i();
        nd_cmd[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfit_test_cmd_get_config_size(nd_cmd,buf_len);
          printf("%d\n", benchRet); 
          free(nd_cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
