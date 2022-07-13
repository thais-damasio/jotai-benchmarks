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
       1            big-arr-10x\n\
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
struct fchs_s {int dummy; } ;
struct fc_ls_rjt_s {int /*<<< orphan*/  reason_code; } ;
struct fc_els_cmd_s {int els_code; } ;
typedef  enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;

/* Variables and functions */
#define  FC_ELS_ACC 129 
#define  FC_ELS_LS_RJT 128 
 int /*<<< orphan*/  FC_LS_RJT_RSN_LOGICAL_BUSY ; 
 int FC_PARSE_BUSY ; 
 int FC_PARSE_FAILURE ; 
 int FC_PARSE_OK ; 

enum fc_parse_status
fc_els_rsp_parse(struct fchs_s *fchs, int len)
{
	struct fc_els_cmd_s *els_cmd = (struct fc_els_cmd_s *) (fchs + 1);
	struct fc_ls_rjt_s *ls_rjt = (struct fc_ls_rjt_s *) els_cmd;

	len = len;

	switch (els_cmd->els_code) {
	case FC_ELS_LS_RJT:
		if (ls_rjt->reason_code == FC_LS_RJT_RSN_LOGICAL_BUSY)
			return FC_PARSE_BUSY;
		else
			return FC_PARSE_FAILURE;

	case FC_ELS_ACC:
		return FC_PARSE_OK;
	}
	return FC_PARSE_OK;
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
          int len = 255;
          int _len_fchs0 = 65025;
          struct fchs_s * fchs = (struct fchs_s *) malloc(_len_fchs0*sizeof(struct fchs_s));
          for(int _i0 = 0; _i0 < _len_fchs0; _i0++) {
            fchs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum fc_parse_status benchRet = fc_els_rsp_parse(fchs,len);
          printf("{{other_type}} %p\n", &benchRet); 
          free(fchs);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int len = 10;
          int _len_fchs0 = 100;
          struct fchs_s * fchs = (struct fchs_s *) malloc(_len_fchs0*sizeof(struct fchs_s));
          for(int _i0 = 0; _i0 < _len_fchs0; _i0++) {
            fchs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum fc_parse_status benchRet = fc_els_rsp_parse(fchs,len);
          printf("{{other_type}} %p\n", &benchRet); 
          free(fchs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
