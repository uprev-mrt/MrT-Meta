/**
  *@file platform.h
  *@brief Prints warning about incomplete platform Abstraction
  *@author Jason Berger
  *@date 3/6/2019
  */

  //Delay Abstraction
#ifndefMRT_DELAY_MS
  #warning "MRT_DELAY_MS Macro not provided in the current platform abstraction layer "
#endif

  //Uart Abstraction
#ifndefMRT_UART_TX
  #warning "MRT_UART_TX Macro not provided in the current platform abstraction layer "
#endif
#ifndefMRT_UART_RX
  #warning "MRT_UART_RX Macro not provided in the current platform abstraction layer "
#endif

  //GPIO Abstraction
#ifndefMRT_GPIO_WRITE
  #warning "MRT_GPIO_WRITE Macro not provided in the current platform abstraction layer "
#endif
#ifndefMRT_GPIO_READ
  #warning "MRT_GPIO_READ Macro not provided in the current platform abstraction layer "
#endif

  //I2C Abstraction
#ifndefMRT_I2C_MASTER_TRANSMIT
  #warning "MRT_I2C_MASTER_TRANSMIT Macro not provided in the current platform abstraction layer "
#endif
#ifndef MRT_I2C_MASTER_RECEIVE
  #warning ""
#endif
#ifndefMRT_I2C_MEM_WRITE
  #warning "MRT_I2C_MEM_WRITE Macro not provided in the current platform abstraction layer "
#endif
#ifndefMRT_I2C_MEM_READ
  #warning "MRT_I2C_MEM_READ Macro not provided in the current platform abstraction layer "
#endif

  //SPI Abstraction
#ifndefMRT_SPI_TRANSFER
  #warning "MRT_SPI_TRANSFER Macro not provided in the current platform abstraction layer "
#endif

  //printf
#ifndef MRT_PRINTF(f_, ...)
  #warning "MRT_PRINTF Macro not provided in the current platform abstraction layer "
#endif
