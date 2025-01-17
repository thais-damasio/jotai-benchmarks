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
struct smb_vol {int dummy; } ;
struct cifs_ses {int dummy; } ;

/* Variables and functions */
 int ENOSYS ; 

__attribute__((used)) static inline int
cifs_set_cifscreds(struct smb_vol *vol __attribute__((unused)),
		   struct cifs_ses *ses __attribute__((unused)))
{
	return -ENOSYS;
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
          int _len_vol0 = 1;
          struct smb_vol * vol = (struct smb_vol *) malloc(_len_vol0*sizeof(struct smb_vol));
          for(int _i0 = 0; _i0 < _len_vol0; _i0++) {
            vol[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ses0 = 1;
          struct cifs_ses * ses = (struct cifs_ses *) malloc(_len_ses0*sizeof(struct cifs_ses));
          for(int _i0 = 0; _i0 < _len_ses0; _i0++) {
            ses[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cifs_set_cifscreds(vol,ses);
          printf("%d\n", benchRet); 
          free(vol);
          free(ses);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
