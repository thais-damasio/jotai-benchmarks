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
struct superio_struct {scalar_t__ io; } ;
struct parport {scalar_t__ base; } ;

/* Variables and functions */
 int NR_SUPERIOS ; 
 struct superio_struct* superios ; 

__attribute__((used)) static struct superio_struct *find_superio(struct parport *p)
{
	int i;
	for (i = 0; i < NR_SUPERIOS; i++)
		if (superios[i].io == p->base)
			return &superios[i];
	return NULL;
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
          int _len_p0 = 1;
          struct parport * p = (struct parport *) malloc(_len_p0*sizeof(struct parport));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p->base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct superio_struct * benchRet = find_superio(p);
          printf("{{struct}} %p\n", &benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
