/* mbed Microcontroller Library
 * SPDX-License-Identifier: BSD-3-Clause
 ******************************************************************************
 *
 * Copyright (c) 2015-2020 STMicroelectronics.
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    ADC_1 = (int)ADC1_BASE,
    ADC_2 = (int)ADC2_BASE,
#if defined ADC3_BASE
    ADC_3 = (int)ADC3_BASE,
#endif
#if defined ADC4_BASE
    ADC_4 = (int)ADC4_BASE,
#endif
#if defined ADC5_BASE
    ADC_5 = (int)ADC5_BASE,
#endif
} ADCName;

typedef enum {
    DAC_1 = (int)DAC1_BASE,
#if defined DAC2_BASE
    DAC_2 = (int)DAC2_BASE,
#endif
    DAC_3 = (int)DAC3_BASE,
#if defined DAC4_BASE
    DAC_4 = (int)DAC4_BASE,
#endif
} DACName;

typedef enum {
    UART_1   = (int)USART1_BASE,
    UART_2   = (int)USART2_BASE,
    UART_3   = (int)USART3_BASE,
    UART_4   = (int)UART4_BASE,
#if defined UART5_BASE
    UART_5   = (int)UART5_BASE,
#endif
    LPUART_1 = (int)LPUART1_BASE
} UARTName;

#define DEVICE_SPI_COUNT 5
typedef enum {
    SPI_1 = (int)SPI1_BASE,
    SPI_2 = (int)SPI2_BASE,
    SPI_3 = (int)SPI3_BASE,
#if defined SPI4_BASE
    SPI_4 = (int)SPI4_BASE,
#endif
} SPIName;

typedef enum {
    I2C_1 = (int)I2C1_BASE,
    I2C_2 = (int)I2C2_BASE,
    I2C_3 = (int)I2C3_BASE,
#if defined I2C4_BASE
    I2C_4 = (int)I2C4_BASE
#endif
} I2CName;

typedef enum {
    PWM_1  = (int)TIM1_BASE,
    PWM_2  = (int)TIM2_BASE,
    PWM_3  = (int)TIM3_BASE,
    PWM_4  = (int)TIM4_BASE,
#if defined TIM5_BASE
    PWM_5  = (int)TIM5_BASE,
#endif
    PWM_6  = (int)TIM6_BASE,
    PWM_7  = (int)TIM7_BASE,
    PWM_8  = (int)TIM8_BASE,
    PWM_15 = (int)TIM15_BASE,
    PWM_16 = (int)TIM16_BASE,
    PWM_17 = (int)TIM17_BASE,
#if defined TIM20_BASE
    PWM_20 = (int)TIM20_BASE,
#endif
} PWMName;

typedef enum {
    CAN_1 = (int)FDCAN1_BASE,
#if defined FDCAN2_BASE
    CAN_2 = (int)FDCAN2_BASE,
#endif
#if defined FDCAN3_BASE
    CAN_3 = (int)FDCAN3_BASE,
#endif
} CANName;

#if defined QSPI_R_BASE
typedef enum {
    QSPI_1 = (int)QSPI_R_BASE,
} QSPIName;
#endif

typedef enum {
    USB_FS = (int)USB_BASE
} USBName;

#ifdef __cplusplus
}
#endif

#endif
