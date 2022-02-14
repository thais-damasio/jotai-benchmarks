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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ dns_udp_max_response_bytes; scalar_t__ dns_tcp_max_response_bytes; scalar_t__ workers_max_idle_percent; scalar_t__ workers_max_recent_idle_percent; scalar_t__ workers_recent_idle_percent; scalar_t__ workers_average_idle_percent; scalar_t__ refused_by_remote_ip_queries; scalar_t__ rcode_refused_queries; scalar_t__ rcode_not_implemented_queries; scalar_t__ rcode_name_error_queries; scalar_t__ rcode_server_failure_queries; scalar_t__ rcode_format_queries; scalar_t__ rcode_no_error_queries; scalar_t__ dns_tcp_connections; scalar_t__ dns_truncated_responses; scalar_t__ dns_tcp_response_bytes; scalar_t__ dns_tcp_query_bytes; scalar_t__ dns_tcp_skipped_long_queries; scalar_t__ dns_tcp_bad_parse_queries; scalar_t__ dns_tcp_bad_act_queries; scalar_t__ dns_tcp_queries; scalar_t__ dns_udp_response_bytes; scalar_t__ dns_udp_query_bytes; scalar_t__ dns_udp_skipped_long_queries; scalar_t__ dns_udp_bad_parse_queries; scalar_t__ dns_udp_bad_act_queries; scalar_t__ dns_udp_queries; } ;
typedef  TYPE_1__ worker_stats_t ;

/* Variables and functions */

void update_stats (worker_stats_t *Sum, worker_stats_t *W) {
#define ADD(x) Sum->x += W->x
#define MAX(x) if (Sum->x < W->x) Sum->x = W->x
  ADD(dns_udp_queries);
  ADD(dns_udp_bad_act_queries);
  ADD(dns_udp_bad_parse_queries);
  ADD(dns_udp_skipped_long_queries);
  ADD(dns_udp_query_bytes);
  ADD(dns_udp_response_bytes);
  ADD(dns_tcp_queries);
  ADD(dns_tcp_bad_act_queries);
  ADD(dns_tcp_bad_parse_queries);
  ADD(dns_tcp_skipped_long_queries);
  ADD(dns_tcp_query_bytes);
  ADD(dns_tcp_response_bytes);
  ADD(dns_truncated_responses);
  MAX(dns_udp_max_response_bytes);
  MAX(dns_tcp_max_response_bytes);
  ADD(dns_tcp_connections);

  ADD(rcode_no_error_queries);
  ADD(rcode_format_queries);
  ADD(rcode_server_failure_queries);
  ADD(rcode_name_error_queries);
  ADD(rcode_not_implemented_queries);
  ADD(rcode_refused_queries);
  ADD(refused_by_remote_ip_queries);

  ADD(workers_average_idle_percent);
  ADD(workers_recent_idle_percent);
  MAX(workers_max_idle_percent);
  MAX(workers_max_recent_idle_percent);

#undef ADD
#undef MAX
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
          int _len_Sum0 = 1;
          struct TYPE_4__ * Sum = (struct TYPE_4__ *) malloc(_len_Sum0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_Sum0; _i0++) {
            Sum->dns_udp_max_response_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_tcp_max_response_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->workers_max_idle_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->workers_max_recent_idle_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->workers_recent_idle_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->workers_average_idle_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->refused_by_remote_ip_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->rcode_refused_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->rcode_not_implemented_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->rcode_name_error_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->rcode_server_failure_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->rcode_format_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->rcode_no_error_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_tcp_connections = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_truncated_responses = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_tcp_response_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_tcp_query_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_tcp_skipped_long_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_tcp_bad_parse_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_tcp_bad_act_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_tcp_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_udp_response_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_udp_query_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_udp_skipped_long_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_udp_bad_parse_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_udp_bad_act_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        Sum->dns_udp_queries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_W0 = 1;
          struct TYPE_4__ * W = (struct TYPE_4__ *) malloc(_len_W0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_W0; _i0++) {
            W->dns_udp_max_response_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_tcp_max_response_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W->workers_max_idle_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        W->workers_max_recent_idle_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        W->workers_recent_idle_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        W->workers_average_idle_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        W->refused_by_remote_ip_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->rcode_refused_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->rcode_not_implemented_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->rcode_name_error_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->rcode_server_failure_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->rcode_format_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->rcode_no_error_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_tcp_connections = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_truncated_responses = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_tcp_response_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_tcp_query_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_tcp_skipped_long_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_tcp_bad_parse_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_tcp_bad_act_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_tcp_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_udp_response_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_udp_query_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_udp_skipped_long_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_udp_bad_parse_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_udp_bad_act_queries = ((-2 * (next_i()%2)) + 1) * next_i();
        W->dns_udp_queries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_stats(Sum,W);
          free(Sum);
          free(W);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
