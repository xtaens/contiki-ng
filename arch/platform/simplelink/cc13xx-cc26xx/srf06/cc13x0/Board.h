/*
 * Copyright (c) 2015-2018, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __BOARD_H
#define __BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include <ti/drivers/Board.h>
#include "CC1350DK_7XD.h"

#define Board_CC1350DK_7XD
#define BOARD_STRING            "TI SmartRF06EB + CC13x0 EM"

#define Board_initGeneral()      Board_init()  /* deprecated */
#define Board_shutDownExtFlash() CC1350DK_7XD_shutDownExtFlash()
#define Board_wakeUpExtFlash()   CC1350DK_7XD_wakeUpExtFlash()

/* These #defines allow us to reuse TI-RTOS across other device families */

#define Board_ADCALS            CC1350DK_7XD_ADCALS

#define Board_ADC0              CC1350DK_7XD_ADCVDDS
#define Board_ADC1              CC1350DK_7XD_ADCALS

#define Board_ADCBUF0           CC1350DK_7XD_ADCBUF0
#define Board_ADCBUF0CHANNEL0   CC1350DK_7XD_ADCBUF0CHANNELVDDS
#define Board_ADCBUF0CHANNEL1   CC1350DK_7XD_ADCBUF0CHANNELADCALS

#define Board_CRYPTO0           CC1350DK_7XD_CRYPTO0
#define Board_AESCCM0           CC1350DK_7XD_AESCCM0
#define Board_AESGCM0           CC1350DK_7XD_AESGCM0
#define Board_AESCBC0           CC1350DK_7XD_AESCBC0
#define Board_AESCTR0           CC1350DK_7XD_AESCTR0
#define Board_AESECB0           CC1350DK_7XD_AESECB0
#define Board_AESCTRDRBG0       CC1350DK_7XD_AESCTRDRBG0
#define Board_TRNG0             CC1350DK_7XD_TRNG0

#define Board_DIO0              CC1350DK_7XD_DIO0
#define Board_DIO1_RFSW         CC1350DK_7XD_DIO1_RFSW
#define Board_DIO12             CC1350DK_7XD_DIO12
#define Board_DIO15             CC1350DK_7XD_DIO15
#define Board_DIO16_TDO         CC1350DK_7XD_DIO16_TDO
#define Board_DIO17_TDI         CC1350DK_7XD_DIO17_TDI
#define Board_DIO21             CC1350DK_7XD_DIO21
#define Board_DIO22             CC1350DK_7XD_DIO22

#define Board_DIO23_ANALOG      CC1350DK_7XD_DIO23_ANALOG
#define Board_DIO24_ANALOG      CC1350DK_7XD_DIO24_ANALOG
#define Board_DIO25_ANALOG      CC1350DK_7XD_DIO25_ANALOG
#define Board_DIO26_ANALOG      CC1350DK_7XD_DIO26_ANALOG
#define Board_DIO27_ANALOG      CC1350DK_7XD_DIO27_ANALOG
#define Board_DIO28_ANALOG      CC1350DK_7XD_DIO28_ANALOG
#define Board_DIO29_ANALOG      CC1350DK_7XD_DIO29_ANALOG
#define Board_DIO30_ANALOG      CC1350DK_7XD_DIO30_ANALOG

#define Board_GPIO_BTN0         CC1350DK_7XD_PIN_KEY_SELECT
#define Board_GPIO_BTN1         CC1350DK_7XD_PIN_KEY_UP
#define Board_GPIO_BTN2         CC1350DK_7XD_PIN_KEY_DOWN
#define Board_GPIO_BTN3         CC1350DK_7XD_PIN_KEY_LEFT
#define Board_GPIO_BTN4         CC1350DK_7XD_PIN_KEY_RIGHT
#define Board_GPIO_LED0         CC1350DK_7XD_PIN_LED1
#define Board_GPIO_LED1         CC1350DK_7XD_PIN_LED2
#define Board_GPIO_LED2         CC1350DK_7XD_PIN_LED3
#define Board_GPIO_LED3         CC1350DK_7XD_PIN_LED4
#define Board_GPIO_LED_ON       CC1350DK_7XD_GPIO_LED_ON
#define Board_GPIO_LED_OFF      CC1350DK_7XD_GPIO_LED_OFF

#define Board_GPTIMER0A         CC1350DK_7XD_GPTIMER0A
#define Board_GPTIMER0B         CC1350DK_7XD_GPTIMER0B
#define Board_GPTIMER1A         CC1350DK_7XD_GPTIMER1A
#define Board_GPTIMER1B         CC1350DK_7XD_GPTIMER1B
#define Board_GPTIMER2A         CC1350DK_7XD_GPTIMER2A
#define Board_GPTIMER2B         CC1350DK_7XD_GPTIMER2B
#define Board_GPTIMER3A         CC1350DK_7XD_GPTIMER3A
#define Board_GPTIMER3B         CC1350DK_7XD_GPTIMER3B

#define Board_I2C0              CC1350DK_7XD_I2C0

