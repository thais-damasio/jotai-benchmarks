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
typedef  int /*<<< orphan*/  u16 ;
struct gb_operation_msg_hdr {int /*<<< orphan*/ * pad; } ;

/* Variables and functions */

__attribute__((used)) static void
gb_message_cport_pack(struct gb_operation_msg_hdr *header, u16 cport_id)
{
	header->pad[0] = cport_id;
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
          int cport_id = 100;
          int _len_header0 = 1;
          struct gb_operation_msg_hdr * header = (struct gb_operation_msg_hdr *) malloc(_len_header0*sizeof(struct gb_operation_msg_hdr));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
              int _len_header__i0__pad0 = 1;
          header[_i0].pad = (int *) malloc(_len_header__i0__pad0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_header__i0__pad0; _j0++) {
            header[_i0].pad[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gb_message_cport_pack(header,cport_id);
          for(int _aux = 0; _aux < _len_header0; _aux++) {
          free(header[_aux].pad);
          }
          free(header);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cport_id = 255;
          int _len_header0 = 65025;
          struct gb_operation_msg_hdr * header = (struct gb_operation_msg_hdr *) malloc(_len_header0*sizeof(struct gb_operation_msg_hdr));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
              int _len_header__i0__pad0 = 1;
          header[_i0].pad = (int *) malloc(_len_header__i0__pad0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_header__i0__pad0; _j0++) {
            header[_i0].pad[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gb_message_cport_pack(header,cport_id);
          for(int _aux = 0; _aux < _len_header0; _aux++) {
          free(header[_aux].pad);
          }
          free(header);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cport_id = 10;
          int _len_header0 = 100;
          struct gb_operation_msg_hdr * header = (struct gb_operation_msg_hdr *) malloc(_len_header0*sizeof(struct gb_operation_msg_hdr));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
              int _len_header__i0__pad0 = 1;
          header[_i0].pad = (int *) malloc(_len_header__i0__pad0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_header__i0__pad0; _j0++) {
            header[_i0].pad[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gb_message_cport_pack(header,cport_id);
          for(int _aux = 0; _aux < _len_header0; _aux++) {
          free(header[_aux].pad);
          }
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
