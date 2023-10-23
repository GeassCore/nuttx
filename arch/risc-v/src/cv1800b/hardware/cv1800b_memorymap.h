/****************************************************************************
 * arch/risc-v/src/cv1800b/hardware/cv1800b_memorymap.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_RISCV_SRC_CV1800B_HARDWARE_CV1800B_MEMORYMAP_H
#define __ARCH_RISCV_SRC_CV1800B_HARDWARE_CV1800B_MEMORYMAP_H

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register Base Address ****************************************************/

#define CV1800B_PLIC_BASE    (0x70000000ULL)
#define CV1800B_CLINT_BASE   (0x74000000ULL)
//#define CV1800B_CORET_BASE   (CV1800B_PLIC_BASE + 0x4000000UL)

#define CV1800B_UART0_BASE   0x04140000UL

#endif /* __ARCH_RISCV_SRC_CV1800B_HARDWARE_CV1800B_MEMORYMAP_H */
