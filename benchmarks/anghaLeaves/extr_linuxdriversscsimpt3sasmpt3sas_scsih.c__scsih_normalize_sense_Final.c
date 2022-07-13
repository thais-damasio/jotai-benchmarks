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
       1            big-arr-10x\n\
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
struct sense_info {char skey; char asc; char ascq; } ;

/* Variables and functions */

__attribute__((used)) static void
_scsih_normalize_sense(char *sense_buffer, struct sense_info *data)
{
	if ((sense_buffer[0] & 0x7F) >= 0x72) {
		/* descriptor format */
		data->skey = sense_buffer[1] & 0x0F;
		data->asc = sense_buffer[2];
		data->ascq = sense_buffer[3];
	} else {
		/* fixed format */
		data->skey = sense_buffer[2] & 0x0F;
		data->asc = sense_buffer[12];
		data->ascq = sense_buffer[13];
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
          int _len_sense_buffer0 = 65025;
          char * sense_buffer = (char *) malloc(_len_sense_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_sense_buffer0; _i0++) {
            sense_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          struct sense_info * data = (struct sense_info *) malloc(_len_data0*sizeof(struct sense_info));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].skey = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].asc = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].ascq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _scsih_normalize_sense(sense_buffer,data);
          free(sense_buffer);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_sense_buffer0 = 100;
          char * sense_buffer = (char *) malloc(_len_sense_buffer0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_sense_buffer0; _i0++) {
            sense_buffer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          struct sense_info * data = (struct sense_info *) malloc(_len_data0*sizeof(struct sense_info));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].skey = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].asc = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].ascq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _scsih_normalize_sense(sense_buffer,data);
          free(sense_buffer);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
