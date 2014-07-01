/* Copyright 2014 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/** \addtogroup mem Memory allocation
 * @{
 */

/**
 * Allocator interface
 */
#ifndef JERRY_MEM_ALLOCATOR_H
#define JERRY_MEM_ALLOCATOR_H

#include "defs.h"
#include "mem_heap.h"

/**
 * Logarithm of required alignment for allocated units/blocks
 */
#define MEM_ALIGNMENT_LOG   2

/**
 * Required alignment for allocated units/blocks
 */
#define MEM_ALIGNMENT       (1 << MEM_ALIGNMENT_LOG)

extern void mem_Init(void);
uintptr_t mem_GetBasePointer(void);

#endif /* !JERRY_MEM_ALLOCATOR_H */

/**
 * @}
 */