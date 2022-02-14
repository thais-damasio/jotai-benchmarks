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
struct device {int dummy; } ;

/* Variables and functions */
#define  TEGRA20_SPDIF_CH_STA_RX_A 139 
#define  TEGRA20_SPDIF_CH_STA_RX_B 138 
#define  TEGRA20_SPDIF_CH_STA_RX_C 137 
#define  TEGRA20_SPDIF_CH_STA_RX_D 136 
#define  TEGRA20_SPDIF_CH_STA_RX_E 135 
#define  TEGRA20_SPDIF_CH_STA_RX_F 134 
#define  TEGRA20_SPDIF_DATA_FIFO_CSR 133 
#define  TEGRA20_SPDIF_DATA_IN 132 
#define  TEGRA20_SPDIF_DATA_OUT 131 
#define  TEGRA20_SPDIF_STATUS 130 
#define  TEGRA20_SPDIF_USR_DAT_TX_A 129 
#define  TEGRA20_SPDIF_USR_STA_RX_A 128 

__attribute__((used)) static bool tegra20_spdif_volatile_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case TEGRA20_SPDIF_STATUS:
	case TEGRA20_SPDIF_DATA_FIFO_CSR:
	case TEGRA20_SPDIF_DATA_OUT:
	case TEGRA20_SPDIF_DATA_IN:
	case TEGRA20_SPDIF_CH_STA_RX_A:
	case TEGRA20_SPDIF_CH_STA_RX_B:
	case TEGRA20_SPDIF_CH_STA_RX_C:
	case TEGRA20_SPDIF_CH_STA_RX_D:
	case TEGRA20_SPDIF_CH_STA_RX_E:
	case TEGRA20_SPDIF_CH_STA_RX_F:
	case TEGRA20_SPDIF_USR_STA_RX_A:
	case TEGRA20_SPDIF_USR_DAT_TX_A:
		return true;
	default:
		return false;
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
          unsigned int reg = 255;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra20_spdif_volatile_reg(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
