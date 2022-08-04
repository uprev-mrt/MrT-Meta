
stc3117
=======

- Generated with `MrT Device Utility <https://github.com/uprev-mrt/mrtutils/wiki/mrt-device>`_
- Bus:  I2C
- RegMap: `Register Map <Regmap.html>`_
- Datasheet: `https://www.st.com/conte... <https://www.st.com/content/ccc/resource/technical/document/datasheet/ea/b5/01/6e/dd/f0/49/3e/DM00105047.pdf/files/DM00105047.pdf/jcr:content/translations/en.DM00105047.pdf>`_
- DigiKey: `497-15387-1-ND <https://www.digikey.com/products/en?KeyWords=497-15387-1-ND>`_
- I2C Address: 0xE0


Description
-----------

Gas gauge IC with battery charger control

.. *user-block-description-start*

.. *user-block-description-end*





Register Map
------------

=================     ================     ================     ================     ================     ================
Name                    Address             Type                  Access              Default               Description
=================     ================     ================     ================     ================     ================
MODE_                  0x00                 uint8                RW                   0x00                 Mode register        
CTRL_                  0x01                 uint8                RW                   0x00                 Control and status register
SOC_                   0x02                 uint16               RW                   0x0000               Battery SOC (LSB = 1/512 %)
COUNTER_               0x04                 uint16               R                    0x0000               Number of conversions
CURRENT_               0x06                 uint16               R                    0x0000               Battery current      
VOLTAGE_               0x08                 uint16               R                    0x0000               Battery voltage (LSB = 2.2 mV)
TEMPERATURE_           0x0A                 uint8                R                    0x00                 Temperature in degrees C (LSB = 1deg C )
AVG_CURRENT_           0x0B                 uint16               RW                   0x0000               Battery average current or SOC change rate
OCV_                   0x0D                 uint16               RW                   0x0000               OCV register (LSV = 0.55 mV)
CC_CNF_                0x0F                 uint16               RW                   0x018B               Battery average current or SOC change rate
VM_CNF_                0x11                 uint16               RW                   0x0141               Voltage gas gauge algorithm parameter
ALARM_SOC_             0x13                 uint8                RW                   0x02                 SOC alarm level in (LSB = 0.5%)
ALARM_VOLTAGE_         0x14                 uint8                RW                   0xAA                 Battery low voltage alarm level (LSB = 17.6 mV)
CURRENT_THRES_         0x15                 uint8                RW                   0x0A                 Current threshold for current monitoring (LSB = 47.04 uV )
CMONIT_COUNT_          0x16                 uint8                R                    0x78                 Current monitoring counter
CMONIT_MAX_            0x17                 uint8                RW                   0x78                 Maximum counter value for current monitoring
ID_                    0x18                 uint8                R                    0x16                 Part type ID = 16h   
CC_ADJ_                0x1B                 uint16               R                    0x0000               Coulomb counter adjustment register
VM_ADJ_                0x1D                 uint16               R                    0x0000               Voltage mode adjustment register
=================     ================     ================     ================     ================     ================





Registers
---------





----------

.. _MODE:

MODE
----

:Address: **[0x00]**

Mode register

.. *user-block-mode-start*

.. *user-block-mode-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |FORCE_VM |FORCE_CC |GG_RUN   |ALM_ENA  |FORCE_CD |BIBATD_PU|VMODE              |
+------------+---------+---------+---------+---------+---------+---------+-------------------+

Flags
~~~~~

:VMODE: Power saving voltage mode
:BIBATD_PU: BATD internal pull-up enable
:FORCE_CD: Force CD output high
:ALM_ENA: Enable Alarm function
:GG_RUN: creates a flag at bit 1 of the DUMMY register
:FORCE_CC: Force the relaxation timer to switch to the Coulomb counter (CC) state
:FORCE_VM: Force the relaxation timer to switch to voltage mode (VM) state



----------

.. _CTRL:

CTRL
----

:Address: **[0x01]**

Control and status register

.. *user-block-ctrl-start*

.. *user-block-ctrl-end*

+------------+----+----+----+----+----+----+----+----+
|Bit         |7   |6   |5   |4   |3   |2   |1   |0   |
+============+====+====+====+====+====+====+====+====+
| **Field**  |CTRL                                   |
+------------+---------------------------------------+




----------

.. _SOC:

SOC
---

:Address: **[0x02]**

