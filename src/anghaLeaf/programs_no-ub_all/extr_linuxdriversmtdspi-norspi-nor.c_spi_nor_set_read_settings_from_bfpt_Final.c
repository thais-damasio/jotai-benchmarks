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
typedef  int u16 ;
struct spi_nor_read_command {int num_mode_clocks; int num_wait_states; int opcode; int proto; } ;
typedef  enum spi_nor_protocol { ____Placeholder_spi_nor_protocol } spi_nor_protocol ;

/* Variables and functions */

__attribute__((used)) static inline void
spi_nor_set_read_settings_from_bfpt(struct spi_nor_read_command *read,
				    u16 half,
				    enum spi_nor_protocol proto)
{
	read->num_mode_clocks = (half >> 5) & 0x07;
	read->num_wait_states = (half >> 0) & 0x1f;
	read->opcode = (half >> 8) & 0xff;
	read->proto = proto;
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
          int half = 255;
          enum spi_nor_protocol proto = 0;
          int _len_read0 = 1;
          struct spi_nor_read_command * read = (struct spi_nor_read_command *) malloc(_len_read0*sizeof(struct spi_nor_read_command));
          for(int _i0 = 0; _i0 < _len_read0; _i0++) {
            read->num_mode_clocks = ((-2 * (next_i()%2)) + 1) * next_i();
        read->num_wait_states = ((-2 * (next_i()%2)) + 1) * next_i();
        read->opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        read->proto = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          spi_nor_set_read_settings_from_bfpt(read,half,proto);
          free(read);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
