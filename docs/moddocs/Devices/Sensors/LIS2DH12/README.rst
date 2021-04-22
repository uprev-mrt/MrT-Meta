
LIS2DH12
========

- Generated with `MrT Device Utility <https://github.com/uprev-mrt/mrtutils/wiki/mrt-device>`_
- Bus:  I2C,SPI
- RegMap: `Register Map <Regmap.html>`_
- Datasheet: `http://www.st.com/conten... <http://www.st.com/content/ccc/resource/technical/document/datasheet/12/c0/5c/36/b9/58/46/f2/DM00091513.pdf/files/DM00091513.pdf/jcr:content/translations/en.DM00091513.pdf>`_
- DigiKey: `497-14851-1-ND <https://www.digikey.com/products/en?KeyWords=497-14851-1-ND>`_
- I2C Address: 0x32


Description
-----------

MEMS Digital Output Motion Sensor Ultra Low-Power High Performance 3-Axis "Femto" Accelerometer

.. *user-block-description-start*

.. *user-block-description-end*





Register Map
------------

=================     ================     ================     ================     ================     ================
Name                    Address             Type                  Access              Default               Description
=================     ================     ================     ================     ================     ================
STATUS_AUX_            0x07                 uint8                R                    0x00                 n/a                  
OUT_TEMP_              0x0C                 uint16               R                    0x0000               Temperature sensor data
WHO_AM_I_              0x0F                 uint8                R                    0x33                 Device identification register
CTRL0_                 0x1E                 uint8                RW                   0x10                 Control Register 0   
TEMP_CFG_              0x1F                 uint8                RW                   0x07                 n/a                  
CTRL1_                 0x20                 uint8                RW                   0x07                 Control Register 1   
CTRL2_                 0x21                 uint8                RW                   0x00                 Control Register 2   
CTRL3_                 0x22                 uint8                RW                   0x00                 Control Register 3   
CTRL4_                 0x23                 uint8                RW                   0x00                 Control Register 4   
CTRL5_                 0x24                 uint8                RW                   0x00                 Control Register 5   
CTRL6_                 0x25                 uint8                RW                   0x00                 Control Register 6   
REFERENCE_             0x26                 uint8                RW                   0x00                 Reference value for interrupt generation
STATUS_                0x27                 uint8                R                    0x00                 n/a                  
OUT_X_                 0x28                 uint16               R                    0x0000               X-axis acceleration data
OUT_Y_                 0x2A                 uint16               R                    0x0000               Y-axis acceleration data
OUT_Z_                 0x2C                 uint16               R                    0x0000               Z-axis acceleration data
FIFO_CTRL_             0x2E                 uint8                RW                   0x00                 Fifo Control register
FIFO_SRC_              0x2F                 uint8                R                    0x00                 Fifo status register 
INT1_CFG_              0x30                 uint8                RW                   0x00                 Interrupt 1 config register
INT1_SRC_              0x31                 uint8                R                    0x00                 Interrupt 1 source register
INT1_THS_              0x32                 uint8                RW                   0x00                 Interrupt 1 threshold register
INT1_DURATION_         0x33                 uint8                RW                   0x00                 Interrupt 1 duration register
INT2_CFG_              0x34                 uint8                RW                   0x00                 Interrupt 2 config register
INT2_SRC_              0x35                 uint8                R                    0x00                 Interrupt 2 source register
INT2_THS_              0x36                 uint8                RW                   0x00                 Interrupt 2 threshold register
INT2_DURATION_         0x37                 uint8                RW                   0x00                 Interrupt 2 duration register
CLICK_CFG_             0x38                 uint8                RW                   0x00                 Click config         
CLICK_SRC_             0x39                 uint8                R                    0x00                 Click source         
CLICK_THS_             0x3A                 uint8                RW                   0x00                 Click Threshold      
TIME_LIMIT_            0x3B                 uint8                RW                   0x00                 Click time limit     
TIME_LATENCY_          0x3C                 uint8                RW                   0x00                 Click time latency   
TIME_WINDOW_           0x3D                 uint8                RW                   0x00                 Click time window    
ACT_THS_               0x3E                 uint8                RW                   0x00                 Activity threshold   
ACT_DUR_               0x3F                 uint8                RW                   0x00                 Activity duration    
=================     ================     ================     ================     ================     ================





