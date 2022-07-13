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
struct zpci_report_error_header {int version; scalar_t__ action; int length; } ;
struct err_notify_sccb {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int PAGE_SIZE ; 
 scalar_t__ SCLP_ERRNOTIFY_AQ_INFO_LOG ; 
 scalar_t__ SCLP_ERRNOTIFY_AQ_REPAIR ; 

__attribute__((used)) static int sclp_pci_check_report(struct zpci_report_error_header *report)
{
	if (report->version != 1)
		return -EINVAL;

	if (report->action != SCLP_ERRNOTIFY_AQ_REPAIR &&
	    report->action != SCLP_ERRNOTIFY_AQ_INFO_LOG)
		return -EINVAL;

	if (report->length > (PAGE_SIZE - sizeof(struct err_notify_sccb)))
		return -EINVAL;

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
          int _len_report0 = 1;
          struct zpci_report_error_header * report = (struct zpci_report_error_header *) malloc(_len_report0*sizeof(struct zpci_report_error_header));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sclp_pci_check_report(report);
          printf("%d\n", benchRet); 
          free(report);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_report0 = 65025;
          struct zpci_report_error_header * report = (struct zpci_report_error_header *) malloc(_len_report0*sizeof(struct zpci_report_error_header));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sclp_pci_check_report(report);
          printf("%d\n", benchRet); 
          free(report);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_report0 = 100;
          struct zpci_report_error_header * report = (struct zpci_report_error_header *) malloc(_len_report0*sizeof(struct zpci_report_error_header));
          for(int _i0 = 0; _i0 < _len_report0; _i0++) {
            report[_i0].version = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].action = ((-2 * (next_i()%2)) + 1) * next_i();
        report[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sclp_pci_check_report(report);
          printf("%d\n", benchRet); 
          free(report);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
