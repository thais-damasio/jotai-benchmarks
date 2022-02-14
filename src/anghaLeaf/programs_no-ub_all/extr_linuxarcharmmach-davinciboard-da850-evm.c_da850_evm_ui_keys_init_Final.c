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
struct gpio_keys_button {unsigned int gpio; int /*<<< orphan*/  desc; scalar_t__ code; } ;

/* Variables and functions */
 int DA850_EVM_UI_EXP_PB8 ; 
 int DA850_N_UI_PB ; 
 scalar_t__ KEY_F8 ; 
 int /*<<< orphan*/ * da850_evm_ui_exp ; 
 struct gpio_keys_button* da850_evm_ui_keys ; 

__attribute__((used)) static void da850_evm_ui_keys_init(unsigned gpio)
{
	int i;
	struct gpio_keys_button *button;

	for (i = 0; i < DA850_N_UI_PB; i++) {
		button = &da850_evm_ui_keys[i];
		button->code = KEY_F8 - i;
		button->desc = da850_evm_ui_exp[DA850_EVM_UI_EXP_PB8 + i];
		button->gpio = gpio + DA850_EVM_UI_EXP_PB8 + i;
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

    // big-arr
    case 0:
    {
          unsigned int gpio = 255;
          da850_evm_ui_keys_init(gpio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
