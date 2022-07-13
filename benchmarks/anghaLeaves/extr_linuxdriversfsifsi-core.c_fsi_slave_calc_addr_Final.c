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
typedef  int uint8_t ;
typedef  int uint32_t ;
struct fsi_slave {int size; scalar_t__ id; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int fsi_slave_calc_addr(struct fsi_slave *slave, uint32_t *addrp,
		uint8_t *idp)
{
	uint32_t addr = *addrp;
	uint8_t id = *idp;

	if (addr > slave->size)
		return -EINVAL;

	/* For 23 bit addressing, we encode the extra two bits in the slave
	 * id (and the slave's actual ID needs to be 0).
	 */
	if (addr > 0x1fffff) {
		if (slave->id != 0)
			return -EINVAL;
		id = (addr >> 21) & 0x3;
		addr &= 0x1fffff;
	}

	*addrp = addr;
	*idp = id;
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
          int _len_slave0 = 1;
          struct fsi_slave * slave = (struct fsi_slave *) malloc(_len_slave0*sizeof(struct fsi_slave));
          for(int _i0 = 0; _i0 < _len_slave0; _i0++) {
            slave[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addrp0 = 1;
          int * addrp = (int *) malloc(_len_addrp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addrp0; _i0++) {
            addrp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_idp0 = 1;
          int * idp = (int *) malloc(_len_idp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idp0; _i0++) {
            idp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsi_slave_calc_addr(slave,addrp,idp);
          printf("%d\n", benchRet); 
          free(slave);
          free(addrp);
          free(idp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_slave0 = 65025;
          struct fsi_slave * slave = (struct fsi_slave *) malloc(_len_slave0*sizeof(struct fsi_slave));
          for(int _i0 = 0; _i0 < _len_slave0; _i0++) {
            slave[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addrp0 = 65025;
          int * addrp = (int *) malloc(_len_addrp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addrp0; _i0++) {
            addrp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_idp0 = 65025;
          int * idp = (int *) malloc(_len_idp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idp0; _i0++) {
            idp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsi_slave_calc_addr(slave,addrp,idp);
          printf("%d\n", benchRet); 
          free(slave);
          free(addrp);
          free(idp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_slave0 = 100;
          struct fsi_slave * slave = (struct fsi_slave *) malloc(_len_slave0*sizeof(struct fsi_slave));
          for(int _i0 = 0; _i0 < _len_slave0; _i0++) {
            slave[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        slave[_i0].id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_addrp0 = 100;
          int * addrp = (int *) malloc(_len_addrp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_addrp0; _i0++) {
            addrp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_idp0 = 100;
          int * idp = (int *) malloc(_len_idp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_idp0; _i0++) {
            idp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsi_slave_calc_addr(slave,addrp,idp);
          printf("%d\n", benchRet); 
          free(slave);
          free(addrp);
          free(idp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
