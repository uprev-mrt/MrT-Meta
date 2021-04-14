Adding Modules
==============

This section covers the information needed for contributors to add modules to the framework 


Creating the Module 
-------------------


``mrt-config`` works by grabbing the list of submodules in the main uprev-mrt_ repo . When you import a module into your project, it adds that submodule to your project using the same relative path it has in the main repo. 

So to add a module, you need to create a repo for the module, and then add it as a submodule to the uprev-mrt_ repo. 


.. note:: Repo names for modules should be all lowercase and hyphenated with the module category as a prefix. example: the ``Fifo`` module's repo is ``utility-fifo``

**mrt.yml file**


Every module should contain an ``mrt.yml`` file with a name, description, category, and requires field 

example from ``Fifo`` module:

.. code-block:: yaml 

    ---
    name: fifo
    description: generic fifo utility
    category: utility
    requires: []


Once you have the basic module added, you can begin adding code. The modules structure will vary based on what type of module it is. See below for specifics when adding a ``Platform`` , ``Device``, or ``Utility`` module

Adding Platforms
----------------

Platform modules are meants to abstract any IO operations. This can normally be done by typdefing native platform types to the mrt_xx_t equivalent, and using a macro to pass through operation. In some cases, you may have to get a little creative to make it work, but the macros make the system pretty flexible. 

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

Example from ``Platforms/Atmel``
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. code-block :: C
    
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

Adding Utilities
----------------

Utilities are the easiest modules to add, because they do not have to interact with hardware. Because these modules can be run on any system, they are all required to have a unit test with 80% code coverage. 

Adding Devices 
--------------

Devices are the most commonly added module type, because every project has unique hardware. The main thing to keep in mind with a Device module, is that all of the IO operations must go through an abstracted platform function. This means you can not use any native IO calls. For instance all GPIO writes must use ``MRT_GPIO_WRITE()``, and all UART transmits must use ``MRT_UART_TX`` etc. 

mrt-device
~~~~~~~~~~

The ``mrtutils`` package contains a tool called ``mrt-device`` that can be used to create device drivers for register based devices. 

The mrt-device tool allows user to create driver code from device description files. This provides very consistent drivers and also creates an easily parseable device file as a byproduct. This can be used for better documentation as well as a basis for automated testing of hardware.

.. note:: The code generated from this tool requires the Mrt `RegDev <https://github.com/uprev-mrt/device-regdevice>`_ module

Coding Practices
----------------

All of the modules should be written in pure C since the goal is to be reusable across many embedded platforms. 

All public functions should be documented using doxygen style comments: 

.. code-block:: C 

    /**
     *@brief Draws a bitmap to the buffer
     *@param gfx ptr to mono_gfx_t descriptor
     *@param x x coord to begin drawing at
     *@param y y coord to begin drawing at
     *@param bmp bitmap to draw
     *@param val pixel value on
     *@return status of operation
     */
    mrt_status_t mono_gfx_draw_bmp(mono_gfx_t* gfx, int x, int y,const GFXBmp* bmp, uint8_t val);


Unit Tests
----------

The Unit Tester for MrT recursively searches the modules for any file ending with '_UT.cpp', and adds them to the GTest project. To add a Unit test to a module just add a file that ends with _UT.cpp. 

.. note:: To keep projects from trying to compile the Unit test files, they are wrapped with ``#ifdef UNIT_TESTING_ENABLED`` .. ``#endif //UNIT_TESTING_ENABLED``


.. _uprev-mrt : https://bitbucket.org/uprev/uprev-mrt/src/master/