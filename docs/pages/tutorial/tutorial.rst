Tutorial
========

This is a guide for incorporating MrT modules into a project. The guides walks through the full implementation of a project using MrT, a generated device driver, and a custom messaging protocol. This guide will be broken up into stages. 

The project files are all in the `mrt-tutorial repo <https://github.com/uprev-mrt/mrt-tutorial>`_ and there is a `'reference`' branch with Tags showing the end of each stage

At head of the master branch is the project start. An STM32 project has already been created to target the STM32L4 ( Their IOT node dev board)

*   Uart1: 115200 baud
*   I2C2 
*   GPIO PB14 as output, labeled as LED_GRN

.. note:: The setup for this project is not in the scope of this tutorial, but using STM32CUBE is pretty well documented online 


.. toctree::
   :maxdepth: 1
   :caption: Steps

   install-mrtutils
   add-modules 
   toggle-led 
   create-device 
   create-proto 
   custom-proto 
   poly-cli
