/*
 * stm_abstract.c
 *
 *  Created on: Apr 10, 2018
 *      Author: Jason
 */




/* Includes ------------------------------------------------------------------*/
#include "stm32_abstract.h"


int stm32_spi_transfer( SPI_HandleTypeDef* spi, uint8_t* tx, uint8_t* rx, uint8_t len, int timeout)
{
  if(tx == NULL)
  {
    tx = blank_buf;
  }

  if(rx == NULL)
  {
    rx = blank_buf;
  }

  HAL_SPI_TransmitReceive(spi, tx, rx, len, timeout);
}
