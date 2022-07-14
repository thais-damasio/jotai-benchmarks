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
struct xdr_stream {void* end; scalar_t__ p; struct xdr_buf* buf; } ;
struct xdr_buf {int len; int buflen; } ;

/* Variables and functions */

int xdr_restrict_buflen(struct xdr_stream *xdr, int newbuflen)
{
	struct xdr_buf *buf = xdr->buf;
	int left_in_this_buf = (void *)xdr->end - (void *)xdr->p;
	int end_offset = buf->len + left_in_this_buf;

	if (newbuflen < 0 || newbuflen < buf->len)
		return -1;
	if (newbuflen > buf->buflen)
		return 0;
	if (newbuflen < end_offset)
		xdr->end = (void *)xdr->end + newbuflen - end_offset;
	buf->buflen = newbuflen;
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
          int newbuflen = 100;
          int _len_xdr0 = 1;
          struct xdr_stream * xdr = (struct xdr_stream *) malloc(_len_xdr0*sizeof(struct xdr_stream));
          for(int _i0 = 0; _i0 < _len_xdr0; _i0++) {
            xdr[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xdr__i0__buf0 = 1;
          xdr[_i0].buf = (struct xdr_buf *) malloc(_len_xdr__i0__buf0*sizeof(struct xdr_buf));
          for(int _j0 = 0; _j0 < _len_xdr__i0__buf0; _j0++) {
            xdr[_i0].buf->len = ((-2 * (next_i()%2)) + 1) * next_i();
        xdr[_i0].buf->buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xdr_restrict_buflen(xdr,newbuflen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(xdr[_aux].buf);
          }
          free(xdr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int newbuflen = 10;
          int _len_xdr0 = 100;
          struct xdr_stream * xdr = (struct xdr_stream *) malloc(_len_xdr0*sizeof(struct xdr_stream));
          for(int _i0 = 0; _i0 < _len_xdr0; _i0++) {
            xdr[_i0].p = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_xdr__i0__buf0 = 1;
          xdr[_i0].buf = (struct xdr_buf *) malloc(_len_xdr__i0__buf0*sizeof(struct xdr_buf));
          for(int _j0 = 0; _j0 < _len_xdr__i0__buf0; _j0++) {
            xdr[_i0].buf->len = ((-2 * (next_i()%2)) + 1) * next_i();
        xdr[_i0].buf->buflen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xdr_restrict_buflen(xdr,newbuflen);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xdr0; _aux++) {
          free(xdr[_aux].buf);
          }
          free(xdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}