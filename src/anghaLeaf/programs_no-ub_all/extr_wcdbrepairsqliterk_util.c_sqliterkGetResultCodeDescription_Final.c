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

/* Variables and functions */
#define  SQLITERK_CANTOPEN 135 
#define  SQLITERK_DAMAGED 134 
#define  SQLITERK_DISCARD 133 
#define  SQLITERK_IOERR 132 
#define  SQLITERK_MISUSE 131 
#define  SQLITERK_NOMEM 130 
#define  SQLITERK_OK 129 
#define  SQLITERK_SHORT_READ 128 

const char *sqliterkGetResultCodeDescription(int result)
{
    switch (result) {
        case SQLITERK_OK:
            return "SQLITERK_OK";
        case SQLITERK_CANTOPEN:
            return "SQLITERK_CANTOPEN";
        case SQLITERK_MISUSE:
            return "SQLITERK_MISUSE";
        case SQLITERK_IOERR:
            return "SQLITERK_IOERR";
        case SQLITERK_NOMEM:
            return "SQLITERK_NOMEM";
        case SQLITERK_SHORT_READ:
            return "SQLITERK_SHORT_READ";
        case SQLITERK_DAMAGED:
            return "SQLITERK_DAMAGED";
        case SQLITERK_DISCARD:
            return "SQLITERK_DISCARD";
        default:
            break;
    }
    return "SQLITERK_UNKNOWN";
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
          int result = 255;
          const char * benchRet = sqliterkGetResultCodeDescription(result);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
