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
typedef  int ME_DIType ;
typedef  int BOOL ;

/* Variables and functions */
 int diParagraph ; 
#define  diParagraphOrEnd 133 
 int diRun ; 
#define  diRunOrParagraph 132 
#define  diRunOrParagraphOrEnd 131 
#define  diRunOrStartRow 130 
 int diStartRow ; 
#define  diStartRowOrParagraph 129 
#define  diStartRowOrParagraphOrEnd 128 
 int diTextEnd ; 

__attribute__((used)) static BOOL ME_DITypesEqual(ME_DIType type, ME_DIType nTypeOrClass)
{
  switch (nTypeOrClass)
  {
    case diRunOrParagraph:
      return type == diRun || type == diParagraph;
    case diRunOrStartRow:
      return type == diRun || type == diStartRow;
    case diParagraphOrEnd:
      return type == diTextEnd || type == diParagraph;
    case diStartRowOrParagraph:
      return type == diStartRow || type == diParagraph;
    case diStartRowOrParagraphOrEnd:
      return type == diStartRow || type == diParagraph || type == diTextEnd;
    case diRunOrParagraphOrEnd:
      return type == diRun || type == diParagraph || type == diTextEnd;
    default:
      return type == nTypeOrClass;
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
          int nTypeOrClass = 255;
          int benchRet = ME_DITypesEqual(type,nTypeOrClass);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
