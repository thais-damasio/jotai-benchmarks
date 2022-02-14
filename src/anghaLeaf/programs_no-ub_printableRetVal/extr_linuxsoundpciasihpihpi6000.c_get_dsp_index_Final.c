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
typedef  int u16 ;
struct hpi_message {int object; int obj_index; } ;
struct hpi_adapter_obj {int dummy; } ;

/* Variables and functions */
#define  HPI_OBJ_ISTREAM 129 
#define  HPI_OBJ_PROFILE 128 

__attribute__((used)) static u16 get_dsp_index(struct hpi_adapter_obj *pao, struct hpi_message *phm)
{
	u16 ret = 0;
	switch (phm->object) {
	case HPI_OBJ_ISTREAM:
		if (phm->obj_index < 2)
			ret = 1;
		break;
	case HPI_OBJ_PROFILE:
		ret = phm->obj_index;
		break;
	default:
		break;
	}
	return ret;
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
          int _len_pao0 = 1;
          struct hpi_adapter_obj * pao = (struct hpi_adapter_obj *) malloc(_len_pao0*sizeof(struct hpi_adapter_obj));
          for(int _i0 = 0; _i0 < _len_pao0; _i0++) {
            pao->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phm0 = 1;
          struct hpi_message * phm = (struct hpi_message *) malloc(_len_phm0*sizeof(struct hpi_message));
          for(int _i0 = 0; _i0 < _len_phm0; _i0++) {
            phm->object = ((-2 * (next_i()%2)) + 1) * next_i();
        phm->obj_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_dsp_index(pao,phm);
          printf("%d\n", benchRet); 
          free(pao);
          free(phm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
