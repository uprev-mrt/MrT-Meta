# UpRev-MrT

**UpRev** **M**​odule **R**​eusability and **T**​esting

MrT is a collection of reusable modules that can be easily integrated into new projects. Each module is designed and maintained according to guidelines and standards to keep consistency. This allows uniform implementation, documentation and testing.

---
## Using Mr T for a project:

The easiest way to get started with MrT is to using the MrT config tool:

Just add the config tool as a submodule of your current project:
```
cd <path/to/project>
git submodule add git@bitbucket.org:uprev/mrt_config.git MrT/Config
cd MrT/Config
./mrt_config.py
```
This will open up the config gui and let you select modules to be imported.

>There are some requirements for using the tool (Python3, PyQt5)<br/>
>For more information on getting set up to use it go to MrT Config's Readme:[MrT Config Readme](https://bitbucket.org/uprev/mrt_config/src/master/README.md)


---
## Modules

#### Platforms

Platforms are abstractions for specific platforms. This could be an OS or an MCU family. Each platform contains abstracted interfaces such as GPIO, Uart, SPI, and I2C. This allows the device modules to have a common interface for all platforms

#### Devices
Devices are modules for supporting commonly used ICs in projects. This would include common sensors, flash/eeprom memory, displays, battery charge controllers, etc.

Deevice modules contain all the logic needed for their operation and communicate using abstracted interfaces from platform modules

#### Utilities
Utilities are modules that provide a common functionality with no need for abstraction, that is, they do not depend on any specific hardware or platform. These include Fifos, Hashing functions, encoders/decoders, and messaging protocols.

---
## Test

Automated unit testing will be performed using google test. This gives us the ability to output JUnit style test results that can be integrated with Jenkins plugins.

---

## Tools
The tools section contains various tools used throughout the development cycle
