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
typedef  int /*<<< orphan*/  u32 ;
struct tegra_slink_data {int bytes_per_word; } ;
struct spi_transfer {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  SLINK_PACK_SIZE_16 ; 
 int /*<<< orphan*/  SLINK_PACK_SIZE_32 ; 
 int /*<<< orphan*/  SLINK_PACK_SIZE_4 ; 
 int /*<<< orphan*/  SLINK_PACK_SIZE_8 ; 

__attribute__((used)) static u32 tegra_slink_get_packed_size(struct tegra_slink_data *tspi,
				  struct spi_transfer *t)
{
	switch (tspi->bytes_per_word) {
	case 0:
		return SLINK_PACK_SIZE_4;
	case 1:
		return SLINK_PACK_SIZE_8;
	case 2:
		return SLINK_PACK_SIZE_16;
	case 4:
		return SLINK_PACK_SIZE_32;
	default:
		return 0;
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

    // int-bounds
    case 0:
    {
          int _len_tspi0 = 1;
          struct tegra_slink_data * tspi = (struct tegra_slink_data *) malloc(_len_tspi0*sizeof(struct tegra_slink_data));
          for(int _i0 = 0; _i0 < _len_tspi0; _i0++) {
            tspi[_i0].bytes_per_word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 1;
          struct spi_transfer * t = (struct spi_transfer *) malloc(_len_t0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_slink_get_packed_size(tspi,t);
          printf("%d\n", benchRet); 
          free(tspi);
          free(t);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_tspi0 = 65025;
          struct tegra_slink_data * tspi = (struct tegra_slink_data *) malloc(_len_tspi0*sizeof(struct tegra_slink_data));
          for(int _i0 = 0; _i0 < _len_tspi0; _i0++) {
            tspi[_i0].bytes_per_word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 65025;
          struct spi_transfer * t = (struct spi_transfer *) malloc(_len_t0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_slink_get_packed_size(tspi,t);
          printf("%d\n", benchRet); 
          free(tspi);
          free(t);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_tspi0 = 100;
          struct tegra_slink_data * tspi = (struct tegra_slink_data *) malloc(_len_tspi0*sizeof(struct tegra_slink_data));
          for(int _i0 = 0; _i0 < _len_tspi0; _i0++) {
            tspi[_i0].bytes_per_word = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 100;
          struct spi_transfer * t = (struct spi_transfer *) malloc(_len_t0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tegra_slink_get_packed_size(tspi,t);
          printf("%d\n", benchRet); 
          free(tspi);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
