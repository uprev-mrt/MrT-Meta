.. _mrt-device-page:

mrt-device 
==========

The mrt-device tool allows user to create driver code from device description files. This provides very consistent drivers and also creates an easily parseable device file as a byproduct. This can be used for better documentation as well as a basis for automated testing of hardware.

.. note:: The code generated from this tool requires the Mrt `RegDev <https://github.com/uprev-mrt/device-regdevice>`_ module

Step 1: Define device: 
----------------------

Devices are defined with a YAML file. 

To generate a blank template to start from:

.. code-block:: bash

    mrt-device -t /path/to/file.yml


example from `hts221 driver <https://github.com/uprev-mrt/device-hts221>`_

.. code-block::  yaml

    ---
    name: HTS221
    description: Humidity and Temperature Sensor 
    category: Device
    requires: [RegDevice,Platform]
    datasheet: https://www.st.com/content/ccc/resource/technical/document/datasheet/4d/9a/9c/ad/25/07/42/34/DM00116291.pdf/files/DM00116291.pdf/jcr:content/translations/en.DM00116291.pdf
    mfg: STMicroelectronics
    mfg_pn: HTS221TR
    digikey_pn: 497-15382-1-ND

    prefix: HTS
    bus: I2C
    i2c_addr: 0xBE


    ###########################################################################################################
    #                                   Registers                                                             #
    ###########################################################################################################

    registers:
    - WHO_AM_I:     { addr: 0x0F , type: uint8_t, perm: R, desc:  Id Register, default: 0xBC}                
    - AV_CONF:      { addr: 0x10 , type: uint8_t, perm: RW, desc: Humidity and temperature resolution mode}
    - CTRL1:        { addr: 0x20 , type: uint8_t, perm: RW, desc: Control register 1}
    - CTRL2:        { addr: 0x21 , type: uint8_t, perm: RW, desc: Control register 2}
    - CTRL3:        { addr: 0x22 , type: uint8_t, perm: RW, desc: Control register 3}
    - STATUS:       { addr: 0x27 , type: uint8_t, perm: R, desc: Status register}
    - HUMIDITY_OUT: { addr: 0x28 , type: int16_t, perm: R, desc: Relative humidity data }
    - TEMP_OUT:     { addr: 0x2A , type: int16_t, perm: R, desc: Temperature data}
    
    - H0_rH_x2:     { addr: 0x30 , type: uint8_t, perm: R, desc: Calibration data}
    - H1_rH_x2:     { addr: 0x31 , type: uint8_t, perm: R, desc: Calibration data}
    - T0_DEGC_x8:   { addr: 0x32 , type: uint8_t, perm: R, desc: Calibration data}
    - T1_DEGC_x8:   { addr: 0x33 , type: uint8_t, perm: R, desc: Calibration data}
    - T1T0_MSB:     { addr: 0x35 , type: uint8_t, perm: R, desc: Calibration data}
    - H0_T0_OUT:    { addr: 0x36 , type: int16_t, perm: R, desc: Calibration data}
    - H1_T0_OUT:    { addr: 0x3A , type: int16_t, perm: R, desc: Calibration data}
    - T0_OUT:       { addr: 0x3C , type: int16_t, perm: R, desc: Calibration data}
    - T1_OUT:       { addr: 0x3E , type: int16_t, perm: R, desc: Calibration data}

    ###########################################################################################################
    #                                   FIELDS                                                                #
    ###########################################################################################################
    fields:
    - STATUS:
        - TEMP_READY: { mask: 0x01, desc: indicates that a temperature reading is ready }
        - HUM_READY: { mask: 0x02, desc: indicates that a humidity reading is ready }

    - CTRL1:
        - PD: {mask: 0x80, desc: power down mode}
        - BDU: {mask: 0x04, desc: Block Data update. Prevents update until LSB of data is read}
        - ODR:
            mask: 0x03
            desc: Selects the Output rate for the sensor data
            vals:
            - ONESHOT: { val: 0, desc: readings must be requested}
            - 1HZ: { val: 1, desc: 1 hz sampling}
            - 7HZ: { val: 2, desc: 7 hz sampling}
            - 12_5HZ: { val: 3, desc: 12.5 hz sampling}
    
    - CTRL2:
        - BOOT: {mask: 0x80, desc: Reboot memory content}
        - HEATER: {mask: 0x02, desc: Enable intenal heating element}
        - ONESHOT: {mask: 0x01, desc: Start conversion for new data}
    
    - TEMP_OUT: 
        - TEMP_OUT: {mask: 0xFFFF, desc: Current ADC reading for temperature sensor}

    - HUMIDITY_OUT:
        - HUM_OUT: {mask: 0xFFFF, desc: Current ADC reading for humidity sensor}

    ###########################################################################################################
    #                                   Preset Configs                                                        #
    ###########################################################################################################
    configs:
    - auto_1hz: 
        desc: Sets device to update every second
        registers:
            - CTRL2: {BOOT: 1, delay: 20} #20 ms delay after register write
            - CTRL1: { ODR: 1HZ, BDU: 1}





