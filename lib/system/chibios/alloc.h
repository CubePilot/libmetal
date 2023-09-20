/*
 * Copyright (c) 2023, CubePilot Pty. Ltd. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	chibios/alloc.c
 * @brief	chibios libmetal memory allocattion definitions.
 */

#ifndef __METAL_ALLOC__H__
#error "Include metal/alloc.h instead of metal/chibios/alloc.h"
#endif

#ifndef __METAL_CHIBIOS_ALLOC__H__
#define __METAL_CHIBIOS_ALLOC__H__

#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline void *metal_allocate_memory(unsigned int size)
{
	return malloc(size);
}

static inline void metal_free_memory(void *ptr)
{
	free(ptr);
}

#ifdef __cplusplus
}
#endif

#endif /* __METAL_CHIBIOS_ALLOC__H__ */
