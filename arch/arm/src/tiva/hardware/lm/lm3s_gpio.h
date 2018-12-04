/************************************************************************************
 * arch/arm/src/tiva/hardware/lm/lm3s_gpio.h
 *
 *   Copyright (C) 2009-2010, 2013 Gregory Nutt. All rights reserved.
 *   Authors: Gregory Nutt <gnutt@nuttx.org>
 *            Jose Pablo Carballo <jcarballo@nx-engineering.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_TIVA_HARDWARE_LM_LM3S_GPIO_H
#define __ARCH_ARM_SRC_TIVA_HARDWARE_LM_LM3S_GPIO_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/
/* REVISIT:  Why do we not use the AHB aperture for all GPIO accesses? */

#define TIVA_GPIOK_BASE             TIVA_GPIOKAHB_BASE
#define TIVA_GPIOL_BASE             TIVA_GPIOLAHB_BASE
#define TIVA_GPIOM_BASE             TIVA_GPIOMAHB_BASE
#define TIVA_GPION_BASE             TIVA_GPIONAHB_BASE
#define TIVA_GPIOP_BASE             TIVA_GPIOPAHB_BASE
#define TIVA_GPIOQ_BASE             TIVA_GPIOQAHB_BASE
#define TIVA_GPIOR_BASE             TIVA_GPIORAHB_BASE
#define TIVA_GPIOS_BASE             TIVA_GPIOSAHB_BASE
#define TIVA_GPIOT_BASE             TIVA_GPIOTAHB_BASE

/* GPIO Register Offsets ************************************************************/

#define TIVA_GPIO_DATA_OFFSET       0x0000 /* GPIO Data */
#define TIVA_GPIO_DIR_OFFSET        0x0400 /* GPIO Direction */
#define TIVA_GPIO_IS_OFFSET         0x0404 /* GPIO Interrupt Sense */
#define TIVA_GPIO_IBE_OFFSET        0x0408 /* GPIO Interrupt Both Edges */
#define TIVA_GPIO_IEV_OFFSET        0x040c /* GPIO Interrupt Event */
#define TIVA_GPIO_IM_OFFSET         0x0410 /* GPIO Interrupt Mask */
#define TIVA_GPIO_RIS_OFFSET        0x0414 /* GPIO Raw Interrupt Status */
#define TIVA_GPIO_MIS_OFFSET        0x0418 /* GPIO Masked Interrupt Status */
#define TIVA_GPIO_ICR_OFFSET        0x041c /* GPIO Interrupt Clear */
#define TIVA_GPIO_AFSEL_OFFSET      0x0420 /* GPIO Alternate Function */
#define TIVA_GPIO_DR2R_OFFSET       0x0500 /* Select GPIO 2-mA Drive Select */
#define TIVA_GPIO_DR4R_OFFSET       0x0504 /* GPIO 4-mA Drive Select */
#define TIVA_GPIO_DR8R_OFFSET       0x0508 /* GPIO 8-mA Drive Select */
#define TIVA_GPIO_ODR_OFFSET        0x050c /* GPIO Open Drain Select */
#define TIVA_GPIO_PUR_OFFSET        0x0510 /* GPIO Pull-Up Select */
#define TIVA_GPIO_PDR_OFFSET        0x0514 /* GPIO Pull-Down Select */
#define TIVA_GPIO_SLR_OFFSET        0x0518 /* GPIO Slew Rate Control Select */
#define TIVA_GPIO_DEN_OFFSET        0x051c /* GPIO Digital Enable */
#define TIVA_GPIO_LOCK_OFFSET       0x0520 /* GPIO Lock */
#define TIVA_GPIO_CR_OFFSET         0x0524 /* GPIO Commit */

