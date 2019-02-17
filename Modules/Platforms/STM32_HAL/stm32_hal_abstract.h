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
#define MRT_UART_TX(handle, data, len, timeout)
#define MRT_UART_RX(handle, data, len, timeout)
#define MRT_UART_AVAILABLE(mod)

//GPIO Abstraction
typedef struct{
  GPIO_TypeDef* port;
	uint16_t pin;
} mrt_gpio_t;
#define MRT_GPIO_WRITE(pin,val) HAL_GPIO_WritePin(pin.port, pin.pin, val)
#define MRT_GPIO_READ(pin,val) HAL_GPIO_ReadPin(pin.port, pin.pin)


//I2C Abstraction
typedef I2C_HandleTypeDef* mrt_i2c_handle_t;
#define MRT_I2C_MASTER_TRANSMIT(handle ,addr,data,len,stop, timeout) HAL_I2C_Master_Transmit(handle , addr, data, len, timeout)
#define MRT_I2C_MASTER_RECEIVE(handle ,addr, data, len, stop, timeout) HAL_I2C_Master_Receive(handle , addr, data, len, timeout)
#define MRT_I2C_MEM_WRITE(handle, addr, mem_addr, mem_size, data, len, timeout ) HAL_I2C_Mem_Write(handle ,addr, mem_addr, mem_size, data, len, timeout)
#define MRT_I2C_MEM_READ(handle, addr, mem_addr, mem_size, data, len, timeout ) HAL_I2C_Mem_Read(handle ,addr, mem_addr, mem_size, data, len, timeout)

//SPI Abstraction
typedef SPI_HandleTypeDef* mrt_spi_handle_t;
#define MRT_SPI_TRANSFER(handle ,tx, rx ,len, timeout) stm32_spi_transfer(handle,tx,rx,len,timeout)
int stm32_spi_transfer(SPI_HandleTypeDef* handle, uint8_t* tx, uint8_t* rx, int timeout);

//printf
#define MRT_PRINTF(f_, ...) printf((f_), __VA_ARGS__)
