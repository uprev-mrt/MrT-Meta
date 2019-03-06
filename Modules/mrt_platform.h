/**
  *@file platform.h
  *@brief Abstraction header
  *@author Jason Berger
  *@date 3/6/2019
  */

#ifdef MRT_PLATFORM_STM32_HAL
  #include "Platforms/Stm32_HAL/stm32_hal_abstract.h"
#endif

#ifdef MRT_PLATFORM_ATMEL_START
  #include "Platforms/AtmelStart/atmel_start_abstract.h"
#endif

#ifdef MRT_PLATFORM_ATMEL_ASF
  #include "Platforms/AtmelStart/atmel_asf_abstract.h"
#endif


//platform_check must be included AFTER the abstraction header
#include "platform_check.h"
