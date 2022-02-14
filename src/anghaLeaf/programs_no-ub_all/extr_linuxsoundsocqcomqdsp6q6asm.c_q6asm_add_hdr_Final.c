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
typedef  int uint32_t ;
struct audio_client {int session; } ;
struct apr_hdr {int src_port; int dest_port; int pkt_size; int token; int /*<<< orphan*/  hdr_field; } ;

/* Variables and functions */
 int /*<<< orphan*/  APR_SEQ_CMD_HDR_FIELD ; 

__attribute__((used)) static inline void q6asm_add_hdr(struct audio_client *ac, struct apr_hdr *hdr,
				 uint32_t pkt_size, bool cmd_flg,
				 uint32_t stream_id)
{
	hdr->hdr_field = APR_SEQ_CMD_HDR_FIELD;
	hdr->src_port = ((ac->session << 8) & 0xFF00) | (stream_id);
	hdr->dest_port = ((ac->session << 8) & 0xFF00) | (stream_id);
	hdr->pkt_size = pkt_size;
	if (cmd_flg)
		hdr->token = ac->session;
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
          int pkt_size = 255;
          int cmd_flg = 255;
          int stream_id = 255;
          int _len_ac0 = 1;
          struct audio_client * ac = (struct audio_client *) malloc(_len_ac0*sizeof(struct audio_client));
          for(int _i0 = 0; _i0 < _len_ac0; _i0++) {
            ac->session = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hdr0 = 1;
          struct apr_hdr * hdr = (struct apr_hdr *) malloc(_len_hdr0*sizeof(struct apr_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr->src_port = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->dest_port = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->pkt_size = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->token = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr->hdr_field = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          q6asm_add_hdr(ac,hdr,pkt_size,cmd_flg,stream_id);
          free(ac);
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
