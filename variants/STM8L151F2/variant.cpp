/*
 *******************************************************************************
 * Copyright (c) 2018, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */


#include "variant.h"

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
// This array allows to wrap Arduino pin number(Dx or x)
// to STM32 PinName (PX_n)

const PinName digitalPin[] = {
    PC_5, //D0 SPI_SS USART_TX TIM2_CH1
    PC_6, //D1 SPI_CLK USART_RX TIM2_CH2
    PA_0, //D2 USART_CLK SWIM_IO
    PA_1, //D3 NRST
    PA_2, //D4 USART_TX SPI_MISO
    PA_3, //D5 USART_RX SPI_MOSI
    PC_0, //D6 I2C_SDA
    PC_1, //D7 I2C_SCL
    PC_4, //D8 USART_CLK I2C_SMB CCO ADC_IN4
    PD_0, //D9 TIM3_CH2 ADC_TRG ADC_IN22
    PB_0, //D10 TIM2_CH1 ADC_IN18
    PB_1, //D11 TIM3_CH1 ADC_IN17
    PB_2, //D12 TIM2_CH2 ADC_IN16
    PB_3, //D13 TIM2_ET ADC_IN15
    PB_4, //D14 SPI_SS ADC_IN14
    PB_5, //D15 SPI_CLK ADC_IN13
    PB_6, //D16 SPI_MOSI ADC_IN12
    PB_7, //D17 SPI_MISO ADC_IN11
};

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

#pragma weak SystemClock_Config
extern void SystemClock_Config(void);

#ifdef __cplusplus
}
#endif
