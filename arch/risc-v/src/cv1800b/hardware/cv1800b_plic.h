/****************************************************************************
 * arch/risc-v/src/cv1800b/hardware/cv1800b_plic.h
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

#ifndef __ARCH_RISCV_SRC_CV1800B_HARDWARE_CV1800B_PLIC_H
#define __ARCH_RISCV_SRC_CV1800B_HARDWARE_CV1800B_PLIC_H

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define CV1800B_PLIC_PRIORITY    (CV1800B_PLIC_BASE + 0x000000)
#define CV1800B_PLIC_IP0         (CV1800B_PLIC_BASE + 0x001000)
#define CV1800B_PLIC_IP1         (CV1800B_PLIC_BASE + 0x001004)
#define CV1800B_PLIC_MIE0        (CV1800B_PLIC_BASE + 0x002000)
#define CV1800B_PLIC_MIE1        (CV1800B_PLIC_BASE + 0x002004)
#define CV1800B_PLIC_SIE0        (CV1800B_PLIC_BASE + 0x002080)
#define CV1800B_PLIC_SIE1        (CV1800B_PLIC_BASE + 0x002084)
#define CV1800B_PLIC_CTRL        (CV1800B_PLIC_BASE + 0x1FFFFC)
#define CV1800B_PLIC_MTHRESHOLD  (CV1800B_PLIC_BASE + 0x200000)
#define CV1800B_PLIC_MCLAIM      (CV1800B_PLIC_BASE + 0x200004)
#define CV1800B_PLIC_STHRESHOLD  (CV1800B_PLIC_BASE + 0x201000)
#define CV1800B_PLIC_SCLAIM      (CV1800B_PLIC_BASE + 0x201004)

#endif /* __ARCH_RISCV_SRC_CV1800B_HARDWARE_CV1800B_PLIC_H */