Registers
=========





----------

.. _STATUS_AUX:

STATUS_AUX
----------

:Address: **[0x07]**

n/a

.. *user-block-status_aux-start*

.. *user-block-status_aux-end*

+------------+----------+----------+----------+----------+----------+----------+----------+----------+
|Bit         |7         |6         |5         |4         |3         |2         |1         |0         |
+============+==========+==========+==========+==========+==========+==========+==========+==========+
| **Field**  |STATUS_AUX                                                                             |
+------------+---------------------------------------------------------------------------------------+




----------

.. _OUT_TEMP:

OUT_TEMP
--------

:Address: **[0x0C]**

Temperature sensor data

.. *user-block-out_temp-start*

.. *user-block-out_temp-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |15      |14      |13      |12      |11      |10      |9       |8       |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+========+
| **Field**  |OUT_TEMP                                                                                                                                       |
+------------+-----------------------------------------------------------------------------------------------------------------------------------------------+




----------

.. _WHO_AM_I:

WHO_AM_I
--------

:Address: **[0x0F]**
:Default: **[0x33]**

Device identification register

.. *user-block-who_am_i-start*

.. *user-block-who_am_i-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |                                                                       |
+------------+-----------------------------------------------------------------------+


Fields
~~~~~~

:WHO_AM_I: Device identification register



----------

.. _CTRL0:

CTRL0
-----

:Address: **[0x1E]**
:Default: **[0x10]**

Control Register 0

.. *user-block-ctrl0-start*

.. *user-block-ctrl0-end*

+------------+-----+-----+-----+-----+-----+-----+-----+-----+
|Bit         |7    |6    |5    |4    |3    |2    |1    |0    |
+============+=====+=====+=====+=====+=====+=====+=====+=====+
| **Field**  |                                               |
+------------+-----------------------------------------------+


Fields
~~~~~~

:CTRL0: Control Register 0



----------

.. _TEMP_CFG:

TEMP_CFG
--------

:Address: **[0x1F]**
:Default: **[0x07]**

n/a

.. *user-block-temp_cfg-start*

.. *user-block-temp_cfg-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |                                                                       |
+------------+-----------------------------------------------------------------------+


Fields
~~~~~~

:TEMP_CFG: n/a



----------

.. _CTRL1:

CTRL1
-----

:Address: **[0x20]**
:Default: **[0x07]**

Control Register 1

.. *user-block-ctrl1-start*

.. *user-block-ctrl1-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                       |LOW_PWR|Z_EN   |Y_EN   |X_EN           |
+------------+-----------------------+-------+-------+-------+---------------+

Flags
~~~~~

:X_EN: X-axis enable
:Y_EN: Y-axis enable
:Z_EN: Z-axis enable
:LOW_PWR: Low-power mode enable

Fields
~~~~~~

:ODR: Data rate selection

=====================     ================     ================================================================
Name                       Value               Descriptions
=====================     ================     ================================================================
PWR_DWN                     b0000                   Power-down mode
1Hz                         b0001                   HR/ Normal / Low-power mode (1 Hz)
10Hz                        b1000                   HR/ Normal / Low-power mode (10 Hz)
25Hz                        b1001                   HR/ Normal / Low-power mode (25 Hz)
50Hz                        b1000000                HR/ Normal / Low-power mode (50 Hz)
100Hz                       b1000001                HR/ Normal / Low-power mode (100 Hz)
200Hz                       b1001000                HR/ Normal / Low-power mode (200 Hz)
400Hz                       b1001001                HR/ Normal / Low-power mode (400 Hz)
1620Hz                      b0111                   Low-power mode (1.620 kHz)
5376Hz                      b0111                   HR/ Normal (1.344 kHz) / Low-power mode (5.376 kHz)
=====================     ================     ================================================================




----------

.. _CTRL2:

CTRL2
-----

:Address: **[0x21]**
:Default: **[0x00]**

Control Register 2

.. *user-block-ctrl2-start*

.. *user-block-ctrl2-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                       |FDS    |HPCLICK|HP_IA2 |HP_IA1         |
+------------+-----------------------+-------+-------+-------+---------------+