#define TIVA_GPIO_PERIPHID4_OFFSET  0x0fd0 /* GPIO Peripheral Identification 4 */
#define TIVA_GPIO_PERIPHID5_OFFSET  0x0fd4 /* GPIO Peripheral Identification 5 */
#define TIVA_GPIO_PERIPHID6_OFFSET  0x0fd8 /* GPIO Peripheral Identification 6 */
#define TIVA_GPIO_PERIPHID7_OFFSET  0x0fdc /* GPIO Peripheral Identification 7 */
#define TIVA_GPIO_PERIPHID0_OFFSET  0x0fe0 /* GPIO Peripheral Identification 0 */
#define TIVA_GPIO_PERIPHID1_OFFSET  0x0fe4 /* GPIO Peripheral Identification 1 */
#define TIVA_GPIO_PERIPHID2_OFFSET  0x0fe8 /* GPIO Peripheral Identification 2 */
#define TIVA_GPIO_PERIPHID3_OFFSET  0x0fec /* GPIO Peripheral Identification 3 */
#define TIVA_GPIO_PCELLID0_OFFSET   0x0ff0 /* GPIO PrimeCell Identification 0 */
#define TIVA_GPIO_PCELLID1_OFFSET   0x0ff4 /* GPIO PrimeCell Identification 1 */
#define TIVA_GPIO_PCELLID2_OFFSET   0x0ff8 /* GPIO PrimeCell Identification 2 */
#define TIVA_GPIO_PCELLID3_OFFSET   0x0ffc /* GPIO PrimeCell Identification 3*/

/* GPIO Register Addresses **********************************************************/

#if TIVA_NPORTS > 0

#  define TIVA_GPIOA_DATA           (TIVA_GPIOA_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOA_DIR            (TIVA_GPIOA_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOA_IS             (TIVA_GPIOA_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOA_IBE            (TIVA_GPIOA_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOA_IEV            (TIVA_GPIOA_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOA_IM             (TIVA_GPIOA_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOA_RIS            (TIVA_GPIOA_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOA_MIS            (TIVA_GPIOA_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOA_ICR            (TIVA_GPIOA_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOA_AFSEL          (TIVA_GPIOA_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOA_DR2R           (TIVA_GPIOA_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOA_DR4R           (TIVA_GPIOA_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOA_DR8R           (TIVA_GPIOA_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOA_ODR            (TIVA_GPIOA_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOA_PUR            (TIVA_GPIOA_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOA_PDR            (TIVA_GPIOA_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOA_SLR            (TIVA_GPIOA_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOA_DEN            (TIVA_GPIOA_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOA_LOCK           (TIVA_GPIOA_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOA_CR             (TIVA_GPIOA_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOA_PERIPHID4      (TIVA_GPIOA_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOA_PERIPHID5      (TIVA_GPIOA_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOA_PERIPHID6      (TIVA_GPIOA_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOA_PERIPHID7      (TIVA_GPIOA_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOA_PERIPHID0      (TIVA_GPIOA_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOA_PERIPHID1      (TIVA_GPIOA_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOA_PERIPHID2      (TIVA_GPIOA_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOA_PERIPHID3      (TIVA_GPIOA_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOA_PCELLID0       (TIVA_GPIOA_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOA_PCELLID1       (TIVA_GPIOA_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOA_PCELLID2       (TIVA_GPIOA_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOA_PCELLID3       (TIVA_GPIOA_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

#if TIVA_NPORTS > 1

#  define TIVA_GPIOB_DATA           (TIVA_GPIOB_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOB_DIR            (TIVA_GPIOB_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOB_IS             (TIVA_GPIOB_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOB_IBE            (TIVA_GPIOB_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOB_IEV            (TIVA_GPIOB_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOB_IM             (TIVA_GPIOB_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOB_RIS            (TIVA_GPIOB_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOB_MIS            (TIVA_GPIOB_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOB_ICR            (TIVA_GPIOB_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOB_AFSEL          (TIVA_GPIOB_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOB_DR2R           (TIVA_GPIOB_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOB_DR4R           (TIVA_GPIOB_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOB_DR8R           (TIVA_GPIOB_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOB_ODR            (TIVA_GPIOB_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOB_PUR            (TIVA_GPIOB_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOB_PDR            (TIVA_GPIOB_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOB_SLR            (TIVA_GPIOB_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOB_DEN            (TIVA_GPIOB_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOB_LOCK           (TIVA_GPIOB_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOB_CR             (TIVA_GPIOB_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOB_PERIPHID4      (TIVA_GPIOB_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOB_PERIPHID5      (TIVA_GPIOB_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOB_PERIPHID6      (TIVA_GPIOB_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOB_PERIPHID7      (TIVA_GPIOB_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOB_PERIPHID0      (TIVA_GPIOB_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOB_PERIPHID1      (TIVA_GPIOB_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOB_PERIPHID2      (TIVA_GPIOB_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOB_PERIPHID3      (TIVA_GPIOB_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOB_PCELLID0       (TIVA_GPIOB_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOB_PCELLID1       (TIVA_GPIOB_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOB_PCELLID2       (TIVA_GPIOB_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOB_PCELLID3       (TIVA_GPIOB_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

