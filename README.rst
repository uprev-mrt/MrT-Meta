UpRev-MrT
=========

**UpRev** **M**\​odule **R**\​eusability and **T**\​esting

MrT is a collection of reusable modules that can be easily integrated into new projects. Each module is designed and maintained according to guidelines and standards to keep consistency. This allows uniform implementation, documentation and testing.

---- 


Using Mr T for a project:
-------------------------

The MrT Config tool allows you to easily add MrT submodules to your project. 

.. code::bash 

    pip3 isntall mrtutils


.. note:: MrT Modules are added as git sub-modules, so make sure that you have already initialized your project as a git repo



.. code::bash
    cd <path/to/project>
    mrt-config <relative/path/for/MrT/root>


This will open up the config gui and let you select modules to be imported.

----

Modules
-------


Platforms
~~~~~~~~~

Platforms are abstractions for specific platforms. This could be an OS or an MCU family. Each platform contains abstracted interfaces such as GPIO, Uart, SPI, and I2C. This allows the device modules to have a common interface for all platforms

Devices
~~~~~~~

Devices are modules for supporting commonly used ICs in projects. This would include common sensors, flash/eeprom memory, displays, battery charge controllers, etc.

Deevice modules contain all the logic needed for their operation and communicate using abstracted interfaces from platform modules

Utility
~~~~~~~
Utility modules are modules that provide a common functionality with no need for abstraction, that is, they do not depend on any specific hardware or platform. These include Fifos, Hashing functions, encoders/decoders, and messaging protocols.


Test
----

Automated unit testing will be performed using google test. This gives us the ability to output JUnit style test results that can be integrated with Jenkins plugins.

Currently jenkins is set to run a unit test on all modules every night at 11:30 and email stakeholders when there is a failure. 


