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
struct sh_fsi_port_info {int flags; } ;
struct fsi_priv {int spdif; int clk_cpg; int enable_stream; } ;

/* Variables and functions */
 int SH_FSI_CLK_CPG ; 
 int SH_FSI_ENABLE_STREAM_MODE ; 
 int SH_FSI_FMT_SPDIF ; 

__attribute__((used)) static void fsi_port_info_init(struct fsi_priv *fsi,
			       struct sh_fsi_port_info *info)
{
	if (info->flags & SH_FSI_FMT_SPDIF)
		fsi->spdif = 1;

	if (info->flags & SH_FSI_CLK_CPG)
		fsi->clk_cpg = 1;

	if (info->flags & SH_FSI_ENABLE_STREAM_MODE)
		fsi->enable_stream = 1;
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
          int _len_fsi0 = 1;
          struct fsi_priv * fsi = (struct fsi_priv *) malloc(_len_fsi0*sizeof(struct fsi_priv));
          for(int _i0 = 0; _i0 < _len_fsi0; _i0++) {
            fsi->spdif = ((-2 * (next_i()%2)) + 1) * next_i();
        fsi->clk_cpg = ((-2 * (next_i()%2)) + 1) * next_i();
        fsi->enable_stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct sh_fsi_port_info * info = (struct sh_fsi_port_info *) malloc(_len_info0*sizeof(struct sh_fsi_port_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fsi_port_info_init(fsi,info);
          free(fsi);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}