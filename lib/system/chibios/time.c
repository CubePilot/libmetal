/*
 * Copyright (c) 2023, CubePilot Pty. Ltd. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	chibios/time.c
 * @brief	Chibios libmetal time handling.
 */

#include <metal/time.h>
#include <ch.h>

unsigned long long metal_get_timestamp(void)
{
	/* TODO: Implement timestamp for chibios system */
	return chTimeI2US64(chVTGetSystemTimeX());
}

