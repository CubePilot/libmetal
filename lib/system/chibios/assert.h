/*
 * Copyright (c) 2023, CubePilot Pty. Ltd. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	assert.h
 * @brief	Chibios assertion support.
 */

#ifndef __METAL_ASSERT__H__
#error "Include metal/assert.h instead of metal/chibios/assert.h"
#endif

#ifndef __METAL_CHIBIOS_ASSERT__H__
#define __METAL_CHIBIOS_ASSERT__H__

#include <ch.h>

/**
 * @brief Assertion macro for bare-metal applications.
 * @param cond Condition to evaluate.
 */
#define metal_sys_assert(cond) chDbgCheck(cond)

#endif /* __METAL_CHIBIOS_ASSERT__H__ */

