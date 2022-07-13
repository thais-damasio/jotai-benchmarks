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
struct regmap {int dummy; } ;
struct max77693_dev {struct regmap* regmap; struct regmap* regmap_chg; } ;
typedef  enum max77693_types { ____Placeholder_max77693_types } max77693_types ;

/* Variables and functions */
#define  MAX77843_CHARGER 130 
#define  MAX77843_SAFEOUT1 129 
#define  MAX77843_SAFEOUT2 128 
 int TYPE_MAX77693 ; 

__attribute__((used)) static struct regmap *max77693_get_regmap(enum max77693_types type,
					  struct max77693_dev *max77693,
					  int reg_id)
{
	if (type == TYPE_MAX77693)
		return max77693->regmap;

	/* Else: TYPE_MAX77843 */
	switch (reg_id) {
	case MAX77843_SAFEOUT1:
	case MAX77843_SAFEOUT2:
		return max77693->regmap;
	case MAX77843_CHARGER:
		return max77693->regmap_chg;
	default:
		return max77693->regmap;
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
          enum max77693_types type = 0;
          int reg_id = 100;
          int _len_max776930 = 1;
          struct max77693_dev * max77693 = (struct max77693_dev *) malloc(_len_max776930*sizeof(struct max77693_dev));
          for(int _i0 = 0; _i0 < _len_max776930; _i0++) {
              int _len_max77693__i0__regmap0 = 1;
          max77693[_i0].regmap = (struct regmap *) malloc(_len_max77693__i0__regmap0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_max77693__i0__regmap0; _j0++) {
            max77693[_i0].regmap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max77693__i0__regmap_chg0 = 1;
          max77693[_i0].regmap_chg = (struct regmap *) malloc(_len_max77693__i0__regmap_chg0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_max77693__i0__regmap_chg0; _j0++) {
            max77693[_i0].regmap_chg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct regmap * benchRet = max77693_get_regmap(type,max77693,reg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_max776930; _aux++) {
          free(max77693[_aux].regmap);
          }
          for(int _aux = 0; _aux < _len_max776930; _aux++) {
          free(max77693[_aux].regmap_chg);
          }
          free(max77693);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum max77693_types type = 0;
          int reg_id = 255;
          int _len_max776930 = 65025;
          struct max77693_dev * max77693 = (struct max77693_dev *) malloc(_len_max776930*sizeof(struct max77693_dev));
          for(int _i0 = 0; _i0 < _len_max776930; _i0++) {
              int _len_max77693__i0__regmap0 = 1;
          max77693[_i0].regmap = (struct regmap *) malloc(_len_max77693__i0__regmap0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_max77693__i0__regmap0; _j0++) {
            max77693[_i0].regmap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max77693__i0__regmap_chg0 = 1;
          max77693[_i0].regmap_chg = (struct regmap *) malloc(_len_max77693__i0__regmap_chg0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_max77693__i0__regmap_chg0; _j0++) {
            max77693[_i0].regmap_chg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct regmap * benchRet = max77693_get_regmap(type,max77693,reg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_max776930; _aux++) {
          free(max77693[_aux].regmap);
          }
          for(int _aux = 0; _aux < _len_max776930; _aux++) {
          free(max77693[_aux].regmap_chg);
          }
          free(max77693);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum max77693_types type = 0;
          int reg_id = 10;
          int _len_max776930 = 100;
          struct max77693_dev * max77693 = (struct max77693_dev *) malloc(_len_max776930*sizeof(struct max77693_dev));
          for(int _i0 = 0; _i0 < _len_max776930; _i0++) {
              int _len_max77693__i0__regmap0 = 1;
          max77693[_i0].regmap = (struct regmap *) malloc(_len_max77693__i0__regmap0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_max77693__i0__regmap0; _j0++) {
            max77693[_i0].regmap->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max77693__i0__regmap_chg0 = 1;
          max77693[_i0].regmap_chg = (struct regmap *) malloc(_len_max77693__i0__regmap_chg0*sizeof(struct regmap));
          for(int _j0 = 0; _j0 < _len_max77693__i0__regmap_chg0; _j0++) {
            max77693[_i0].regmap_chg->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct regmap * benchRet = max77693_get_regmap(type,max77693,reg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_max776930; _aux++) {
          free(max77693[_aux].regmap);
          }
          for(int _aux = 0; _aux < _len_max776930; _aux++) {
          free(max77693[_aux].regmap_chg);
          }
          free(max77693);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