Flags
~~~~~

:HP_IA1: High-pass filter enabled for AOI function on Interrupt 1
:HP_IA2: High-pass filter enabled for AOI function on Interrupt 2
:HPCLICK: High-pass filter enabled for Click function
:FDS: Filtered data selection



----------

.. _CTRL3:

CTRL3
-----

:Address: **[0x22]**
:Default: **[0x00]**

Control Register 3

.. *user-block-ctrl3-start*

.. *user-block-ctrl3-end*

+------------+-----+-----+-----+-----+-----+-----+-----+-----+
|Bit         |7    |6    |5    |4    |3    |2    |1    |0    |
+============+=====+=====+=====+=====+=====+=====+=====+=====+
| **Field**  |                                               |
+------------+-----------------------------------------------+


Fields
~~~~~~

:CTRL3: Control Register 3



----------

.. _CTRL4:

CTRL4
-----

:Address: **[0x23]**
:Default: **[0x00]**

Control Register 4

.. *user-block-ctrl4-start*

.. *user-block-ctrl4-end*

+------------+-----+-----+-----+-----+-----+-----+-----+-----+
|Bit         |7    |6    |5    |4    |3    |2    |1    |0    |
+============+=====+=====+=====+=====+=====+=====+=====+=====+
| **Field**  |                                               |
+------------+-----------------------------------------------+


Fields
~~~~~~

:CTRL4: Control Register 4



----------

.. _CTRL5:

CTRL5
-----

:Address: **[0x24]**
:Default: **[0x00]**

Control Register 5

.. *user-block-ctrl5-start*

.. *user-block-ctrl5-end*

+------------+-----+-----+-----+-----+-----+-----+-----+-----+
|Bit         |7    |6    |5    |4    |3    |2    |1    |0    |
+============+=====+=====+=====+=====+=====+=====+=====+=====+
| **Field**  |                                               |
+------------+-----------------------------------------------+


Fields
~~~~~~

:CTRL5: Control Register 5



----------

.. _CTRL6:

CTRL6
-----

:Address: **[0x25]**
:Default: **[0x00]**

Control Register 6

.. *user-block-ctrl6-start*

.. *user-block-ctrl6-end*

+------------+-----+-----+-----+-----+-----+-----+-----+-----+
|Bit         |7    |6    |5    |4    |3    |2    |1    |0    |
+============+=====+=====+=====+=====+=====+=====+=====+=====+
| **Field**  |                                               |
+------------+-----------------------------------------------+


Fields
~~~~~~

:CTRL6: Control Register 6



----------

.. _REFERENCE:

REFERENCE
---------

:Address: **[0x26]**
:Default: **[0x00]**

Reference value for interrupt generation

.. *user-block-reference-start*

.. *user-block-reference-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                               |
+------------+-------------------------------------------------------------------------------+


Fields
~~~~~~

:REFERENCE: Reference value for interrupt generation



----------

.. _STATUS:

STATUS
------

:Address: **[0x27]**

n/a

.. *user-block-status-start*

.. *user-block-status-end*

+------------+------+------+------+------+------+------+------+------+
|Bit         |7     |6     |5     |4     |3     |2     |1     |0     |
+============+======+======+======+======+======+======+======+======+
| **Field**  |STATUS                                                 |
+------------+-------------------------------------------------------+




----------

.. _OUT_X:

OUT_X
-----

:Address: **[0x28]**

X-axis acceleration data

.. *user-block-out_x-start*

.. *user-block-out_x-end*

+------------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
|Bit         |15   |14   |13   |12   |11   |10   |9    |8    |7    |6    |5    |4    |3    |2    |1    |0    |
+============+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+
| **Field**  |OUT_X                                                                                          |
+------------+-----------------------------------------------------------------------------------------------+




----------

.. _OUT_Y:

OUT_Y
-----

:Address: **[0x2A]**

Y-axis acceleration data

.. *user-block-out_y-start*

.. *user-block-out_y-end*

+------------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
|Bit         |15   |14   |13   |12   |11   |10   |9    |8    |7    |6    |5    |4    |3    |2    |1    |0    |
+============+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+
| **Field**  |OUT_Y                                                                                          |
+------------+-----------------------------------------------------------------------------------------------+




