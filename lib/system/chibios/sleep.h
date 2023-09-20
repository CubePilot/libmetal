/*
 * Copyright (c) 2023, CubePilot Pty. Ltd. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	chibios/sleep.h
 * @brief	Chibios sleep primitives for libmetal.
 */

#ifndef __METAL_SLEEP__H__
#error "Include metal/sleep.h instead of metal/chibios/sleep.h"
#endif

#ifndef __METAL_CHIBIOS_SLEEP__H__
#define __METAL_CHIBIOS_SLEEP__H__

#include <ch.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline int __metal_sleep_usec(unsigned int usec)
{
	chThdSleepMicroseconds(usec);
	return 0;
}

#ifdef __cplusplus
}
#endif

#endif /* __METAL_CHIBIOS_SLEEP__H__ */
