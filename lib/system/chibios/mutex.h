/*
 * Copyright (c) 2023, CubePilot Pty. Ltd. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	chibios/mutex.h
 * @brief	Chibios mutex primitives for libmetal.
 */

#ifndef __METAL_MUTEX__H__
#error "Include metal/mutex.h instead of metal/chibios/mutex.h"
#endif

#ifndef __METAL_CHIBIOS_MUTEX__H__
#define __METAL_CHIBIOS_MUTEX__H__

#include <ch.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef mutex_t metal_mutex_t;

/*
 * METAL_MUTEX_INIT - used for initializing an mutex element in a static struct
 * or global
 */
#define METAL_MUTEX_INIT(m) MUTEX_DECL(m)
/*
 * METAL_MUTEX_DEFINE - used for defining and initializing a global or
 * static singleton mutex
 */
#define METAL_MUTEX_DEFINE(m) metal_mutex_t m = METAL_MUTEX_INIT(m)

static inline void __metal_mutex_init(metal_mutex_t *mutex)
{
	chMtxObjectInit(mutex);
}

static inline void __metal_mutex_deinit(metal_mutex_t *mutex)
{
	(void)mutex;
}

static inline int __metal_mutex_try_acquire(metal_mutex_t *mutex)
{
	return chMtxTryLock(mutex)? 0 : 1;
}

static inline void __metal_mutex_acquire(metal_mutex_t *mutex)
{
	chMtxLock(mutex);
}

static inline void __metal_mutex_release(metal_mutex_t *mutex)
{
	chMtxUnlock(mutex);
}

static inline int __metal_mutex_is_acquired(metal_mutex_t *mutex)
{
	int ret;
	chSysLock();
	ret = (chMtxGetOwnerI(mutex) == NULL);
	chSysUnlock();
	return ret;
}

#ifdef __cplusplus
}
#endif

#endif /* __METAL_CHIBIOS_MUTEX__H__ */