#if TIVA_NPORTS > 2

#  define TIVA_GPIOC_DATA           (TIVA_GPIOC_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOC_DIR            (TIVA_GPIOC_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOC_IS             (TIVA_GPIOC_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOC_IBE            (TIVA_GPIOC_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOC_IEV            (TIVA_GPIOC_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOC_IM             (TIVA_GPIOC_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOC_RIS            (TIVA_GPIOC_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOC_MIS            (TIVA_GPIOC_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOC_ICR            (TIVA_GPIOC_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOC_AFSEL          (TIVA_GPIOC_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOC_DR2R           (TIVA_GPIOC_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOC_DR4R           (TIVA_GPIOC_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOC_DR8R           (TIVA_GPIOC_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOC_ODR            (TIVA_GPIOC_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOC_PUR            (TIVA_GPIOC_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOC_PDR            (TIVA_GPIOC_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOC_SLR            (TIVA_GPIOC_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOC_DEN            (TIVA_GPIOC_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOC_LOCK           (TIVA_GPIOC_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOC_CR             (TIVA_GPIOC_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOC_PERIPHID4      (TIVA_GPIOC_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOC_PERIPHID5      (TIVA_GPIOC_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOC_PERIPHID6      (TIVA_GPIOC_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOC_PERIPHID7      (TIVA_GPIOC_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOC_PERIPHID0      (TIVA_GPIOC_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOC_PERIPHID1      (TIVA_GPIOC_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOC_PERIPHID2      (TIVA_GPIOC_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOC_PERIPHID3      (TIVA_GPIOC_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOC_PCELLID0       (TIVA_GPIOC_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOC_PCELLID1       (TIVA_GPIOC_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOC_PCELLID2       (TIVA_GPIOC_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOC_PCELLID3       (TIVA_GPIOC_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

#if TIVA_NPORTS > 3

#  define TIVA_GPIOD_DATA           (TIVA_GPIOD_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOD_DIR            (TIVA_GPIOD_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOD_IS             (TIVA_GPIOD_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOD_IBE            (TIVA_GPIOD_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOD_IEV            (TIVA_GPIOD_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOD_IM             (TIVA_GPIOD_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOD_RIS            (TIVA_GPIOD_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOD_MIS            (TIVA_GPIOD_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOD_ICR            (TIVA_GPIOD_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOD_AFSEL          (TIVA_GPIOD_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOD_DR2R           (TIVA_GPIOD_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOD_DR4R           (TIVA_GPIOD_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOD_DR8R           (TIVA_GPIOD_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOD_ODR            (TIVA_GPIOD_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOD_PUR            (TIVA_GPIOD_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOD_PDR            (TIVA_GPIOD_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOD_SLR            (TIVA_GPIOD_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOD_DEN            (TIVA_GPIOD_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOD_LOCK           (TIVA_GPIOD_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOD_CR             (TIVA_GPIOD_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOD_PERIPHID4      (TIVA_GPIOD_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOD_PERIPHID5      (TIVA_GPIOD_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOD_PERIPHID6      (TIVA_GPIOD_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOD_PERIPHID7      (TIVA_GPIOD_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOD_PERIPHID0      (TIVA_GPIOD_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOD_PERIPHID1      (TIVA_GPIOD_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOD_PERIPHID2      (TIVA_GPIOD_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOD_PERIPHID3      (TIVA_GPIOD_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOD_PCELLID0       (TIVA_GPIOD_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOD_PCELLID1       (TIVA_GPIOD_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOD_PCELLID2       (TIVA_GPIOD_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOD_PCELLID3       (TIVA_GPIOD_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

#if TIVA_NPORTS > 4

