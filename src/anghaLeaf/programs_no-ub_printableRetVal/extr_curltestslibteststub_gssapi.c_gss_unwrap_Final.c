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
typedef  int /*<<< orphan*/  gss_qop_t ;
typedef  int /*<<< orphan*/  gss_const_ctx_id_t ;
typedef  int /*<<< orphan*/  gss_buffer_t ;
typedef  int /*<<< orphan*/  OM_uint32 ;

/* Variables and functions */
 int /*<<< orphan*/  GSS_S_FAILURE ; 

OM_uint32 gss_unwrap(OM_uint32 *min,
                     gss_const_ctx_id_t context_handle,
                     const gss_buffer_t input_message_buffer,
                     gss_buffer_t output_message_buffer,
                     int *conf_state,
                     gss_qop_t *qop_state)
{
  (void)min;
  (void)context_handle;
  (void)input_message_buffer;
  (void)output_message_buffer;
  (void)conf_state;
  (void)qop_state;
  return GSS_S_FAILURE;
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
          int context_handle = 255;
          const int input_message_buffer = 255;
          int output_message_buffer = 255;
          int _len_min0 = 65025;
          int * min = (int *) malloc(_len_min0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conf_state0 = 65025;
          int * conf_state = (int *) malloc(_len_conf_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_conf_state0; _i0++) {
            conf_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qop_state0 = 65025;
          int * qop_state = (int *) malloc(_len_qop_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_qop_state0; _i0++) {
            qop_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gss_unwrap(min,context_handle,input_message_buffer,output_message_buffer,conf_state,qop_state);
          printf("%d\n", benchRet); 
          free(min);
          free(conf_state);
          free(qop_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}