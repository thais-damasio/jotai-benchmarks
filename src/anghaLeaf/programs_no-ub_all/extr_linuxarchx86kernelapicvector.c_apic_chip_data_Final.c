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
struct irq_data {struct apic_chip_data* chip_data; struct irq_data* parent_data; } ;
struct apic_chip_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct apic_chip_data *apic_chip_data(struct irq_data *irqd)
{
	if (!irqd)
		return NULL;

	while (irqd->parent_data)
		irqd = irqd->parent_data;

	return irqd->chip_data;
}


// ------------------------------------------------------------------------- //

struct irq_data *_allocate_irqd(int length) {
  struct irq_data *head = (struct irq_data *)malloc(sizeof(struct irq_data));

  head->chip_data = rand();
  head->parent_data = NULL;

  struct irq_data *walker = head;
  for(int i = 1; i < length; i++) {
    walker->parent_data = (struct irq_data *)malloc(sizeof(struct irq_data));
    walker = walker->parent_data;
    walker->chip_data = rand();
    walker->parent_data = NULL;
  }

  return head;
}

void _delete_irqd(struct irq_data * head) {
  if(head->parent_data != NULL) _delete_irqd(head->parent_data);
  free(head);
}




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
          struct irq_data * irqd = _allocate_irqd(1);
          struct apic_chip_data * benchRet = apic_chip_data(irqd);
          printf("{{struct}} %p\n", &benchRet); 
          _delete_irqd(irqd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
