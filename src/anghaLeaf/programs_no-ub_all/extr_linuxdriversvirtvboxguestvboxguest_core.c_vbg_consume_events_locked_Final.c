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
typedef  int u32 ;
struct vbg_session {int dummy; } ;
struct vbg_dev {int pending_events; } ;

/* Variables and functions */

__attribute__((used)) static u32 vbg_consume_events_locked(struct vbg_dev *gdev,
				     struct vbg_session *session,
				     u32 event_mask)
{
	u32 events = gdev->pending_events & event_mask;

	gdev->pending_events &= ~events;
	return events;
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
          int event_mask = 255;
          int _len_gdev0 = 1;
          struct vbg_dev * gdev = (struct vbg_dev *) malloc(_len_gdev0*sizeof(struct vbg_dev));
          for(int _i0 = 0; _i0 < _len_gdev0; _i0++) {
            gdev->pending_events = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_session0 = 1;
          struct vbg_session * session = (struct vbg_session *) malloc(_len_session0*sizeof(struct vbg_session));
          for(int _i0 = 0; _i0 < _len_session0; _i0++) {
            session->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vbg_consume_events_locked(gdev,session,event_mask);
          printf("%d\n", benchRet); 
          free(gdev);
          free(session);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}