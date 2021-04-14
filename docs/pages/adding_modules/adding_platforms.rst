Adding Platforms
================

Platform modules are meants to abstract any IO operations. This can normally be done by typdefing native platform types to the mrt_xx_t equivalent, and using a macro to pass through operation. In some cases, you may have to get a little creative to make it work, but the macros make the system pretty flexible. 

When adding a platform, the header and symbol must be added to ``Platforms/Common/mrt_platform.h`` 

example from ``Platforms/Common/mrt_platform.h`` 

.. code-block:: C 

    ...

    #if MRT_PLATFORM == MRT_STM32_HAL
        #include "Platforms/STM32/stm32_hal_abstract.h"
        #define MRT_PLATFORM_STRING "STM32_HAL"
        #include "platform_check.h"
    #endif

    ...

Then in the header for the module, you can abstract the various IO operations. 


Delay Abstraction
~~~~~~~~~~~~~~~~~
*   MRT_DELAY_MS(ms)

Uart Abstraction
~~~~~~~~~~~~~~~~~~
*   typedef xx mrt_uart_handle_t;
*   MRT_UART_TX(handle, data, len, timeout)
*   MRT_UART_RX(handle, data, len, timeout) 

GPIO Abstraction
~~~~~~~~~~~~~~~~
*   typedef xx mrt_gpio_t
*   MRT_GPIO_WRITE(pin,val)
*   MRT_GPIO_READ(pin)
*   MRT_GPIO_PORT_WRITE(port, mask, val)
*   MRT_GPIO_PORT_READ(port)

I2C Abstraction
~~~~~~~~~~~~~~~
*   typedef xx mrt_i2c_handle_t
*   MRT_I2C_MASTER_TRANSMIT(handle ,addr,data,len, stop, timeout)
*   MRT_I2C_MASTER_RECEIVE(handle ,addr, data, len, stop, timeout)
*   MRT_I2C_MEM_WRITE(handle, addr, mem_addr, mem_size, data, len, timeout )																		 
*   MRT_I2C_MEM_READ(handle, addr, mem_addr, mem_size, data, len, timeout )


SPI Abstraction
~~~~~~~~~~~~~~~
*   typedef xx mrt_spi_handle_t
*   MRT_SPI_TRANSFER(handle ,tx, rx ,len, timeout)
*   MRT_SPI_TRANSMIT(handle, tx, len, timeout)
*   MRT_SPI_RECIEVE(handle, tx, len, timeout)

Mutex Abstraction
~~~~~~~~~~~~~~~~~

*   MRT_MUTEX_TYPE
*   MRT_MUTEX_CREATE(m)
*   MRT_MUTEX_LOCK(m)
*   MRT_MUTEX_UNLOCK(m)
*   MRT_MUTEX_DELETE(m)

printf 
~~~~~~
*   MRT_PRINTF(f\_, ...)


.. note:: Not every function has to be used. Any undefined functions will be defined as NOP() and a warning will be displayed at compile time to let the user know the function is not available on the platform.

Example from ``Platforms/Atmel``
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. code-block :: C

    ...
    
    //Delay Abstraction
    #define MRT_DELAY_MS(ms) delay_ms(ms)

    //Uart Abstraction
    typedef struct io_descriptor* mrt_uart_handle_t;
    #define MRT_UART_TX(handle, data, len, timeout) io_write(handle, data, len)
    #define MRT_UART_RX(handle, data, len, timeout) io_read(handle, data, len)

    //GPIO Abstraction
    typedef uint8_t mrt_gpio_t;
    typedef enum gpio_port mrt_gpio_port_t;
    #define MRT_GPIO_WRITE(pin,val) gpio_set_pin_level(pin,val)
    #define MRT_GPIO_READ(pin) gpio_get_pin_level(pin)
    #define MRT_GPIO_PORT_WRITE(port, mask, val) gpio_set_port_level(port, mask, val)
    #define MRT_GPIO_PORT_READ(port) gpio_get_port_level(port)

    //printf
    #define MRT_PRINTF(f_, ...) printf((f_), __VA_ARGS__)

    ...


