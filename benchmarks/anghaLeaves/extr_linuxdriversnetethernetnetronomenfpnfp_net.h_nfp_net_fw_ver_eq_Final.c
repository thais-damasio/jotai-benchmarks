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
typedef  scalar_t__ u8 ;
struct nfp_net_fw_version {scalar_t__ resv; scalar_t__ class; scalar_t__ major; scalar_t__ minor; } ;

/* Variables and functions */

__attribute__((used)) static inline bool nfp_net_fw_ver_eq(struct nfp_net_fw_version *fw_ver,
				     u8 resv, u8 class, u8 major, u8 minor)
{
	return fw_ver->resv == resv &&
	       fw_ver->class == class &&
	       fw_ver->major == major &&
	       fw_ver->minor == minor;
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
          long resv = 100;
          long class = 100;
          long major = 100;
          long minor = 100;
          int _len_fw_ver0 = 1;
          struct nfp_net_fw_version * fw_ver = (struct nfp_net_fw_version *) malloc(_len_fw_ver0*sizeof(struct nfp_net_fw_version));
          for(int _i0 = 0; _i0 < _len_fw_ver0; _i0++) {
            fw_ver[_i0].resv = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].major = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfp_net_fw_ver_eq(fw_ver,resv,class,major,minor);
          printf("%d\n", benchRet); 
          free(fw_ver);
        
        break;
    }
    // big-arr
    case 1:
    {
          long resv = 255;
          long class = 255;
          long major = 255;
          long minor = 255;
          int _len_fw_ver0 = 65025;
          struct nfp_net_fw_version * fw_ver = (struct nfp_net_fw_version *) malloc(_len_fw_ver0*sizeof(struct nfp_net_fw_version));
          for(int _i0 = 0; _i0 < _len_fw_ver0; _i0++) {
            fw_ver[_i0].resv = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].major = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfp_net_fw_ver_eq(fw_ver,resv,class,major,minor);
          printf("%d\n", benchRet); 
          free(fw_ver);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long resv = 10;
          long class = 10;
          long major = 10;
          long minor = 10;
          int _len_fw_ver0 = 100;
          struct nfp_net_fw_version * fw_ver = (struct nfp_net_fw_version *) malloc(_len_fw_ver0*sizeof(struct nfp_net_fw_version));
          for(int _i0 = 0; _i0 < _len_fw_ver0; _i0++) {
            fw_ver[_i0].resv = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].class = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].major = ((-2 * (next_i()%2)) + 1) * next_i();
        fw_ver[_i0].minor = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nfp_net_fw_ver_eq(fw_ver,resv,class,major,minor);
          printf("%d\n", benchRet); 
          free(fw_ver);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
