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
struct pf_addr {int dummy; } ;
typedef  int sa_family_t ;

/* Variables and functions */

int
pf_match_addr_range(struct pf_addr *b, struct pf_addr *e,
    struct pf_addr *a, sa_family_t af)
{
	switch (af) {
#if INET
	case AF_INET:
		if ((a->addr32[0] < b->addr32[0]) ||
		    (a->addr32[0] > e->addr32[0]))
			return (0);
		break;
#endif /* INET */
#if INET6
	case AF_INET6: {
		int	i;

		/* check a >= b */
		for (i = 0; i < 4; ++i)
			if (a->addr32[i] > b->addr32[i])
				break;
			else if (a->addr32[i] < b->addr32[i])
				return (0);
		/* check a <= e */
		for (i = 0; i < 4; ++i)
			if (a->addr32[i] < e->addr32[i])
				break;
			else if (a->addr32[i] > e->addr32[i])
				return (0);
		break;
	}
#endif /* INET6 */
	}
	return (1);
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
          int af = 100;
          int _len_b0 = 1;
          struct pf_addr * b = (struct pf_addr *) malloc(_len_b0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_e0 = 1;
          struct pf_addr * e = (struct pf_addr *) malloc(_len_e0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 1;
          struct pf_addr * a = (struct pf_addr *) malloc(_len_a0*sizeof(struct pf_addr));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pf_match_addr_range(b,e,a,af);
          printf("%d\n", benchRet); 
          free(b);
          free(e);
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
