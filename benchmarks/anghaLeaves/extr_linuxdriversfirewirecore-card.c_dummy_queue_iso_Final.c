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
struct fw_iso_packet {int dummy; } ;
struct fw_iso_context {int dummy; } ;
struct fw_iso_buffer {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int dummy_queue_iso(struct fw_iso_context *ctx, struct fw_iso_packet *p,
			   struct fw_iso_buffer *buffer, unsigned long payload)
{
	return -ENODEV;
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
          unsigned long payload = 100;
          int _len_ctx0 = 1;
          struct fw_iso_context * ctx = (struct fw_iso_context *) malloc(_len_ctx0*sizeof(struct fw_iso_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct fw_iso_packet * p = (struct fw_iso_packet *) malloc(_len_p0*sizeof(struct fw_iso_packet));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 1;
          struct fw_iso_buffer * buffer = (struct fw_iso_buffer *) malloc(_len_buffer0*sizeof(struct fw_iso_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dummy_queue_iso(ctx,p,buffer,payload);
          printf("%d\n", benchRet); 
          free(ctx);
          free(p);
          free(buffer);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long payload = 255;
          int _len_ctx0 = 65025;
          struct fw_iso_context * ctx = (struct fw_iso_context *) malloc(_len_ctx0*sizeof(struct fw_iso_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 65025;
          struct fw_iso_packet * p = (struct fw_iso_packet *) malloc(_len_p0*sizeof(struct fw_iso_packet));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 65025;
          struct fw_iso_buffer * buffer = (struct fw_iso_buffer *) malloc(_len_buffer0*sizeof(struct fw_iso_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dummy_queue_iso(ctx,p,buffer,payload);
          printf("%d\n", benchRet); 
          free(ctx);
          free(p);
          free(buffer);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long payload = 10;
          int _len_ctx0 = 100;
          struct fw_iso_context * ctx = (struct fw_iso_context *) malloc(_len_ctx0*sizeof(struct fw_iso_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 100;
          struct fw_iso_packet * p = (struct fw_iso_packet *) malloc(_len_p0*sizeof(struct fw_iso_packet));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buffer0 = 100;
          struct fw_iso_buffer * buffer = (struct fw_iso_buffer *) malloc(_len_buffer0*sizeof(struct fw_iso_buffer));
          for(int _i0 = 0; _i0 < _len_buffer0; _i0++) {
            buffer[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dummy_queue_iso(ctx,p,buffer,payload);
          printf("%d\n", benchRet); 
          free(ctx);
          free(p);
          free(buffer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
