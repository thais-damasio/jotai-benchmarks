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
typedef  scalar_t__ u32 ;
struct cudbg_init {scalar_t__ compress_type; scalar_t__ compress_buff_size; scalar_t__ compress_buff; } ;
struct cudbg_buffer {scalar_t__ offset; scalar_t__ size; char* data; } ;

/* Variables and functions */
 scalar_t__ CUDBG_COMPRESSION_NONE ; 
 int CUDBG_STATUS_NO_MEM ; 

int cudbg_get_buff(struct cudbg_init *pdbg_init,
		   struct cudbg_buffer *pdbg_buff, u32 size,
		   struct cudbg_buffer *pin_buff)
{
	u32 offset;

	offset = pdbg_buff->offset;
	if (offset + size > pdbg_buff->size)
		return CUDBG_STATUS_NO_MEM;

	if (pdbg_init->compress_type != CUDBG_COMPRESSION_NONE) {
		if (size > pdbg_init->compress_buff_size)
			return CUDBG_STATUS_NO_MEM;

		pin_buff->data = (char *)pdbg_init->compress_buff;
		pin_buff->offset = 0;
		pin_buff->size = size;
		return 0;
	}

	pin_buff->data = (char *)pdbg_buff->data + offset;
	pin_buff->offset = offset;
	pin_buff->size = size;
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
          long size = 100;
          int _len_pdbg_init0 = 1;
          struct cudbg_init * pdbg_init = (struct cudbg_init *) malloc(_len_pdbg_init0*sizeof(struct cudbg_init));
          for(int _i0 = 0; _i0 < _len_pdbg_init0; _i0++) {
            pdbg_init[_i0].compress_type = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbg_init[_i0].compress_buff_size = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbg_init[_i0].compress_buff = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pdbg_buff0 = 1;
          struct cudbg_buffer * pdbg_buff = (struct cudbg_buffer *) malloc(_len_pdbg_buff0*sizeof(struct cudbg_buffer));
          for(int _i0 = 0; _i0 < _len_pdbg_buff0; _i0++) {
            pdbg_buff[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pdbg_buff[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pdbg_buff__i0__data0 = 1;
          pdbg_buff[_i0].data = (char *) malloc(_len_pdbg_buff__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_pdbg_buff__i0__data0; _j0++) {
            pdbg_buff[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pin_buff0 = 1;
          struct cudbg_buffer * pin_buff = (struct cudbg_buffer *) malloc(_len_pin_buff0*sizeof(struct cudbg_buffer));
          for(int _i0 = 0; _i0 < _len_pin_buff0; _i0++) {
            pin_buff[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
        pin_buff[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pin_buff__i0__data0 = 1;
          pin_buff[_i0].data = (char *) malloc(_len_pin_buff__i0__data0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_pin_buff__i0__data0; _j0++) {
            pin_buff[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cudbg_get_buff(pdbg_init,pdbg_buff,size,pin_buff);
          printf("%d\n", benchRet); 
          free(pdbg_init);
          for(int _aux = 0; _aux < _len_pdbg_buff0; _aux++) {
          free(pdbg_buff[_aux].data);
          }
          free(pdbg_buff);
          for(int _aux = 0; _aux < _len_pin_buff0; _aux++) {
          free(pin_buff[_aux].data);
          }
          free(pin_buff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