----------

.. _OUT_Z:

OUT_Z
-----

:Address: **[0x2C]**

Z-axis acceleration data

.. *user-block-out_z-start*

.. *user-block-out_z-end*

+------------+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+-----+
|Bit         |15   |14   |13   |12   |11   |10   |9    |8    |7    |6    |5    |4    |3    |2    |1    |0    |
+============+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+=====+
| **Field**  |OUT_Z                                                                                          |
+------------+-----------------------------------------------------------------------------------------------+




----------

.. _FIFO_CTRL:

FIFO_CTRL
---------

:Address: **[0x2E]**
:Default: **[0x00]**

Fifo Control register

.. *user-block-fifo_ctrl-start*

.. *user-block-fifo_ctrl-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                               |
+------------+-------------------------------------------------------------------------------+


Fields
~~~~~~

:FIFO_CTRL: Fifo Control register



----------

.. _FIFO_SRC:

FIFO_SRC
--------

:Address: **[0x2F]**

Fifo status register

.. *user-block-fifo_src-start*

.. *user-block-fifo_src-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |FIFO_SRC                                                               |
+------------+-----------------------------------------------------------------------+




----------

.. _INT1_CFG:

INT1_CFG
--------

:Address: **[0x30]**
:Default: **[0x00]**

Interrupt 1 config register

.. *user-block-int1_cfg-start*

.. *user-block-int1_cfg-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |                                                                       |
+------------+-----------------------------------------------------------------------+


Fields
~~~~~~

:INT1_CFG: Interrupt 1 config register



----------

.. _INT1_SRC:

INT1_SRC
--------

:Address: **[0x31]**

Interrupt 1 source register

.. *user-block-int1_src-start*

.. *user-block-int1_src-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |INT1_SRC                                                               |
+------------+-----------------------------------------------------------------------+




----------

.. _INT1_THS:

INT1_THS
--------

:Address: **[0x32]**
:Default: **[0x00]**

Interrupt 1 threshold register

.. *user-block-int1_ths-start*

.. *user-block-int1_ths-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |                                                                       |
+------------+-----------------------------------------------------------------------+


Fields
~~~~~~

:INT1_THS: Interrupt 1 threshold register



----------

.. _INT1_DURATION:

INT1_DURATION
-------------

:Address: **[0x33]**
:Default: **[0x00]**

Interrupt 1 duration register

.. *user-block-int1_duration-start*

.. *user-block-int1_duration-end*

+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|Bit         |7            |6            |5            |4            |3            |2            |1            |0            |
+============+=============+=============+=============+=============+=============+=============+=============+=============+
| **Field**  |                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:INT1_DURATION: Interrupt 1 duration register



----------

.. _INT2_CFG:

INT2_CFG
--------

:Address: **[0x34]**
:Default: **[0x00]**

Interrupt 2 config register

.. *user-block-int2_cfg-start*

.. *user-block-int2_cfg-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |                                                                       |
+------------+-----------------------------------------------------------------------+


Fields
~~~~~~

:INT2_CFG: Interrupt 2 config register



----------

.. _INT2_SRC:

INT2_SRC
--------

:Address: **[0x35]**

Interrupt 2 source register

.. *user-block-int2_src-start*

.. *user-block-int2_src-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |INT2_SRC                                                               |
+------------+-----------------------------------------------------------------------+




----------

.. _INT2_THS:

INT2_THS
--------

:Address: **[0x36]**
:Default: **[0x00]**

Interrupt 2 threshold register

.. *user-block-int2_ths-start*

.. *user-block-int2_ths-end*

+------------+--------+--------+--------+--------+--------+--------+--------+--------+
|Bit         |7       |6       |5       |4       |3       |2       |1       |0       |
+============+========+========+========+========+========+========+========+========+
| **Field**  |                                                                       |
+------------+-----------------------------------------------------------------------+


Fields
~~~~~~

:INT2_THS: Interrupt 2 threshold register



----------

.. _INT2_DURATION:

INT2_DURATION
-------------

:Address: **[0x37]**
:Default: **[0x00]**

Interrupt 2 duration register

.. *user-block-int2_duration-start*

.. *user-block-int2_duration-end*

