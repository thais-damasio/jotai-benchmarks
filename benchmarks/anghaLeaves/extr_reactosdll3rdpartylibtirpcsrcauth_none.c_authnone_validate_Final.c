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
typedef  int /*<<< orphan*/  u_int ;
struct opaque_auth {int dummy; } ;
typedef  int /*<<< orphan*/  bool_t ;
typedef  int /*<<< orphan*/  AUTH ;

/* Variables and functions */
 int /*<<< orphan*/  TRUE ; 

__attribute__((used)) static bool_t
authnone_validate(AUTH *client, struct opaque_auth *opaque, u_int seq)
{

	return (TRUE);
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
          int seq = 100;
          int _len_client0 = 1;
          int * client = (int *) malloc(_len_client0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opaque0 = 1;
          struct opaque_auth * opaque = (struct opaque_auth *) malloc(_len_opaque0*sizeof(struct opaque_auth));
          for(int _i0 = 0; _i0 < _len_opaque0; _i0++) {
            opaque[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = authnone_validate(client,opaque,seq);
          printf("%d\n", benchRet); 
          free(client);
          free(opaque);
        
        break;
    }
    // big-arr
    case 1:
    {
          int seq = 255;
          int _len_client0 = 65025;
          int * client = (int *) malloc(_len_client0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opaque0 = 65025;
          struct opaque_auth * opaque = (struct opaque_auth *) malloc(_len_opaque0*sizeof(struct opaque_auth));
          for(int _i0 = 0; _i0 < _len_opaque0; _i0++) {
            opaque[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = authnone_validate(client,opaque,seq);
          printf("%d\n", benchRet); 
          free(client);
          free(opaque);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int seq = 10;
          int _len_client0 = 100;
          int * client = (int *) malloc(_len_client0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_client0; _i0++) {
            client[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_opaque0 = 100;
          struct opaque_auth * opaque = (struct opaque_auth *) malloc(_len_opaque0*sizeof(struct opaque_auth));
          for(int _i0 = 0; _i0 < _len_opaque0; _i0++) {
            opaque[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = authnone_validate(client,opaque,seq);
          printf("%d\n", benchRet); 
          free(client);
          free(opaque);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