The descriptor file contains device information such as part numbers, links to datashees, and other relevant information. It also contains definitions of registers and data structures on the device. The entities in the definition are:

Registers 
~~~~~~~~~

``registers`` are individualy addressable memory registers on the device. each register can have the folowing attributes:

*   **addr**: register address on device
*   **type**: register type, (default is uin8_t)
*   **perm**: premissions on register R for read, W for write
*   **desc**: description of register. used for code documentation 
*   **default**: default value of the register

Fields 
~~~~~~

``fields`` are data fields contained in registers. They are grouped by register and they contain the following attributes:

*   **mask** : this specifies the mask for the field. This is used to mask and shift data to match the field. 
*   **vals** : this is a list of possible values and their descriptions for the field. 

.. note:: If a field is defined with a single bit mask, and no values, it is interpretted as a 'flag'. Flag fields have macros generated for setting, clearing, and checking them.

Configs 
~~~~~~~
``Configs`` allow the user to define preset configs for common use cases. This will create a macro for setting up the registers

.. code-block:: C 

    /**
    * @brief Sets device to update every second
    * @param dev ptr to HTS221 device
    */
    #define HTS_LOAD_CONFIG_AUTO_1HZ(dev) \
    hts_write_reg( (dev), &(dev)->mCtrl2, 0x80);     /* BOOT: 1 */                    \
    MRT_DELAY_MS(20);                                /* Delay for CTRL2 */ \
    hts_write_reg( (dev), &(dev)->mCtrl1, 0x05);     /* ODR: 1HZ , BDU: 1 */          \


Step 2: generate the code
-------------------------

To generate the code, use mrt-device and specify an input and an output path:

.. code-block:: bash

    mrt-device -i device.yaml -o .


The tool will generate 3 files (using `hts221 <https://github.com/uprev-mrt/device-hts221>`_ as an example):

* **hts221.h :** header file for driver
* **hts221.c :** Source file for driver
* **hts221_dev.h :** Macros generated from device file. this contains macros for addresses, values, masks, and functions for accessing fields/flags in registers. 

Step 3: customize
-----------------

This will provide a good base with access to all of the register. To add more functionality you can add to the code. If you want to ability to modify the device file further, keep your code inside of the 'user code' blocks provided:

.. code-block:: C

    /*user-block-init-start*/
    /*user-block-init-end*/


If the device does not follow the normal register access schemes, you can specify your own, and redirect the mrt_regdev_t fRead and fWrite function pointers to them. 

.. code-block:: C

    /**
      *@brief writes buffer to address of device
      *@param dev ptr to generic register device
      *@param addr address in memory to write
      *@param data ptr to data to be written
      *param len length of data to write
      *@return status (type defined by platform)
      */
    mrt_status_t my_write_function(mrt_regdev_t* dev, uint32_t addr, uint8_t* data,int len );

    static mrt_status_t hts_init(hts221_t* dev)
    {   
        /*user-block-init-start*/
        dev->mRegDev.fWrite = my_write_function;
        /*user-block-init-end*/
        return MRT_STATUS_OK;
    }