#  define TIVA_GPIOE_DATA           (TIVA_GPIOE_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOE_DIR            (TIVA_GPIOE_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOE_IS             (TIVA_GPIOE_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOE_IBE            (TIVA_GPIOE_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOE_IEV            (TIVA_GPIOE_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOE_IM             (TIVA_GPIOE_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOE_RIS            (TIVA_GPIOE_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOE_MIS            (TIVA_GPIOE_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOE_ICR            (TIVA_GPIOE_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOE_AFSEL          (TIVA_GPIOE_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOE_DR2R           (TIVA_GPIOE_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOE_DR4R           (TIVA_GPIOE_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOE_DR8R           (TIVA_GPIOE_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOE_ODR            (TIVA_GPIOE_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOE_PUR            (TIVA_GPIOE_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOE_PDR            (TIVA_GPIOE_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOE_SLR            (TIVA_GPIOE_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOE_DEN            (TIVA_GPIOE_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOE_LOCK           (TIVA_GPIOE_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOE_CR             (TIVA_GPIOE_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOE_PERIPHID4      (TIVA_GPIOE_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOE_PERIPHID5      (TIVA_GPIOE_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOE_PERIPHID6      (TIVA_GPIOE_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOE_PERIPHID7      (TIVA_GPIOE_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOE_PERIPHID0      (TIVA_GPIOE_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOE_PERIPHID1      (TIVA_GPIOE_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOE_PERIPHID2      (TIVA_GPIOE_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOE_PERIPHID3      (TIVA_GPIOE_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOE_PCELLID0       (TIVA_GPIOE_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOE_PCELLID1       (TIVA_GPIOE_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOE_PCELLID2       (TIVA_GPIOE_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOE_PCELLID3       (TIVA_GPIOE_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

#if TIVA_NPORTS > 5

#  define TIVA_GPIOF_DATA           (TIVA_GPIOF_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOF_DIR            (TIVA_GPIOF_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOF_IS             (TIVA_GPIOF_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOF_IBE            (TIVA_GPIOF_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOF_IEV            (TIVA_GPIOF_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOF_IM             (TIVA_GPIOF_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOF_RIS            (TIVA_GPIOF_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOF_MIS            (TIVA_GPIOF_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOF_ICR            (TIVA_GPIOF_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOF_AFSEL          (TIVA_GPIOF_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOF_DR2R           (TIVA_GPIOF_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOF_DR4R           (TIVA_GPIOF_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOF_DR8R           (TIVA_GPIOF_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOF_ODR            (TIVA_GPIOF_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOF_PUR            (TIVA_GPIOF_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOF_PDR            (TIVA_GPIOF_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOF_SLR            (TIVA_GPIOF_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOF_DEN            (TIVA_GPIOF_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOF_LOCK           (TIVA_GPIOF_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOF_CR             (TIVA_GPIOF_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOF_PERIPHID4      (TIVA_GPIOF_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOF_PERIPHID5      (TIVA_GPIOF_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOF_PERIPHID6      (TIVA_GPIOF_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOF_PERIPHID7      (TIVA_GPIOF_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOF_PERIPHID0      (TIVA_GPIOF_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOF_PERIPHID1      (TIVA_GPIOF_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOF_PERIPHID2      (TIVA_GPIOF_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOF_PERIPHID3      (TIVA_GPIOF_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOF_PCELLID0       (TIVA_GPIOF_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOF_PCELLID1       (TIVA_GPIOF_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOF_PCELLID2       (TIVA_GPIOF_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOF_PCELLID3       (TIVA_GPIOF_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

#if TIVA_NPORTS > 6

