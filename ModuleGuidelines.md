# Module Guidelines 

This Document provides information on proper structure for new modules.

Requrements for all modules:
1. All modules should provide a README.md in its root

---
## Requirements for module categories:

### Platforms:
---
### Devices:
#### Documentation
Each Device Module represents a piece of hardware, so it is good to have information about the hardware easily available.

Under the header in the readme, Information about the device should be listed using the indented comment '>' followed by the field name, and then ':'. The following fields are required:

>Datasheet: [provide a link to the datasheet from the web]
<br>
>Partnumber: [provide the partnumber either digikey or mfg]



---
### Utilities:

#### Documentation

Under the header of the README.md file specify which other modules (if any) are required by the module starting with '>Requires:'. Each requirement should have its own line, and contain the path from MrT root

example:
>Requires: Modules/Utilities/Fifo
<br>
>Requires: Modules/Utilities/MessageSpool

#### Unit tests
All Utilities should provide a unit test. The Tester searches all directories recursively for files matching *_MUT.cpp to gather unit tests

Just create a cpp file (follow the example in the templates directory //TODO add link) with the following naming convention:

(Module Name)_MUT.cpp
