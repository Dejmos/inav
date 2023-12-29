/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 *
 * This target has been autgenerated by bf2inav.py
 */

#pragma once

//#define USE_TARGET_CONFIG

#define DEFAULT_FEATURES        (FEATURE_OSD | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY  )


 
#define TARGET_BOARD_IDENTIFIER "RPTY"
#define USBD_PRODUCT_STRING "AIKONF7"
// Beeper
#define USE_BEEPER
#define BEEPER PC15
#define BEEPER_INVERTED
// Leds
#define USE_LED_STRIP
#define WS2811_PIN PA15
#define LED0 PC13
// UARTs
#define USB_IO
#define USE_VCP
#define USE_UART1
#define UART1_RX_PIN PA10
#define UART1_TX_PIN PA9
#define USE_UART2
#define UART2_RX_PIN PA3
#define UART2_TX_PIN PA2
#define USE_UART3
#define UART3_RX_PIN PC11
#define UART3_TX_PIN PC10
#define USE_UART4
#define UART4_RX_PIN PA1
#define UART4_TX_PIN PA0
#define USE_UART5
#define UART5_RX_PIN PD2
#define UART5_TX_PIN PC12
#define SERIAL_PORT_COUNT 5
#define DEFAULT_RX_TYPE RX_TYPE_SERIAL
#define SERIALRX_PROVIDER SERIALRX_CRSF
// SPI
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN PA5
#define SPI1_MISO_PIN PA7
#define SPI1_MOSI_PIN PA6
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN PB13
#define SPI2_MISO_PIN PB15
#define SPI2_MOSI_PIN PC2
#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN PB3
#define SPI3_MISO_PIN PB5
#define SPI3_MOSI_PIN PB4
// I2C
#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C2_SCL PB10
#define I2C2_SDA PB11
// ADC
#define ADC_CHANNEL_1_PIN PC0
#define VBAT_ADC_CHANNEL ADC_CHN_1
#define ADC_CHANNEL_2_PIN PC1
#define CURRENT_METER_ADC_CHANNEL ADC_CHN_2
#define ADC_CHANNEL_3_PIN PC3
#define RSSI_ADC_CHANNEL ADC_CHN_3
#define USE_ADC
#define ADC_INSTANCE ADC1
// Gyro & ACC
#define USE_IMU_BMI270
#define BMI270_CS_PIN       PA4
#define BMI270_SPI_BUS BUS_SPI1
#define IMU_BMI270_ALIGN    CW0_DEG
#define USE_IMU_MPU6000
#define MPU6000_CS_PIN       PA4
#define MPU6000_SPI_BUS BUS_SPI1
#define IMU_MPU6000_ALIGN    CW0_DEG
// BARO
// #define USE_BARO
// #define USE_BARO_ALL
// #define USE_BARO_SPI_BMP280
// #define BMP280_SPI_BUS BUS_SPI3
// #define BMP280_CS_PIN PB2
// OSD
#define USE_MAX7456
#define MAX7456_CS_PIN PB12
#define MAX7456_SPI_BUS BUS_SPI2
// Blackbox
#define USE_FLASHFS
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASH_M25P16
#define M25P16_SPI_BUS BUS_SPI3
#define M25P16_CS_PIN PB0
#define USE_FLASH_W25M
#define W25M_SPI_BUS BUS_SPI3
#define W25M_CS_PIN PB0
#define USE_FLASH_W25M02G
#define W25M02G_SPI_BUS BUS_SPI3
#define W25M02G_CS_PIN PB0
#define USE_FLASH_W25M512
#define W25M512_SPI_BUS BUS_SPI3
#define W25M512_CS_PIN PB0
#define USE_FLASH_W25N01G
#define W25N01G_SPI_BUS BUS_SPI3
#define W25N01G_CS_PIN PB0

// PINIO

#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN PC14


// Others

#define MAX_PWM_OUTPUT_PORTS 8
#define USE_SERIAL_4WAY_BLHELI_INTERFACE
#define USE_DSHOT
#define USE_ESC_SENSOR

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff
#define TARGET_IO_PORTE         0xffff
#define TARGET_IO_PORTF         0xffff
