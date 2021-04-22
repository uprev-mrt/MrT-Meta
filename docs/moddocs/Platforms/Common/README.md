# Common  

This module defines definitions and functions common to all platforms. It must be included with any project that uses on the of the Platform abstractions.

## FreeRTOS

To enable FreeRTOS add the symbol **MRT_FREERTOS** to the project or define it above the include statement for **mrt_platform.h**. This will override the malloc and free functions, and map the MRT_MUTEX macros accordingly: 

```c
/**
  *@file mrt_FreeRTOS.h
  *@brief Abstraction header FreeRTOS
  *@author Jason Berger
  *@date 8/27/2020
  */

#pragma once

#include "cmsis_os.h"
#include "semphr.h"


#define malloc(size) pvPortMalloc(size)
#define free(ptr) vPortFree(ptr)

#define MRT_MUTEX_TYPE SemaphoreHandle_t
#define MRT_MUTEX_CREATE(m) (m) = xSemaphoreCreateMutex()
#define MRT_MUTEX_LOCK(m) xSemaphoreTake((m), portMAX_DELAY)
#define MRT_MUTEX_UNLOCK(m) xSemaphoreGive((m))
#define MRT_MUTEX_DELETE(m) vSemaphoreDelete((m))
```