#define Board_I2S0              CC1350DK_7XD_I2S0
#define Board_I2S_ADO           CC1350DK_7XD_I2S_ADO
#define Board_I2S_ADI           CC1350DK_7XD_I2S_ADI
#define Board_I2S_BCLK          CC1350DK_7XD_I2S_BCLK
#define Board_I2S_MCLK          CC1350DK_7XD_I2S_MCLK
#define Board_I2S_WCLK          CC1350DK_7XD_I2S_WCLK

#define Board_NVSINTERNAL       CC1350DK_7XD_NVSCC26XX0

#define Board_KEY_SELECT        CC1350DK_7XD_PIN_KEY_SELECT
#define Board_KEY_UP            CC1350DK_7XD_PIN_KEY_UP
#define Board_KEY_DOWN          CC1350DK_7XD_PIN_KEY_DOWN
#define Board_KEY_LEFT          CC1350DK_7XD_PIN_KEY_LEFT
#define Board_KEY_RIGHT         CC1350DK_7XD_PIN_KEY_RIGHT

#define Board_PIN_BUTTON0       CC1350DK_7XD_PIN_KEY_SELECT
#define Board_PIN_BUTTON1       CC1350DK_7XD_PIN_KEY_UP
#define Board_PIN_BUTTON2       CC1350DK_7XD_PIN_KEY_DOWN
#define Board_PIN_BUTTON3       CC1350DK_7XD_PIN_KEY_LEFT
#define Board_PIN_BUTTON4       CC1350DK_7XD_PIN_KEY_RIGHT
#define Board_PIN_BTN1          CC1350DK_7XD_PIN_KEY_SELECT
#define Board_PIN_BTN2          CC1350DK_7XD_PIN_KEY_UP
#define Board_PIN_BTN3          CC1350DK_7XD_PIN_KEY_DOWN
#define Board_PIN_BTN4          CC1350DK_7XD_PIN_KEY_LEFT
#define Board_PIN_BTN5          CC1350DK_7XD_PIN_KEY_RIGHT
#define Board_PIN_LED0          CC1350DK_7XD_PIN_LED1
#define Board_PIN_LED1          CC1350DK_7XD_PIN_LED2
#define Board_PIN_LED2          CC1350DK_7XD_PIN_LED3
#define Board_PIN_LED3          CC1350DK_7XD_PIN_LED4

#define Board_PWM0              CC1350DK_7XD_PWM0
#define Board_PWM1              CC1350DK_7XD_PWM1
#define Board_PWM2              CC1350DK_7XD_PWM2
#define Board_PWM3              CC1350DK_7XD_PWM3
#define Board_PWM4              CC1350DK_7XD_PWM4
#define Board_PWM5              CC1350DK_7XD_PWM5
#define Board_PWM6              CC1350DK_7XD_PWM6
#define Board_PWM7              CC1350DK_7XD_PWM7

#define Board_SD0               CC1350DK_7XD_SDSPI0

#define Board_SPI0              CC1350DK_7XD_SPI0
#define Board_SPI0_MISO         CC1350DK_7XD_SPI0_MISO
#define Board_SPI0_MOSI         CC1350DK_7XD_SPI0_MOSI
#define Board_SPI0_CLK          CC1350DK_7XD_SPI0_CLK
#define Board_SPI0_CSN          CC1350DK_7XD_SPI0_CSN
#define Board_SPI1              CC1350DK_7XD_SPI1
#define Board_SPI1_MISO         CC1350DK_7XD_SPI1_MISO
#define Board_SPI1_MOSI         CC1350DK_7XD_SPI1_MOSI
#define Board_SPI1_CLK          CC1350DK_7XD_SPI1_CLK
#define Board_SPI1_CSN          CC1350DK_7XD_SPI1_CSN
#define Board_FLASH_CS_ON       0
#define Board_FLASH_CS_OFF      1

#define Board_SPI_MASTER        CC1350DK_7XD_SPI0
#define Board_SPI_SLAVE         CC1350DK_7XD_SPI0
#define Board_SPI_MASTER_READY  CC1350DK_7XD_SPI_MASTER_READY
#define Board_SPI_SLAVE_READY   CC1350DK_7XD_SPI_SLAVE_READY

#define Board_UART0             CC1350DK_7XD_UART0

#define Board_WATCHDOG0         CC1350DK_7XD_WATCHDOG0

#define Board_SDCARD_CS         CC1350DK_7XD_SDCARD_CS

#define Board_LCD_MODE          CC1350DK_7XD_LCD_MODE
#define Board_LCD_RST           CC1350DK_7XD_LCD_RST
#define Board_LCD_CS            CC1350DK_7XD_LCD_CS

#define Board_ALS_OUT           CC1350DK_7XD_ALS_OUT
#define Board_ALS_PWR           CC1350DK_7XD_ALS_PWR

#define Board_ACC_PWR           CC1350DK_7XD_ACC_PWR
#define Board_ACC_CS            CC1350DK_7XD_ACC_CS

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_H */