Battery SOC (LSB = 1/512 %)

.. *user-block-soc-start*

.. *user-block-soc-end*

+------------+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|Bit         |15 |14 |13 |12 |11 |10 |9  |8  |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+===+===+===+===+===+===+===+===+
| **Field**  |                                                               |
+------------+---------------------------------------------------------------+


Fields
~~~~~~

:SOC: Battery SOC (LSB = 1/512 %)



----------

.. _COUNTER:

COUNTER
-------

:Address: **[0x04]**
:Default: **[0x0000]**

Number of conversions

.. *user-block-counter-start*

.. *user-block-counter-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |15     |14     |13     |12     |11     |10     |9      |8      |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                                                                                                                               |
+------------+-------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:COUNTER: Number of conversions



----------

.. _CURRENT:

CURRENT
-------

:Address: **[0x06]**
:Default: **[0x0000]**

Battery current

.. *user-block-current-start*

.. *user-block-current-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |15     |14     |13     |12     |11     |10     |9      |8      |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                                                                                                                               |
+------------+-------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:CURRENT: Battery current



----------

.. _VOLTAGE:

VOLTAGE
-------

:Address: **[0x08]**
:Default: **[0x0000]**

Battery voltage (LSB = 2.2 mV)

.. *user-block-voltage-start*

.. *user-block-voltage-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |15     |14     |13     |12     |11     |10     |9      |8      |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                                                                                                                               |
+------------+-------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:VOLTAGE: Battery voltage (LSB = 2.2 mV)



----------

.. _TEMPERATURE:

TEMPERATURE
-----------

:Address: **[0x0A]**
:Default: **[0x00]**

Temperature in degrees C (LSB = 1deg C )

.. *user-block-temperature-start*

.. *user-block-temperature-end*

+------------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+
|Bit         |7          |6          |5          |4          |3          |2          |1          |0          |
+============+===========+===========+===========+===========+===========+===========+===========+===========+
| **Field**  |                                                                                               |
+------------+-----------------------------------------------------------------------------------------------+


Fields
~~~~~~

:TEMPERATURE: Temperature in degrees C (LSB = 1deg C )



----------

.. _AVG_CURRENT:

AVG_CURRENT
-----------

:Address: **[0x0B]**
:Default: **[0x0000]**

Battery average current or SOC change rate

.. *user-block-avg_current-start*

.. *user-block-avg_current-end*

+------------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+
|Bit         |15         |14         |13         |12         |11         |10         |9          |8          |7          |6          |5          |4          |3          |2          |1          |0          |
+============+===========+===========+===========+===========+===========+===========+===========+===========+===========+===========+===========+===========+===========+===========+===========+===========+
| **Field**  |                                                                                                                                                                                               |
+------------+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:AVG_CURRENT: Battery average current or SOC change rate



----------

.. _OCV:

OCV
---

:Address: **[0x0D]**
:Default: **[0x0000]**

OCV register (LSV = 0.55 mV)

.. *user-block-ocv-start*

.. *user-block-ocv-end*

+------------+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+---+
|Bit         |15 |14 |13 |12 |11 |10 |9  |8  |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+===+===+===+===+===+===+===+===+
| **Field**  |                                                               |
+------------+---------------------------------------------------------------+


Fields
~~~~~~

:OCV: OCV register (LSV = 0.55 mV)



----------

.. _CC_CNF:

CC_CNF
------

:Address: **[0x0F]**
:Default: **[0x018B]**

Battery average current or SOC change rate

.. *user-block-cc_cnf-start*

.. *user-block-cc_cnf-end*

+------------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
|Bit         |15    |14    |13    |12    |11    |10    |9     |8     |7     |6     |5     |4     |3     |2     |1     |0     |
+============+======+======+======+======+======+======+======+======+======+======+======+======+======+======+======+======+
| **Field**  |                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:CC_CNF: Battery average current or SOC change rate



----------

.. _VM_CNF:

VM_CNF
------

:Address: **[0x11]**
:Default: **[0x0141]**

Voltage gas gauge algorithm parameter

.. *user-block-vm_cnf-start*

.. *user-block-vm_cnf-end*

+------------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
|Bit         |15    |14    |13    |12    |11    |10    |9     |8     |7     |6     |5     |4     |3     |2     |1     |0     |
+============+======+======+======+======+======+======+======+======+======+======+======+======+======+======+======+======+
| **Field**  |                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:VM_CNF: Voltage gas gauge algorithm parameter