#  define TIVA_GPIOG_DATA           (TIVA_GPIOG_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOG_DIR            (TIVA_GPIOG_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOG_IS             (TIVA_GPIOG_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOG_IBE            (TIVA_GPIOG_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOG_IEV            (TIVA_GPIOG_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOG_IM             (TIVA_GPIOG_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOG_RIS            (TIVA_GPIOG_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOG_MIS            (TIVA_GPIOG_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOG_ICR            (TIVA_GPIOG_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOG_AFSEL          (TIVA_GPIOG_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOG_DR2R           (TIVA_GPIOG_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOG_DR4R           (TIVA_GPIOG_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOG_DR8R           (TIVA_GPIOG_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOG_ODR            (TIVA_GPIOG_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOG_PUR            (TIVA_GPIOG_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOG_PDR            (TIVA_GPIOG_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOG_SLR            (TIVA_GPIOG_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOG_DEN            (TIVA_GPIOG_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOG_LOCK           (TIVA_GPIOG_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOG_CR             (TIVA_GPIOG_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOG_PERIPHID4      (TIVA_GPIOG_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOG_PERIPHID5      (TIVA_GPIOG_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOG_PERIPHID6      (TIVA_GPIOG_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOG_PERIPHID7      (TIVA_GPIOG_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOG_PERIPHID0      (TIVA_GPIOG_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOG_PERIPHID1      (TIVA_GPIOG_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOG_PERIPHID2      (TIVA_GPIOG_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOG_PERIPHID3      (TIVA_GPIOG_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOG_PCELLID0       (TIVA_GPIOG_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOG_PCELLID1       (TIVA_GPIOG_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOG_PCELLID2       (TIVA_GPIOG_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOG_PCELLID3       (TIVA_GPIOG_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

#if TIVA_NPORTS > 7

#  define TIVA_GPIOH_DATA           (TIVA_GPIOH_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOH_DIR            (TIVA_GPIOH_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOH_IS             (TIVA_GPIOH_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOH_IBE            (TIVA_GPIOH_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOH_IEV            (TIVA_GPIOH_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOH_IM             (TIVA_GPIOH_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOH_RIS            (TIVA_GPIOH_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOH_MIS            (TIVA_GPIOH_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOH_ICR            (TIVA_GPIOH_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOH_AFSEL          (TIVA_GPIOH_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOH_DR2R           (TIVA_GPIOH_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOH_DR4R           (TIVA_GPIOH_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOH_DR8R           (TIVA_GPIOH_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOH_ODR            (TIVA_GPIOH_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOH_PUR            (TIVA_GPIOH_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOH_PDR            (TIVA_GPIOH_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOH_SLR            (TIVA_GPIOH_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOH_DEN            (TIVA_GPIOH_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOH_LOCK           (TIVA_GPIOH_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOH_CR             (TIVA_GPIOH_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOH_PERIPHID4      (TIVA_GPIOH_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOH_PERIPHID5      (TIVA_GPIOH_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOH_PERIPHID6      (TIVA_GPIOH_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOH_PERIPHID7      (TIVA_GPIOH_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOH_PERIPHID0      (TIVA_GPIOH_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOH_PERIPHID1      (TIVA_GPIOH_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOH_PERIPHID2      (TIVA_GPIOH_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOH_PERIPHID3      (TIVA_GPIOH_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOH_PCELLID0       (TIVA_GPIOH_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOH_PCELLID1       (TIVA_GPIOH_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOH_PCELLID2       (TIVA_GPIOH_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOH_PCELLID3       (TIVA_GPIOH_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

#if TIVA_NPORTS > 8

