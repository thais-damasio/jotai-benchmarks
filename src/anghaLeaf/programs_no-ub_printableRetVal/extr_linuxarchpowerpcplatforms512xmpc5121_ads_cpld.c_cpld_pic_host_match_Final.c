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
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef  enum irq_domain_bus_token { ____Placeholder_irq_domain_bus_token } irq_domain_bus_token ;

/* Variables and functions */
 struct device_node* cpld_pic_node ; 

__attribute__((used)) static int
cpld_pic_host_match(struct irq_domain *h, struct device_node *node,
		    enum irq_domain_bus_token bus_token)
{
	return cpld_pic_node == node;
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
          enum irq_domain_bus_token bus_token = 0;
          int _len_h0 = 1;
          struct irq_domain * h = (struct irq_domain *) malloc(_len_h0*sizeof(struct irq_domain));
          for(int _i0 = 0; _i0 < _len_h0; _i0++) {
            h->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 1;
          struct device_node * node = (struct device_node *) malloc(_len_node0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cpld_pic_host_match(h,node,bus_token);
          printf("%d\n", benchRet); 
          free(h);
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
