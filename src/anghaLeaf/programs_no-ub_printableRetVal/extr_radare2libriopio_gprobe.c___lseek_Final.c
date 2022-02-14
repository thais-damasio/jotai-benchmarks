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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ut64 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
typedef  TYPE_1__ RIOGprobe ;
typedef  TYPE_2__ RIODesc ;
typedef  int /*<<< orphan*/  RIO ;

/* Variables and functions */
 scalar_t__ GPROBE_SIZE ; 
#define  SEEK_CUR 130 
#define  SEEK_END 129 
#define  SEEK_SET 128 

__attribute__((used)) static ut64 __lseek (RIO *io, RIODesc *fd, ut64 offset, int whence) {
	RIOGprobe *gprobe;
	if (!fd || !fd->data) {
		return offset;
	}
	gprobe = (RIOGprobe *)fd->data;
	switch (whence) {
	case SEEK_SET:
		if (offset >= GPROBE_SIZE) {
			return gprobe->offset = GPROBE_SIZE - 1;
		}
		return gprobe->offset = offset;
	case SEEK_CUR:
		if ((gprobe->offset + offset) >= GPROBE_SIZE) {
			return gprobe->offset = GPROBE_SIZE - 1;
		}
		return gprobe->offset += offset;
	case SEEK_END:
		return gprobe->offset = GPROBE_SIZE - 1;
	}
	return offset;
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
          long offset = 255;
          int whence = 255;
          int _len_io0 = 65025;
          int * io = (int *) malloc(_len_io0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 1;
          struct TYPE_5__ * fd = (struct TYPE_5__ *) malloc(_len_fd0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            fd->data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = __lseek(io,fd,offset,whence);
          printf("%ld\n", benchRet); 
          free(io);
          free(fd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
