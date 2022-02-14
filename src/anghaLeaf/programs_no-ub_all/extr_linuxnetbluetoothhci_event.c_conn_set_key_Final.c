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
typedef  int u8 ;
struct hci_conn {int pin_length; int key_type; void* pending_sec_level; } ;

/* Variables and functions */
 void* BT_SECURITY_FIPS ; 
 void* BT_SECURITY_HIGH ; 
 void* BT_SECURITY_MEDIUM ; 
#define  HCI_LK_AUTH_COMBINATION_P192 135 
#define  HCI_LK_AUTH_COMBINATION_P256 134 
 int HCI_LK_CHANGED_COMBINATION ; 
#define  HCI_LK_COMBINATION 133 
#define  HCI_LK_DEBUG_COMBINATION 132 
#define  HCI_LK_LOCAL_UNIT 131 
#define  HCI_LK_REMOTE_UNIT 130 
#define  HCI_LK_UNAUTH_COMBINATION_P192 129 
#define  HCI_LK_UNAUTH_COMBINATION_P256 128 

__attribute__((used)) static void conn_set_key(struct hci_conn *conn, u8 key_type, u8 pin_len)
{
	if (key_type == HCI_LK_CHANGED_COMBINATION)
		return;

	conn->pin_length = pin_len;
	conn->key_type = key_type;

	switch (key_type) {
	case HCI_LK_LOCAL_UNIT:
	case HCI_LK_REMOTE_UNIT:
	case HCI_LK_DEBUG_COMBINATION:
		return;
	case HCI_LK_COMBINATION:
		if (pin_len == 16)
			conn->pending_sec_level = BT_SECURITY_HIGH;
		else
			conn->pending_sec_level = BT_SECURITY_MEDIUM;
		break;
	case HCI_LK_UNAUTH_COMBINATION_P192:
	case HCI_LK_UNAUTH_COMBINATION_P256:
		conn->pending_sec_level = BT_SECURITY_MEDIUM;
		break;
	case HCI_LK_AUTH_COMBINATION_P192:
		conn->pending_sec_level = BT_SECURITY_HIGH;
		break;
	case HCI_LK_AUTH_COMBINATION_P256:
		conn->pending_sec_level = BT_SECURITY_FIPS;
		break;
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
          int key_type = 255;
          int pin_len = 255;
          int _len_conn0 = 1;
          struct hci_conn * conn = (struct hci_conn *) malloc(_len_conn0*sizeof(struct hci_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
            conn->pin_length = ((-2 * (next_i()%2)) + 1) * next_i();
        conn->key_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          conn_set_key(conn,key_type,pin_len);
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
