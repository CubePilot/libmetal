/*
 * Copyright (c) 2023, CubePilot Pty. Ltd. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	chibios/sys.h
 * @brief	Chibios system primitives for libmetal.
 */

#ifndef __METAL_SYS__H__
#error "Include metal/sys.h instead of metal/chibios/sys.h"
#endif

#ifndef __METAL_CHIBIOS_SYS__H__
#define __METAL_CHIBIOS_SYS__H__

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

#define METAL_INIT_DEFAULTS				\
{							\
	.log_handler	= metal_chibios_log_handler,	\
	.log_level	= METAL_LOG_INFO,		\
}

#ifndef METAL_MAX_DEVICE_REGIONS
#define METAL_MAX_DEVICE_REGIONS 1
#endif

/** Structure of chibios libmetal runtime state. */
struct metal_state {

	/** Common (system independent) data. */
	struct metal_common_state common;
};

#ifdef __cplusplus
}
#endif

#endif /* __METAL_CHIBIOS_SYS__H__ */
