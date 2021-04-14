.. Mr T documentation master file, created by
   sphinx-quickstart on Tue Apr 13 17:49:31 2021.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Home
====

.. toctree::
   :maxdepth: 1
   :hidden:
   :caption: Contents:

   pages/getting_started
   pages/adding_modules/adding_modules
   pages/tools/mrtutils

MrT Framework
=============

**M**\ ​odule **R**\ ​eusability and **T**\ ​esting Framework

MrT is a collection of reusable modules that can be easily integrated into new projects. Each module is designed and maintained according to guidelines and standards to keep consistency. This allows uniform implementation, documentation and testing.

Modules
-------

There are three types of modules in the `MrT` framework `Platforms`, `Devices`, and `Utilities`

Platforms
~~~~~~~~~

Platforms are abstractions for specific platforms. This could be an OS or an MCU family. Each platform contains abstracted interfaces such as GPIO, Uart, SPI, and I2C. This allows the device modules to have a common interface for all platforms. When using a platform module, check the Readme for the module for the integrations steps specific to that platform. Normally these are just the steps to include the `Modules` directory in the projects include path, and define the ``MRT_PLATFORM`` symbol

Devices
~~~~~~~

Devices are modules for supporting commonly used ICs in projects. This would include common sensors, flash/eeprom memory, displays, battery charge controllers, etc.

Device modules contain all the logic needed for their operation and communicate using abstracted interfaces from platform modules

Utilities
~~~~~~~~~

Utilities are modules that provide a common functionality with no need for abstraction i.e., they do not depend on any specific hardware or platform. These include Fifos, Hashing functions, encoders/decoders, and messaging protocols. Because these do not rely on any hardware, they can be used without a ``Platform`` module



