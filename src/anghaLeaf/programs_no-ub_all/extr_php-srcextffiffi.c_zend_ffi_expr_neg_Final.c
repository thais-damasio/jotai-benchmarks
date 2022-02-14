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
struct TYPE_3__ {scalar_t__ kind; int /*<<< orphan*/  ch; int /*<<< orphan*/  d; int /*<<< orphan*/  i64; int /*<<< orphan*/  u64; } ;
typedef  TYPE_1__ zend_ffi_val ;

/* Variables and functions */
 scalar_t__ ZEND_FFI_VAL_CHAR ; 
 scalar_t__ ZEND_FFI_VAL_DOUBLE ; 
 scalar_t__ ZEND_FFI_VAL_ERROR ; 
 scalar_t__ ZEND_FFI_VAL_FLOAT ; 
 scalar_t__ ZEND_FFI_VAL_INT32 ; 
 scalar_t__ ZEND_FFI_VAL_INT64 ; 
 scalar_t__ ZEND_FFI_VAL_LONG_DOUBLE ; 
 scalar_t__ ZEND_FFI_VAL_UINT32 ; 
 scalar_t__ ZEND_FFI_VAL_UINT64 ; 

void zend_ffi_expr_neg(zend_ffi_val *val) /* {{{ */
{
	if (val->kind == ZEND_FFI_VAL_UINT32 || val->kind == ZEND_FFI_VAL_UINT64) {
		val->u64 = -val->u64;
	} else if (val->kind == ZEND_FFI_VAL_INT32 || val->kind == ZEND_FFI_VAL_INT64) {
		val->i64 = -val->i64;
	} else if (val->kind == ZEND_FFI_VAL_FLOAT || val->kind == ZEND_FFI_VAL_DOUBLE || val->kind == ZEND_FFI_VAL_LONG_DOUBLE) {
		val->d = -val->d;
	} else if (val->kind == ZEND_FFI_VAL_CHAR) {
		val->ch = -val->ch;
	} else {
		val->kind = ZEND_FFI_VAL_ERROR;
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
          int _len_val0 = 1;
          struct TYPE_3__ * val = (struct TYPE_3__ *) malloc(_len_val0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val->kind = ((-2 * (next_i()%2)) + 1) * next_i();
        val->ch = ((-2 * (next_i()%2)) + 1) * next_i();
        val->d = ((-2 * (next_i()%2)) + 1) * next_i();
        val->i64 = ((-2 * (next_i()%2)) + 1) * next_i();
        val->u64 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zend_ffi_expr_neg(val);
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
