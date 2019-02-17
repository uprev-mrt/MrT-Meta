/*
 * stm_abstract.h
 *
 *  Created on: Apr 6, 2018
 *      Author: Jason Berger
 */

#pragma once



#ifdef __cplusplus
 extern "C" {
#endif

#include <stdint.h>
#include "stm32f7xx_hal.h"


#ifdef __cplusplus
 }
#endif

//Define LOW and HIGH
#define MRT_LOW GPIO_PIN_RESET
#define MRT_HIGH GPIO_PIN_SET

//Delay Abstraction
#define MRT_DELAY_MS(ms) HAL_DELAY(ms)

//Uart Abstraction
#define MRT_UART_TX(mod, data, len, timeout)
#define MRT_UART_RX(mod, data, len, timeout)
#define MRT_UART_AVAILABLE(mod) 

//GPIO Abstraction
#define MRT_GPIO_WRITE(pin,val) HAL_GPIO_WritePin(pin##_GPIO_Port, pin##_Pin, val)
#define MRT_GPIO_READ(pin,val) HAL_GPIO_ReadPin(pin##_GPIO_Port, pin##_Pin)


//I2C Abstraction
#define MRT_I2C_MASTER_TRANSMIT(mod ,addr,data,len,stop, timeout) HAL_I2C_Master_Transmit((I2C_HandleTypeDef*)mod , addr, data, len, timeout)
#define MRT_I2C_MASTER_RECEIVE(mod ,addr, data, len, stop, timeout) HAL_I2C_Master_Receive((I2C_HandleTypeDef*)mod , addr, data, len, timeout)
#define MRT_I2C_MEM_WRITE(mod, addr, mem_addr, mem_size, data, len, timeout ) HAL_I2C_Mem_Write((I2C_HandleTypeDef*)mod ,addr, mem_addr, mem_size, data, len, timeout)
#define MRT_I2C_MEM_READ(mod, addr, mem_addr, mem_size, data, len, timeout ) HAL_I2C_Mem_Read((I2C_HandleTypeDef*)mod ,addr, mem_addr, mem_size, data, len, timeout)

//SPI Abstraction
#define MRT_SPI_TRANSFER(mod ,tx, rx ,len, timeout) stm32_spi_transfer((SPI_HandleTypeDef*)mod,tx,rx,len,timeout)
int stm32_spi_transfer(int inst, uint8_t* tx, uint8_t* rx, int timeout);
