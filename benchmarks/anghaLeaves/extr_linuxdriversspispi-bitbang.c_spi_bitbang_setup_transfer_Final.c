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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
typedef  int u8 ;
typedef  int u32 ;
struct spi_transfer {int bits_per_word; int speed_hz; } ;
struct spi_device {int bits_per_word; int max_speed_hz; struct spi_bitbang_cs* controller_state; } ;
struct spi_bitbang_cs {int nsecs; int /*<<< orphan*/  txrx_bufs; } ;

/* Variables and functions */
 int EINVAL ; 
 int MAX_UDELAY_MS ; 
 int /*<<< orphan*/  bitbang_txrx_16 ; 
 int /*<<< orphan*/  bitbang_txrx_32 ; 
 int /*<<< orphan*/  bitbang_txrx_8 ; 

int spi_bitbang_setup_transfer(struct spi_device *spi, struct spi_transfer *t)
{
	struct spi_bitbang_cs	*cs = spi->controller_state;
	u8			bits_per_word;
	u32			hz;

	if (t) {
		bits_per_word = t->bits_per_word;
		hz = t->speed_hz;
	} else {
		bits_per_word = 0;
		hz = 0;
	}

	/* spi_transfer level calls that work per-word */
	if (!bits_per_word)
		bits_per_word = spi->bits_per_word;
	if (bits_per_word <= 8)
		cs->txrx_bufs = bitbang_txrx_8;
	else if (bits_per_word <= 16)
		cs->txrx_bufs = bitbang_txrx_16;
	else if (bits_per_word <= 32)
		cs->txrx_bufs = bitbang_txrx_32;
	else
		return -EINVAL;

	/* nsecs = (clock period)/2 */
	if (!hz)
		hz = spi->max_speed_hz;
	if (hz) {
		cs->nsecs = (1000000000/2) / hz;
		if (cs->nsecs > (MAX_UDELAY_MS * 1000 * 1000))
			return -EINVAL;
	}

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
          int _len_spi0 = 1;
          struct spi_device * spi = (struct spi_device *) malloc(_len_spi0*sizeof(struct spi_device));
          for(int _i0 = 0; _i0 < _len_spi0; _i0++) {
            spi[_i0].bits_per_word = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].max_speed_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_spi__i0__controller_state0 = 1;
          spi[_i0].controller_state = (struct spi_bitbang_cs *) malloc(_len_spi__i0__controller_state0*sizeof(struct spi_bitbang_cs));
          for(int _j0 = 0; _j0 < _len_spi__i0__controller_state0; _j0++) {
            spi[_i0].controller_state->nsecs = ((-2 * (next_i()%2)) + 1) * next_i();
        spi[_i0].controller_state->txrx_bufs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_t0 = 1;
          struct spi_transfer * t = (struct spi_transfer *) malloc(_len_t0*sizeof(struct spi_transfer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].bits_per_word = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].speed_hz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = spi_bitbang_setup_transfer(spi,t);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_spi0; _aux++) {
          free(spi[_aux].controller_state);
          }
          free(spi);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
