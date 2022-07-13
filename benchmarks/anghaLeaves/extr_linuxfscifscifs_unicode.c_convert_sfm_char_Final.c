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
typedef  int __u16 ;

/* Variables and functions */
#define  SFM_ASTERISK 136 
#define  SFM_COLON 135 
#define  SFM_DOUBLEQUOTE 134 
#define  SFM_GRTRTHAN 133 
#define  SFM_LESSTHAN 132 
#define  SFM_PERIOD 131 
#define  SFM_PIPE 130 
#define  SFM_QUESTION 129 
#define  SFM_SPACE 128 

__attribute__((used)) static bool
convert_sfm_char(const __u16 src_char, char *target)
{
	if (src_char >= 0xF001 && src_char <= 0xF01F) {
		*target = src_char - 0xF000;
		return true;
	}
	switch (src_char) {
	case SFM_COLON:
		*target = ':';
		break;
	case SFM_DOUBLEQUOTE:
		*target = '"';
		break;
	case SFM_ASTERISK:
		*target = '*';
		break;
	case SFM_QUESTION:
		*target = '?';
		break;
	case SFM_PIPE:
		*target = '|';
		break;
	case SFM_GRTRTHAN:
		*target = '>';
		break;
	case SFM_LESSTHAN:
		*target = '<';
		break;
	case SFM_SPACE:
		*target = ' ';
		break;
	case SFM_PERIOD:
		*target = '.';
		break;
	default:
		return false;
	}
	return true;
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
          const int src_char = 100;
          int _len_target0 = 1;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_sfm_char(src_char,target);
          printf("%d\n", benchRet); 
          free(target);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int src_char = 255;
          int _len_target0 = 65025;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_sfm_char(src_char,target);
          printf("%d\n", benchRet); 
          free(target);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int src_char = 10;
          int _len_target0 = 100;
          char * target = (char *) malloc(_len_target0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_sfm_char(src_char,target);
          printf("%d\n", benchRet); 
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
