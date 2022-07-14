// ========================================================================= //

// includes
#include <math.h>
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ vec_t ;
typedef  scalar_t__* vec3_t ;
typedef  int /*<<< orphan*/  qboolean ;
struct TYPE_3__ {scalar_t__ dist; scalar_t__* normal; } ;
typedef  TYPE_1__ plane_t ;

/* Variables and functions */
 float distanceEpsilon ; 
 float normalEpsilon ; 
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 

qboolean PlaneEqual( plane_t *p, vec3_t normal, vec_t dist ){
	float ne, de;


	/* get local copies */
	ne = normalEpsilon;
	de = distanceEpsilon;

	/* compare */
	// We check equality of each component since we're using '<', not '<='
	// (the epsilons may be zero).  We want to use '<' intead of '<=' to be
	// consistent with the true meaning of "epsilon", and also because other
	// parts of the code uses this inequality.
	if ( ( p->dist == dist || fabs( p->dist - dist ) < de ) &&
		 ( p->normal[0] == normal[0] || fabs( p->normal[0] - normal[0] ) < ne ) &&
		 ( p->normal[1] == normal[1] || fabs( p->normal[1] - normal[1] ) < ne ) &&
		 ( p->normal[2] == normal[2] || fabs( p->normal[2] - normal[2] ) < ne ) ) {
		return qtrue;
	}

	/* different */
	return qfalse;
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
          long dist = 100;
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dist = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (long *) malloc(_len_p__i0__normal0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_normal0 = 1;
          long * normal = (long *) malloc(_len_normal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PlaneEqual(p,normal,dist);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].normal);
          }
          free(p);
          free(normal);
        
        break;
    }
    // big-arr
    case 1:
    {
          long dist = 255;
          int _len_p0 = 65025;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dist = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (long *) malloc(_len_p__i0__normal0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_normal0 = 65025;
          long * normal = (long *) malloc(_len_normal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PlaneEqual(p,normal,dist);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].normal);
          }
          free(p);
          free(normal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long dist = 10;
          int _len_p0 = 100;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].dist = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__normal0 = 1;
          p[_i0].normal = (long *) malloc(_len_p__i0__normal0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_p__i0__normal0; _j0++) {
            p[_i0].normal[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_normal0 = 100;
          long * normal = (long *) malloc(_len_normal0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_normal0; _i0++) {
            normal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = PlaneEqual(p,normal,dist);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].normal);
          }
          free(p);
          free(normal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}