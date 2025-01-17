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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u8 ;
typedef  size_t int16_t ;

/* Variables and functions */
 size_t ATH_AIC_MAX_AIC_LIN_TABLE ; 
 size_t ATH_AIC_MAX_COM_ATT_DB_TABLE ; 
 size_t* aic_lin_table ; 
 size_t* com_att_db_table ; 

__attribute__((used)) static int16_t ar9003_aic_find_index(u8 type, int16_t value)
{
	int16_t i = -1;

	if (type == 0) {
		for (i = ATH_AIC_MAX_AIC_LIN_TABLE - 1; i >= 0; i--) {
			if (aic_lin_table[i] >= value)
				break;
		}
	} else if (type == 1) {
		for (i = 0; i < ATH_AIC_MAX_COM_ATT_DB_TABLE; i++) {
			if (com_att_db_table[i] > value) {
				i--;
				break;
			}
		}

		if (i >= ATH_AIC_MAX_COM_ATT_DB_TABLE)
			i = -1;
	}

	return i;
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
          int type = 100;
          unsigned long value = 100;
          unsigned long benchRet = ar9003_aic_find_index(type,value);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          unsigned long value = 255;
          unsigned long benchRet = ar9003_aic_find_index(type,value);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          unsigned long value = 10;
          unsigned long benchRet = ar9003_aic_find_index(type,value);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
