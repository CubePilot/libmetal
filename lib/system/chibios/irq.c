/*
 * Copyright (c) 2023, CubePilot Pty. Ltd. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	chibios/irq.c
 * @brief	chibios libmetal irq definitions.
 */

#include <metal/errno.h>
#include <metal/irq.h>
#include <metal/sys.h>
#include <metal/log.h>
#include <metal/mutex.h>
#include <metal/list.h>
#include <metal/utilities.h>
#include <metal/alloc.h>
#include <ch.h>

unsigned int metal_irq_save_disable(void)
{
	return chSysGetStatusAndLockX();
}

void metal_irq_restore_enable(unsigned int flags)
{
	chSysRestoreStatusX(flags);
}
