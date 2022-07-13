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
struct usb_hub {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb3_lpm_parameters {unsigned int pel; } ;

/* Variables and functions */

__attribute__((used)) static void usb_set_lpm_pel(struct usb_device *udev,
		struct usb3_lpm_parameters *udev_lpm_params,
		unsigned int udev_exit_latency,
		struct usb_hub *hub,
		struct usb3_lpm_parameters *hub_lpm_params,
		unsigned int hub_exit_latency,
		unsigned int port_to_port_exit_latency)
{
	unsigned int first_link_pel;
	unsigned int hub_pel;

	/*
	 * First, the device sends an LFPS to transition the link between the
	 * device and the parent hub into U0.  The exit latency is the bigger of
	 * the device exit latency or the hub exit latency.
	 */
	if (udev_exit_latency > hub_exit_latency)
		first_link_pel = udev_exit_latency * 1000;
	else
		first_link_pel = hub_exit_latency * 1000;

	/*
	 * When the hub starts to receive the LFPS, there is a slight delay for
	 * it to figure out that one of the ports is sending an LFPS.  Then it
	 * will forward the LFPS to its upstream link.  The exit latency is the
	 * delay, plus the PEL that we calculated for this hub.
	 */
	hub_pel = port_to_port_exit_latency * 1000 + hub_lpm_params->pel;

	/*
	 * According to figure C-7 in the USB 3.0 spec, the PEL for this device
	 * is the greater of the two exit latencies.
	 */
	if (first_link_pel > hub_pel)
		udev_lpm_params->pel = first_link_pel;
	else
		udev_lpm_params->pel = hub_pel;
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
          unsigned int udev_exit_latency = 100;
          unsigned int hub_exit_latency = 100;
          unsigned int port_to_port_exit_latency = 100;
          int _len_udev0 = 1;
          struct usb_device * udev = (struct usb_device *) malloc(_len_udev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
            udev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udev_lpm_params0 = 1;
          struct usb3_lpm_parameters * udev_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_udev_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_udev_lpm_params0; _i0++) {
            udev_lpm_params[_i0].pel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hub0 = 1;
          struct usb_hub * hub = (struct usb_hub *) malloc(_len_hub0*sizeof(struct usb_hub));
          for(int _i0 = 0; _i0 < _len_hub0; _i0++) {
            hub[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hub_lpm_params0 = 1;
          struct usb3_lpm_parameters * hub_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_hub_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_hub_lpm_params0; _i0++) {
            hub_lpm_params[_i0].pel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_set_lpm_pel(udev,udev_lpm_params,udev_exit_latency,hub,hub_lpm_params,hub_exit_latency,port_to_port_exit_latency);
          free(udev);
          free(udev_lpm_params);
          free(hub);
          free(hub_lpm_params);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int udev_exit_latency = 255;
          unsigned int hub_exit_latency = 255;
          unsigned int port_to_port_exit_latency = 255;
          int _len_udev0 = 65025;
          struct usb_device * udev = (struct usb_device *) malloc(_len_udev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
            udev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udev_lpm_params0 = 65025;
          struct usb3_lpm_parameters * udev_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_udev_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_udev_lpm_params0; _i0++) {
            udev_lpm_params[_i0].pel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hub0 = 65025;
          struct usb_hub * hub = (struct usb_hub *) malloc(_len_hub0*sizeof(struct usb_hub));
          for(int _i0 = 0; _i0 < _len_hub0; _i0++) {
            hub[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hub_lpm_params0 = 65025;
          struct usb3_lpm_parameters * hub_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_hub_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_hub_lpm_params0; _i0++) {
            hub_lpm_params[_i0].pel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_set_lpm_pel(udev,udev_lpm_params,udev_exit_latency,hub,hub_lpm_params,hub_exit_latency,port_to_port_exit_latency);
          free(udev);
          free(udev_lpm_params);
          free(hub);
          free(hub_lpm_params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int udev_exit_latency = 10;
          unsigned int hub_exit_latency = 10;
          unsigned int port_to_port_exit_latency = 10;
          int _len_udev0 = 100;
          struct usb_device * udev = (struct usb_device *) malloc(_len_udev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
            udev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udev_lpm_params0 = 100;
          struct usb3_lpm_parameters * udev_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_udev_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_udev_lpm_params0; _i0++) {
            udev_lpm_params[_i0].pel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hub0 = 100;
          struct usb_hub * hub = (struct usb_hub *) malloc(_len_hub0*sizeof(struct usb_hub));
          for(int _i0 = 0; _i0 < _len_hub0; _i0++) {
            hub[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hub_lpm_params0 = 100;
          struct usb3_lpm_parameters * hub_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_hub_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_hub_lpm_params0; _i0++) {
            hub_lpm_params[_i0].pel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_set_lpm_pel(udev,udev_lpm_params,udev_exit_latency,hub,hub_lpm_params,hub_exit_latency,port_to_port_exit_latency);
          free(udev);
          free(udev_lpm_params);
          free(hub);
          free(hub_lpm_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
