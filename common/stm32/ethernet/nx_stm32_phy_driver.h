/***************************************************************************
 * Copyright (c) 2024 Microsoft Corporation 
 * 
 * This program and the accompanying materials are made available under the
 * terms of the MIT License which is available at
 * https://opensource.org/licenses/MIT.
 * 
 * SPDX-License-Identifier: MIT
 **************************************************************************/

#ifndef NX_STM32_PHY_DRIVER_H
#define NX_STM32_PHY_DRIVER_H

#ifdef   __cplusplus
extern   "C" {
#endif
#include <stdint.h>


#define  ETH_PHY_STATUS_ERROR                 ((int32_t)-1)
#define  ETH_PHY_STATUS_OK                    ((int32_t) 0)

#define  ETH_PHY_STATUS_LINK_ERROR            ((int32_t) 0)
#define  ETH_PHY_STATUS_LINK_DOWN             ((int32_t) 1)

#define  ETH_PHY_STATUS_100MBITS_FULLDUPLEX   ((int32_t) 2)
#define  ETH_PHY_STATUS_100MBITS_HALFDUPLEX   ((int32_t) 3)
#define  ETH_PHY_STATUS_10MBITS_FULLDUPLEX    ((int32_t) 4)
#define  ETH_PHY_STATUS_10MBITS_HALFDUPLEX    ((int32_t) 5)
#define  ETH_PHY_STATUS_AUTONEGO_NOT_DONE     ((int32_t) 6)
#if defined(ETH_PHY_1000MBITS_SUPPORTED)
#define  ETH_PHY_STATUS_1000MBITS_FULLDUPLEX  ((int32_t) 7)
#define  ETH_PHY_STATUS_1000MBITS_HALFDUPLEX  ((int32_t) 8)
#endif

typedef void * 	nx_eth_phy_handle_t;

int32_t nx_eth_phy_init(void);

int32_t nx_eth_phy_get_link_state(void);

int32_t nx_eth_phy_set_link_state(int32_t linkstate);

nx_eth_phy_handle_t nx_eth_phy_get_handle(void);

#ifdef   __cplusplus
}
#endif
#endif
