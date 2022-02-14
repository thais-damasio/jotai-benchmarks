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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct TYPE_3__ {size_t flags; } ;
typedef  TYPE_1__ sqlite3_value ;

/* Variables and functions */
 size_t MEM_AffMask ; 
#define  SQLITE_BLOB 132 
#define  SQLITE_FLOAT 131 
#define  SQLITE_INTEGER 130 
#define  SQLITE_NULL 129 
#define  SQLITE_TEXT 128 

int sqlite3_value_type(sqlite3_value* pVal){
  static const u8 aType[] = {
     SQLITE_BLOB,     /* 0x00 */
     SQLITE_NULL,     /* 0x01 */
     SQLITE_TEXT,     /* 0x02 */
     SQLITE_NULL,     /* 0x03 */
     SQLITE_INTEGER,  /* 0x04 */
     SQLITE_NULL,     /* 0x05 */
     SQLITE_INTEGER,  /* 0x06 */
     SQLITE_NULL,     /* 0x07 */
     SQLITE_FLOAT,    /* 0x08 */
     SQLITE_NULL,     /* 0x09 */
     SQLITE_FLOAT,    /* 0x0a */
     SQLITE_NULL,     /* 0x0b */
     SQLITE_INTEGER,  /* 0x0c */
     SQLITE_NULL,     /* 0x0d */
     SQLITE_INTEGER,  /* 0x0e */
     SQLITE_NULL,     /* 0x0f */
     SQLITE_BLOB,     /* 0x10 */
     SQLITE_NULL,     /* 0x11 */
     SQLITE_TEXT,     /* 0x12 */
     SQLITE_NULL,     /* 0x13 */
     SQLITE_INTEGER,  /* 0x14 */
     SQLITE_NULL,     /* 0x15 */
     SQLITE_INTEGER,  /* 0x16 */
     SQLITE_NULL,     /* 0x17 */
     SQLITE_FLOAT,    /* 0x18 */
     SQLITE_NULL,     /* 0x19 */
     SQLITE_FLOAT,    /* 0x1a */
     SQLITE_NULL,     /* 0x1b */
     SQLITE_INTEGER,  /* 0x1c */
     SQLITE_NULL,     /* 0x1d */
     SQLITE_INTEGER,  /* 0x1e */
     SQLITE_NULL,     /* 0x1f */
  };
  return aType[pVal->flags&MEM_AffMask];
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
          int _len_pVal0 = 1;
          struct TYPE_3__ * pVal = (struct TYPE_3__ *) malloc(_len_pVal0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pVal0; _i0++) {
            pVal->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sqlite3_value_type(pVal);
          printf("%d\n", benchRet); 
          free(pVal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}