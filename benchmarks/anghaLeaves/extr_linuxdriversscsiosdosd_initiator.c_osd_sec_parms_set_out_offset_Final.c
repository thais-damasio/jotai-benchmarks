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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {void* data_out_integrity_check_offset; } ;
struct TYPE_3__ {void* data_out_integrity_check_offset; } ;
struct osd_security_parameters {TYPE_2__ v2; TYPE_1__ v1; } ;
typedef  void* osd_cdb_offset ;

/* Variables and functions */

__attribute__((used)) static inline void osd_sec_parms_set_out_offset(bool is_v1,
	struct osd_security_parameters *sec_parms, osd_cdb_offset offset)
{
	if (is_v1)
		sec_parms->v1.data_out_integrity_check_offset = offset;
	else
		sec_parms->v2.data_out_integrity_check_offset = offset;
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
          int is_v1 = 100;
          int _len_sec_parms0 = 1;
          struct osd_security_parameters * sec_parms = (struct osd_security_parameters *) malloc(_len_sec_parms0*sizeof(struct osd_security_parameters));
          for(int _i0 = 0; _i0 < _len_sec_parms0; _i0++) {
              }
          void * offset;
          osd_sec_parms_set_out_offset(is_v1,sec_parms,offset);
          free(sec_parms);
        
        break;
    }
    // big-arr
    case 1:
    {
          int is_v1 = 255;
          int _len_sec_parms0 = 65025;
          struct osd_security_parameters * sec_parms = (struct osd_security_parameters *) malloc(_len_sec_parms0*sizeof(struct osd_security_parameters));
          for(int _i0 = 0; _i0 < _len_sec_parms0; _i0++) {
              }
          void * offset;
          osd_sec_parms_set_out_offset(is_v1,sec_parms,offset);
          free(sec_parms);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int is_v1 = 10;
          int _len_sec_parms0 = 100;
          struct osd_security_parameters * sec_parms = (struct osd_security_parameters *) malloc(_len_sec_parms0*sizeof(struct osd_security_parameters));
          for(int _i0 = 0; _i0 < _len_sec_parms0; _i0++) {
              }
          void * offset;
          osd_sec_parms_set_out_offset(is_v1,sec_parms,offset);
          free(sec_parms);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