#  define TIVA_GPIOJ_DATA           (TIVA_GPIOJ_BASE + TIVA_GPIO_DATA_OFFSET)
#  define TIVA_GPIOJ_DIR            (TIVA_GPIOJ_BASE + TIVA_GPIO_DIR_OFFSET)
#  define TIVA_GPIOJ_IS             (TIVA_GPIOJ_BASE + TIVA_GPIO_IS_OFFSET)
#  define TIVA_GPIOJ_IBE            (TIVA_GPIOJ_BASE + TIVA_GPIO_IBE_OFFSET)
#  define TIVA_GPIOJ_IEV            (TIVA_GPIOJ_BASE + TIVA_GPIO_IEV_OFFSET)
#  define TIVA_GPIOJ_IM             (TIVA_GPIOJ_BASE + TIVA_GPIO_IM_OFFSET)
#  define TIVA_GPIOJ_RIS            (TIVA_GPIOJ_BASE + TIVA_GPIO_RIS_OFFSET)
#  define TIVA_GPIOJ_MIS            (TIVA_GPIOJ_BASE + TIVA_GPIO_MIS_OFFSET)
#  define TIVA_GPIOJ_ICR            (TIVA_GPIOJ_BASE + TIVA_GPIO_ICR_OFFSET)
#  define TIVA_GPIOJ_AFSEL          (TIVA_GPIOJ_BASE + TIVA_GPIO_AFSEL_OFFSET)
#  define TIVA_GPIOJ_DR2R           (TIVA_GPIOJ_BASE + TIVA_GPIO_DR2R_OFFSET)
#  define TIVA_GPIOJ_DR4R           (TIVA_GPIOJ_BASE + TIVA_GPIO_DR4R_OFFSET)
#  define TIVA_GPIOJ_DR8R           (TIVA_GPIOJ_BASE + TIVA_GPIO_DR8R_OFFSET)
#  define TIVA_GPIOJ_ODR            (TIVA_GPIOJ_BASE + TIVA_GPIO_ODR_OFFSET)
#  define TIVA_GPIOJ_PUR            (TIVA_GPIOJ_BASE + TIVA_GPIO_PUR_OFFSET)
#  define TIVA_GPIOJ_PDR            (TIVA_GPIOJ_BASE + TIVA_GPIO_PDR_OFFSET)
#  define TIVA_GPIOJ_SLR            (TIVA_GPIOJ_BASE + TIVA_GPIO_SLR_OFFSET)
#  define TIVA_GPIOJ_DEN            (TIVA_GPIOJ_BASE + TIVA_GPIO_DEN_OFFSET)
#  define TIVA_GPIOJ_LOCK           (TIVA_GPIOJ_BASE + TIVA_GPIO_LOCK_OFFSET)
#  define TIVA_GPIOJ_CR             (TIVA_GPIOJ_BASE + TIVA_GPIO_CR_OFFSET)

#  define TIVA_GPIOJ_PERIPHID4      (TIVA_GPIOJ_BASE + TIVA_GPIO_PERIPHID4_OFFSET)
#  define TIVA_GPIOJ_PERIPHID5      (TIVA_GPIOJ_BASE + TIVA_GPIO_PERIPHID5_OFFSET)
#  define TIVA_GPIOJ_PERIPHID6      (TIVA_GPIOJ_BASE + TIVA_GPIO_PERIPHID6_OFFSET)
#  define TIVA_GPIOJ_PERIPHID7      (TIVA_GPIOJ_BASE + TIVA_GPIO_PERIPHID7_OFFSET)
#  define TIVA_GPIOJ_PERIPHID0      (TIVA_GPIOJ_BASE + TIVA_GPIO_PERIPHID0_OFFSET)
#  define TIVA_GPIOJ_PERIPHID1      (TIVA_GPIOJ_BASE + TIVA_GPIO_PERIPHID1_OFFSET)
#  define TIVA_GPIOJ_PERIPHID2      (TIVA_GPIOJ_BASE + TIVA_GPIO_PERIPHID2_OFFSET)
#  define TIVA_GPIOJ_PERIPHID3      (TIVA_GPIOJ_BASE + TIVA_GPIO_PERIPHID3_OFFSET)
#  define TIVA_GPIOJ_PCELLID0       (TIVA_GPIOJ_BASE + TIVA_GPIO_PCELLID0_OFFSET)
#  define TIVA_GPIOJ_PCELLID1       (TIVA_GPIOJ_BASE + TIVA_GPIO_PCELLID1_OFFSET)
#  define TIVA_GPIOJ_PCELLID2       (TIVA_GPIOJ_BASE + TIVA_GPIO_PCELLID2_OFFSET)
#  define TIVA_GPIOJ_PCELLID3       (TIVA_GPIOJ_BASE + TIVA_GPIO_PCELLID3_OFFSET)
#endif

/* GPIO Register Bitfield Definitions ***********************************************/

/* GPIO Lock */

#define GPIO_LOCK_UNLOCK            0x4c4f434b
#define GPIO_LOCK_LOCKED            (1 << 0)  /* Bit 0: GPIOCR register is locked */

/************************************************************************************
 * Public Types
 ************************************************************************************/

/************************************************************************************
 * Public Data
 ************************************************************************************/

/************************************************************************************
 * Public Function Prototypes
 ************************************************************************************/

#endif /* __ARCH_ARM_SRC_TIVA_HARDWARE_LM_LM3S_GPIO_H */
