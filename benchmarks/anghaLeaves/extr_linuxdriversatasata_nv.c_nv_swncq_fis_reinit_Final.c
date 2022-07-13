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
struct nv_swncq_port_priv {scalar_t__ ncq_flags; scalar_t__ sdbfis_bits; scalar_t__ dmafis_bits; scalar_t__ dhfis_bits; } ;
struct ata_port {struct nv_swncq_port_priv* private_data; } ;

/* Variables and functions */

__attribute__((used)) static void nv_swncq_fis_reinit(struct ata_port *ap)
{
	struct nv_swncq_port_priv *pp = ap->private_data;

	pp->dhfis_bits = 0;
	pp->dmafis_bits = 0;
	pp->sdbfis_bits = 0;
	pp->ncq_flags = 0;
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
          int _len_ap0 = 1;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
              int _len_ap__i0__private_data0 = 1;
          ap[_i0].private_data = (struct nv_swncq_port_priv *) malloc(_len_ap__i0__private_data0*sizeof(struct nv_swncq_port_priv));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data0; _j0++) {
            ap[_i0].private_data->ncq_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->sdbfis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->dmafis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->dhfis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nv_swncq_fis_reinit(ap);
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].private_data);
          }
          free(ap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ap0 = 65025;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
              int _len_ap__i0__private_data0 = 1;
          ap[_i0].private_data = (struct nv_swncq_port_priv *) malloc(_len_ap__i0__private_data0*sizeof(struct nv_swncq_port_priv));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data0; _j0++) {
            ap[_i0].private_data->ncq_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->sdbfis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->dmafis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->dhfis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nv_swncq_fis_reinit(ap);
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].private_data);
          }
          free(ap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ap0 = 100;
          struct ata_port * ap = (struct ata_port *) malloc(_len_ap0*sizeof(struct ata_port));
          for(int _i0 = 0; _i0 < _len_ap0; _i0++) {
              int _len_ap__i0__private_data0 = 1;
          ap[_i0].private_data = (struct nv_swncq_port_priv *) malloc(_len_ap__i0__private_data0*sizeof(struct nv_swncq_port_priv));
          for(int _j0 = 0; _j0 < _len_ap__i0__private_data0; _j0++) {
            ap[_i0].private_data->ncq_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->sdbfis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->dmafis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        ap[_i0].private_data->dhfis_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          nv_swncq_fis_reinit(ap);
          for(int _aux = 0; _aux < _len_ap0; _aux++) {
          free(ap[_aux].private_data);
          }
          free(ap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
