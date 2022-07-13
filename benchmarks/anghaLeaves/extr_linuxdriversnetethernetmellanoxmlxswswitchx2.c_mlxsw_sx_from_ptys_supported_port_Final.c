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
typedef  int u32 ;

/* Variables and functions */
 int MLXSW_REG_PTYS_ETH_SPEED_1000BASE_KX ; 
 int MLXSW_REG_PTYS_ETH_SPEED_100GBASE_KR4 ; 
 int MLXSW_REG_PTYS_ETH_SPEED_100GBASE_SR4 ; 
 int MLXSW_REG_PTYS_ETH_SPEED_10GBASE_CR ; 
 int MLXSW_REG_PTYS_ETH_SPEED_10GBASE_KR ; 
 int MLXSW_REG_PTYS_ETH_SPEED_10GBASE_KX4 ; 
 int MLXSW_REG_PTYS_ETH_SPEED_10GBASE_SR ; 
 int MLXSW_REG_PTYS_ETH_SPEED_40GBASE_CR4 ; 
 int MLXSW_REG_PTYS_ETH_SPEED_40GBASE_KR4 ; 
 int MLXSW_REG_PTYS_ETH_SPEED_40GBASE_SR4 ; 
 int MLXSW_REG_PTYS_ETH_SPEED_SGMII ; 
 int SUPPORTED_Backplane ; 
 int SUPPORTED_FIBRE ; 

__attribute__((used)) static u32 mlxsw_sx_from_ptys_supported_port(u32 ptys_eth_proto)
{
	if (ptys_eth_proto & (MLXSW_REG_PTYS_ETH_SPEED_10GBASE_CR |
			      MLXSW_REG_PTYS_ETH_SPEED_10GBASE_SR |
			      MLXSW_REG_PTYS_ETH_SPEED_40GBASE_CR4 |
			      MLXSW_REG_PTYS_ETH_SPEED_40GBASE_SR4 |
			      MLXSW_REG_PTYS_ETH_SPEED_100GBASE_SR4 |
			      MLXSW_REG_PTYS_ETH_SPEED_SGMII))
		return SUPPORTED_FIBRE;

	if (ptys_eth_proto & (MLXSW_REG_PTYS_ETH_SPEED_10GBASE_KR |
			      MLXSW_REG_PTYS_ETH_SPEED_10GBASE_KX4 |
			      MLXSW_REG_PTYS_ETH_SPEED_40GBASE_KR4 |
			      MLXSW_REG_PTYS_ETH_SPEED_100GBASE_KR4 |
			      MLXSW_REG_PTYS_ETH_SPEED_1000BASE_KX))
		return SUPPORTED_Backplane;
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
          int ptys_eth_proto = 100;
          int benchRet = mlxsw_sx_from_ptys_supported_port(ptys_eth_proto);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ptys_eth_proto = 255;
          int benchRet = mlxsw_sx_from_ptys_supported_port(ptys_eth_proto);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ptys_eth_proto = 10;
          int benchRet = mlxsw_sx_from_ptys_supported_port(ptys_eth_proto);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
