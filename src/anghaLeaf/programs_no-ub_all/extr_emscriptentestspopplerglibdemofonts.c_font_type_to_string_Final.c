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
typedef  char gchar ;
typedef  int PopplerFontType ;

/* Variables and functions */
#define  POPPLER_FONT_TYPE_CID_TYPE0 134 
#define  POPPLER_FONT_TYPE_CID_TYPE0C 133 
#define  POPPLER_FONT_TYPE_CID_TYPE2 132 
#define  POPPLER_FONT_TYPE_TRUETYPE 131 
#define  POPPLER_FONT_TYPE_TYPE1 130 
#define  POPPLER_FONT_TYPE_TYPE1C 129 
#define  POPPLER_FONT_TYPE_TYPE3 128 

__attribute__((used)) static const gchar *
font_type_to_string (PopplerFontType type)
{
	switch (type) {
	case POPPLER_FONT_TYPE_TYPE1:
		return "Type 1";
	case POPPLER_FONT_TYPE_TYPE1C:
		return "Type 1C";
	case POPPLER_FONT_TYPE_TYPE3:
		return "Type 3";
	case POPPLER_FONT_TYPE_TRUETYPE:
		return "TrueType";
	case POPPLER_FONT_TYPE_CID_TYPE0:
		return "Type 1 (CID)";
	case POPPLER_FONT_TYPE_CID_TYPE0C:
		return "Type 1C (CID)";
	case POPPLER_FONT_TYPE_CID_TYPE2:
		return "TrueType (CID)";
	default:
		return "Unknown font type";
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
          int type = 255;
          const char * benchRet = font_type_to_string(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
