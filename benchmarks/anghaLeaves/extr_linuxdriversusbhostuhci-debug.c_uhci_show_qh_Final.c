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
struct uhci_qh {int dummy; } ;
struct uhci_hcd {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int uhci_show_qh(struct uhci_hcd *uhci,
		struct uhci_qh *qh, char *buf, int len, int space)
{
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
          int len = 100;
          int space = 100;
          int _len_uhci0 = 1;
          struct uhci_hcd * uhci = (struct uhci_hcd *) malloc(_len_uhci0*sizeof(struct uhci_hcd));
          for(int _i0 = 0; _i0 < _len_uhci0; _i0++) {
            uhci[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qh0 = 1;
          struct uhci_qh * qh = (struct uhci_qh *) malloc(_len_qh0*sizeof(struct uhci_qh));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
            qh[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf0 = 1;
          char * buf = (char *) malloc(_len_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uhci_show_qh(uhci,qh,buf,len,space);
          printf("%d\n", benchRet); 
          free(uhci);
          free(qh);
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
