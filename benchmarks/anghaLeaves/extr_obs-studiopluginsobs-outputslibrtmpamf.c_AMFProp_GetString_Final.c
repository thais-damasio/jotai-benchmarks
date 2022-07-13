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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  p_aval; } ;
struct TYPE_5__ {scalar_t__ p_type; TYPE_1__ p_vu; } ;
typedef  int /*<<< orphan*/  AVal ;
typedef  TYPE_2__ AMFObjectProperty ;

/* Variables and functions */
 scalar_t__ AMF_STRING ; 
 int /*<<< orphan*/  AV_empty ; 

void
AMFProp_GetString(AMFObjectProperty *prop, AVal *str)
{
    if (prop->p_type == AMF_STRING)
        *str = prop->p_vu.p_aval;
    else
        *str = AV_empty;
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
          int _len_prop0 = 1;
          struct TYPE_5__ * prop = (struct TYPE_5__ *) malloc(_len_prop0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
            prop[_i0].p_type = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].p_vu.p_aval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 1;
          int * str = (int *) malloc(_len_str0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AMFProp_GetString(prop,str);
          free(prop);
          free(str);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_prop0 = 65025;
          struct TYPE_5__ * prop = (struct TYPE_5__ *) malloc(_len_prop0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
            prop[_i0].p_type = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].p_vu.p_aval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 65025;
          int * str = (int *) malloc(_len_str0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AMFProp_GetString(prop,str);
          free(prop);
          free(str);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_prop0 = 100;
          struct TYPE_5__ * prop = (struct TYPE_5__ *) malloc(_len_prop0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_prop0; _i0++) {
            prop[_i0].p_type = ((-2 * (next_i()%2)) + 1) * next_i();
        prop[_i0].p_vu.p_aval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_str0 = 100;
          int * str = (int *) malloc(_len_str0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AMFProp_GetString(prop,str);
          free(prop);
          free(str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