----------

.. _ALARM_SOC:

ALARM_SOC
---------

:Address: **[0x13]**
:Default: **[0x02]**

SOC alarm level in (LSB = 0.5%)

.. *user-block-alarm_soc-start*

.. *user-block-alarm_soc-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                               |
+------------+-------------------------------------------------------------------------------+


Fields
~~~~~~

:ALARM_SOC: SOC alarm level in (LSB = 0.5%)



----------

.. _ALARM_VOLTAGE:

ALARM_VOLTAGE
-------------

:Address: **[0x14]**
:Default: **[0xAA]**

Battery low voltage alarm level (LSB = 17.6 mV)

.. *user-block-alarm_voltage-start*

.. *user-block-alarm_voltage-end*

+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|Bit         |7            |6            |5            |4            |3            |2            |1            |0            |
+============+=============+=============+=============+=============+=============+=============+=============+=============+
| **Field**  |                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:ALARM_VOLTAGE: Battery low voltage alarm level (LSB = 17.6 mV)



----------

.. _CURRENT_THRES:

CURRENT_THRES
-------------

:Address: **[0x15]**
:Default: **[0x0A]**

Current threshold for current monitoring (LSB = 47.04 uV )

.. *user-block-current_thres-start*

.. *user-block-current_thres-end*

+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|Bit         |7            |6            |5            |4            |3            |2            |1            |0            |
+============+=============+=============+=============+=============+=============+=============+=============+=============+
| **Field**  |                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:CURRENT_THRES: Current threshold for current monitoring (LSB = 47.04 uV )



----------

.. _CMONIT_COUNT:

CMONIT_COUNT
------------

:Address: **[0x16]**
:Default: **[0x78]**

Current monitoring counter

.. *user-block-cmonit_count-start*

.. *user-block-cmonit_count-end*

+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|Bit         |7           |6           |5           |4           |3           |2           |1           |0           |
+============+============+============+============+============+============+============+============+============+
| **Field**  |                                                                                                       |
+------------+-------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:CMONIT_COUNT: Current monitoring counter



----------

.. _CMONIT_MAX:

CMONIT_MAX
----------

:Address: **[0x17]**
:Default: **[0x78]**

Maximum counter value for current monitoring

.. *user-block-cmonit_max-start*

.. *user-block-cmonit_max-end*

+------------+----------+----------+----------+----------+----------+----------+----------+----------+
|Bit         |7         |6         |5         |4         |3         |2         |1         |0         |
+============+==========+==========+==========+==========+==========+==========+==========+==========+
| **Field**  |                                                                                       |
+------------+---------------------------------------------------------------------------------------+


Fields
~~~~~~

:CMONIT_MAX: Maximum counter value for current monitoring



----------

.. _ID:

ID
--

:Address: **[0x18]**
:Default: **[0x16]**

Part type ID = 16h

.. *user-block-id-start*

.. *user-block-id-end*

+------------+---+---+---+---+---+---+---+---+
|Bit         |7  |6  |5  |4  |3  |2  |1  |0  |
+============+===+===+===+===+===+===+===+===+
| **Field**  |                               |
+------------+-------------------------------+


Fields
~~~~~~

:ID: Part type ID = 16h



----------

.. _CC_ADJ:

CC_ADJ
------

:Address: **[0x1B]**
:Default: **[0x0000]**

Coulomb counter adjustment register

.. *user-block-cc_adj-start*

.. *user-block-cc_adj-end*

+------------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
|Bit         |15    |14    |13    |12    |11    |10    |9     |8     |7     |6     |5     |4     |3     |2     |1     |0     |
+============+======+======+======+======+======+======+======+======+======+======+======+======+======+======+======+======+
| **Field**  |                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:CC_ADJ: Coulomb counter adjustment register



----------

.. _VM_ADJ:

VM_ADJ
------

:Address: **[0x1D]**
:Default: **[0x0000]**

Voltage mode adjustment register

.. *user-block-vm_adj-start*

.. *user-block-vm_adj-end*

+------------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+------+
|Bit         |15    |14    |13    |12    |11    |10    |9     |8     |7     |6     |5     |4     |3     |2     |1     |0     |
+============+======+======+======+======+======+======+======+======+======+======+======+======+======+======+======+======+
| **Field**  |                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:VM_ADJ: Voltage mode adjustment register

