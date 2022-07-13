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
struct notifier_block {int dummy; } ;

/* Variables and functions */
 int NOTIFY_DONE ; 

__attribute__((used)) static int lasat_panic_display(struct notifier_block *this,
			     unsigned long event, void *ptr)
{
#ifdef CONFIG_PICVUE
	unsigned char *string = ptr;
	if (string == NULL)
		string = "Kernel Panic";
	pvc_dump_string(string);
#endif
	return NOTIFY_DONE;
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
          unsigned long event = 100;
          int _len_this0 = 1;
          struct notifier_block * this = (struct notifier_block *) malloc(_len_this0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ptr;
          int benchRet = lasat_panic_display(this,event,ptr);
          printf("%d\n", benchRet); 
          free(this);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long event = 255;
          int _len_this0 = 65025;
          struct notifier_block * this = (struct notifier_block *) malloc(_len_this0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ptr;
          int benchRet = lasat_panic_display(this,event,ptr);
          printf("%d\n", benchRet); 
          free(this);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long event = 10;
          int _len_this0 = 100;
          struct notifier_block * this = (struct notifier_block *) malloc(_len_this0*sizeof(struct notifier_block));
          for(int _i0 = 0; _i0 < _len_this0; _i0++) {
            this[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ptr;
          int benchRet = lasat_panic_display(this,event,ptr);
          printf("%d\n", benchRet); 
          free(this);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
