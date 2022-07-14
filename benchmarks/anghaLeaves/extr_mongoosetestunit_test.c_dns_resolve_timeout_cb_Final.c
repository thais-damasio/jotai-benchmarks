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
struct mg_dns_message {int dummy; } ;
typedef  enum mg_resolve_err { ____Placeholder_mg_resolve_err } mg_resolve_err ;

/* Variables and functions */

__attribute__((used)) static void dns_resolve_timeout_cb(struct mg_dns_message *msg, void *data,
                                   enum mg_resolve_err e) {
  (void) e;
  if (msg == NULL) {
    *(int *) data = 1;
  }
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
          enum mg_resolve_err e = 0;
          int _len_msg0 = 1;
          struct mg_dns_message * msg = (struct mg_dns_message *) malloc(_len_msg0*sizeof(struct mg_dns_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          dns_resolve_timeout_cb(msg,data,e);
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mg_resolve_err e = 0;
          int _len_msg0 = 65025;
          struct mg_dns_message * msg = (struct mg_dns_message *) malloc(_len_msg0*sizeof(struct mg_dns_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          dns_resolve_timeout_cb(msg,data,e);
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mg_resolve_err e = 0;
          int _len_msg0 = 100;
          struct mg_dns_message * msg = (struct mg_dns_message *) malloc(_len_msg0*sizeof(struct mg_dns_message));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          dns_resolve_timeout_cb(msg,data,e);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}