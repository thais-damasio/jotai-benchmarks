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
struct apei_exec_context {scalar_t__ var2; int /*<<< orphan*/  var1; } ;
struct acpi_whea_header {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int erst_exec_subtract(struct apei_exec_context *ctx,
			      struct acpi_whea_header *entry)
{
	ctx->var1 -= ctx->var2;
	return 0;
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
          int _len_ctx0 = 1;
          struct apei_exec_context * ctx = (struct apei_exec_context *) malloc(_len_ctx0*sizeof(struct apei_exec_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].var2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].var1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry0 = 1;
          struct acpi_whea_header * entry = (struct acpi_whea_header *) malloc(_len_entry0*sizeof(struct acpi_whea_header));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = erst_exec_subtract(ctx,entry);
          printf("%d\n", benchRet); 
          free(ctx);
          free(entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct apei_exec_context * ctx = (struct apei_exec_context *) malloc(_len_ctx0*sizeof(struct apei_exec_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].var2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].var1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry0 = 65025;
          struct acpi_whea_header * entry = (struct acpi_whea_header *) malloc(_len_entry0*sizeof(struct acpi_whea_header));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = erst_exec_subtract(ctx,entry);
          printf("%d\n", benchRet); 
          free(ctx);
          free(entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct apei_exec_context * ctx = (struct apei_exec_context *) malloc(_len_ctx0*sizeof(struct apei_exec_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].var2 = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].var1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_entry0 = 100;
          struct acpi_whea_header * entry = (struct acpi_whea_header *) malloc(_len_entry0*sizeof(struct acpi_whea_header));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = erst_exec_subtract(ctx,entry);
          printf("%d\n", benchRet); 
          free(ctx);
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
