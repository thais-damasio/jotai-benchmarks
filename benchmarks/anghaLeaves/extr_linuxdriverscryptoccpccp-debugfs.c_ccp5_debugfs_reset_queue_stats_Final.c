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
struct ccp_cmd_queue {long total_ops; long total_aes_ops; long total_xts_aes_ops; long total_3des_ops; long total_sha_ops; long total_rsa_ops; long total_pt_ops; long total_ecc_ops; } ;

/* Variables and functions */

__attribute__((used)) static void ccp5_debugfs_reset_queue_stats(struct ccp_cmd_queue *cmd_q)
{
	cmd_q->total_ops = 0L;
	cmd_q->total_aes_ops = 0L;
	cmd_q->total_xts_aes_ops = 0L;
	cmd_q->total_3des_ops = 0L;
	cmd_q->total_sha_ops = 0L;
	cmd_q->total_rsa_ops = 0L;
	cmd_q->total_pt_ops = 0L;
	cmd_q->total_ecc_ops = 0L;
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
          int _len_cmd_q0 = 1;
          struct ccp_cmd_queue * cmd_q = (struct ccp_cmd_queue *) malloc(_len_cmd_q0*sizeof(struct ccp_cmd_queue));
          for(int _i0 = 0; _i0 < _len_cmd_q0; _i0++) {
            cmd_q[_i0].total_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_aes_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_xts_aes_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_3des_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_sha_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_rsa_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_pt_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_ecc_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccp5_debugfs_reset_queue_stats(cmd_q);
          free(cmd_q);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cmd_q0 = 65025;
          struct ccp_cmd_queue * cmd_q = (struct ccp_cmd_queue *) malloc(_len_cmd_q0*sizeof(struct ccp_cmd_queue));
          for(int _i0 = 0; _i0 < _len_cmd_q0; _i0++) {
            cmd_q[_i0].total_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_aes_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_xts_aes_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_3des_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_sha_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_rsa_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_pt_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_ecc_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccp5_debugfs_reset_queue_stats(cmd_q);
          free(cmd_q);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cmd_q0 = 100;
          struct ccp_cmd_queue * cmd_q = (struct ccp_cmd_queue *) malloc(_len_cmd_q0*sizeof(struct ccp_cmd_queue));
          for(int _i0 = 0; _i0 < _len_cmd_q0; _i0++) {
            cmd_q[_i0].total_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_aes_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_xts_aes_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_3des_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_sha_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_rsa_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_pt_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd_q[_i0].total_ecc_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccp5_debugfs_reset_queue_stats(cmd_q);
          free(cmd_q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
