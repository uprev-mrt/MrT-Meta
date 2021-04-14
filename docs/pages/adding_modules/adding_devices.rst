Adding Devices 
==============


.. toctree::
   :maxdepth: 1
   :hidden:

   mrt-device

Devices are the most commonly added module type, because every project has unique hardware. The main thing to keep in mind with a Device module, is that all of the IO operations must go through an abstracted platform function. This means you can not use any native IO calls. For instance all GPIO writes must use ``MRT_GPIO_WRITE()``, and all UART transmits must use ``MRT_UART_TX`` etc. 



The ``mrtutils`` package contains a tool called :ref:`mrt-device <mrt-device-page>` that can be used to create device drivers for register based devices. 






