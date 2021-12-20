# Adding New Modules

<hr>

This guide provides details on how to add modules to the Mr T framework.

All MrT modules are [git submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules), so they are all standalone git repos which are just imported as submodules. To create a new module, first create a repo for it on bitbucket, under the [Mr.T project](https://bitbucket.org/account/user/uprev/projects/MRT)

The naming convention is [module type]-[name]. for instance the fifo module is utility-fifo. 
>*This is just the name of the repo, and does not have to be the same as the directory it is in*

For consistency, every module should have the following  files:

* README.md - Standard markdown file explaining the use of the module
* mrt.yml - This is a yml file with misc information about the module like which other modules it depends on etc

**minimum mrt.yml example:**
```yaml
name: fifo
description: generic fifo utility
category: utility
requires: []
```

Once you have created the repo, clone the [MrT Master repo](https://bitbucket.org/uprev/uprev-mrt/src/master/), and add the new repo as a submodule using a path that makes sense under the Modules directory 

```bash
git submodule add <url-for-module> Modules/path/for/module
```

Once you commit and push your changes to the mast repo, the module will be available in the mrt-config tool

<br>

Depending on the type of module, it may require other files and information

## Platforms
 The readme file for each platform should contain instructions for using it. This typically means setting the MRT_PLATFORM symbol and including the MrT/Modules directory

## Utilities
Every utility module should have a unit test. Unit test files are automaticly collected by the Test module as long as they end in **_UT.cpp**. 


For more information on creating this, look at the readme file for the [MrT Test](https://bitbucket.org/uprev/test/src/master/) module.



## Devices

Device modules should contain also contain device specific information. This should either be in the mrt.yml file, or in a seperate file included from mrt.yml. At a minimum include 
* Description
* URL for datasheet
* manufacturer
* manufacturer part number


mrt.yml:
```yaml
---
!include device.yml
category: Device/Sensor
requires: [RegDevice]
```


device.yml:
```yaml
---
name: HTS221
description: Humidity and Temperature Sensor 
datasheet: https://www.st.com/content/ccc/resource/technical/document/datasheet/4d/9a/9c/ad/25/07/42/34/DM00116291.pdf/files/DM00116291.pdf/jcr:content/translations/en.DM00116291.pdf
mfr: STMicroelectronics
mfr_pn: HTS221TR
digikey_pn: 497-15382-1-ND
```

<br>
### Code style
<hr>

At this time there are not rigid code style standards for modules, but they should be documented to a higher standard than application code, because the idea is for it to be used by others. The jenkins job that runs unit testing also generate doxygen documentation, so doxygen formatted comments are preferred. If you use VS code, type /** and it will generate documentation stubs for you. 

```c
/**
 * @file file.c
 * @author your name (you@domain.com)
 * @brief 
 * @date 2020-03-05

 */


/**
 * @brief 
 * @param num 
 * @param num2 
 * @return int 
 */
int myFunction(int num, int num2);
```