+------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+-------------+
|Bit         |7            |6            |5            |4            |3            |2            |1            |0            |
+============+=============+=============+=============+=============+=============+=============+=============+=============+
| **Field**  |                                                                                                               |
+------------+---------------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:INT2_DURATION: Interrupt 2 duration register



----------

.. _CLICK_CFG:

CLICK_CFG
---------

:Address: **[0x38]**
:Default: **[0x00]**

Click config

.. *user-block-click_cfg-start*

.. *user-block-click_cfg-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                               |
+------------+-------------------------------------------------------------------------------+


Fields
~~~~~~

:CLICK_CFG: Click config



----------

.. _CLICK_SRC:

CLICK_SRC
---------

:Address: **[0x39]**

Click source

.. *user-block-click_src-start*

.. *user-block-click_src-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |CLICK_SRC                                                                      |
+------------+-------------------------------------------------------------------------------+




----------

.. _CLICK_THS:

CLICK_THS
---------

:Address: **[0x3A]**
:Default: **[0x00]**

Click Threshold

.. *user-block-click_ths-start*

.. *user-block-click_ths-end*

+------------+---------+---------+---------+---------+---------+---------+---------+---------+
|Bit         |7        |6        |5        |4        |3        |2        |1        |0        |
+============+=========+=========+=========+=========+=========+=========+=========+=========+
| **Field**  |                                                                               |
+------------+-------------------------------------------------------------------------------+


Fields
~~~~~~

:CLICK_THS: Click Threshold



----------

.. _TIME_LIMIT:

TIME_LIMIT
----------

:Address: **[0x3B]**
:Default: **[0x00]**

Click time limit

.. *user-block-time_limit-start*

.. *user-block-time_limit-end*

+------------+----------+----------+----------+----------+----------+----------+----------+----------+
|Bit         |7         |6         |5         |4         |3         |2         |1         |0         |
+============+==========+==========+==========+==========+==========+==========+==========+==========+
| **Field**  |                                                                                       |
+------------+---------------------------------------------------------------------------------------+


Fields
~~~~~~

:TIME_LIMIT: Click time limit



----------

.. _TIME_LATENCY:

TIME_LATENCY
------------

:Address: **[0x3C]**
:Default: **[0x00]**

Click time latency

.. *user-block-time_latency-start*

.. *user-block-time_latency-end*

+------------+------------+------------+------------+------------+------------+------------+------------+------------+
|Bit         |7           |6           |5           |4           |3           |2           |1           |0           |
+============+============+============+============+============+============+============+============+============+
| **Field**  |                                                                                                       |
+------------+-------------------------------------------------------------------------------------------------------+


Fields
~~~~~~

:TIME_LATENCY: Click time latency



----------

.. _TIME_WINDOW:

TIME_WINDOW
-----------

:Address: **[0x3D]**
:Default: **[0x00]**

Click time window

.. *user-block-time_window-start*

.. *user-block-time_window-end*

+------------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+-----------+
|Bit         |7          |6          |5          |4          |3          |2          |1          |0          |
+============+===========+===========+===========+===========+===========+===========+===========+===========+
| **Field**  |                                                                                               |
+------------+-----------------------------------------------------------------------------------------------+


Fields
~~~~~~

:TIME_WINDOW: Click time window



----------

.. _ACT_THS:

ACT_THS
-------

:Address: **[0x3E]**
:Default: **[0x00]**

Activity threshold

.. *user-block-act_ths-start*

.. *user-block-act_ths-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                                                               |
+------------+---------------------------------------------------------------+


Fields
~~~~~~

:ACT_THS: Activity threshold



----------

.. _ACT_DUR:

ACT_DUR
-------

:Address: **[0x3F]**
:Default: **[0x00]**

Activity duration

.. *user-block-act_dur-start*

.. *user-block-act_dur-end*

+------------+-------+-------+-------+-------+-------+-------+-------+-------+
|Bit         |7      |6      |5      |4      |3      |2      |1      |0      |
+============+=======+=======+=======+=======+=======+=======+=======+=======+
| **Field**  |                                                               |
+------------+---------------------------------------------------------------+


Fields
~~~~~~

:ACT_DUR: Activity duration

