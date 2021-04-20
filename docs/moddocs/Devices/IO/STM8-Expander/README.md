
<h1>stm8_expander Device</h1>
<ul>
  <li> Generated with <a href="https://github.com/uprev-mrt/mrtutils/wiki/mrt-device">MrT Device Utility</a> </li>
  <li> Bus:  I2C, SPI</li>
  <li> RegMap: <a href="Regmap.html">Register Map</a>
  <li>Datasheet: <a href="https://www.st.com/resource/en/datasheet/stm8s003f3.pdf">https://www.st.com/resou...</a> </li>
  <li> DigiKey: <a href="https://www.digikey.com/products/en?KeyWords=497-18052-2-ND">497-18052-2-ND</a></li>
  <li> I2C Address: 0x42</li>
</ul>
<hr/>
<h2>Description: </h2>
<p>Driver for STM8 running custom GPIO expander firmware</p>

<!--*user-block-description-start*-->

<!--*user-block-description-end*-->
<br/>


<hr class="section">
<h2 class="right"> Register Map</h2>
<hr class="thick">

<table class="fields">
    <tr>
        <th>Name</th>
        <th>Address</th>
        <th>Type</th>
        <th>Access</th>
        <th>Default</th>
        <th>Description</th>
    </tr>
    <tr>
        <td><a href="#register_gpio_in_detail">GPIO_IN</a></td>
        <td>0x00</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Input values for gpio 0-15</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_out_detail">GPIO_OUT</a></td>
        <td>0x02</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Output values for gpio 0-15</td>
    </tr>
    <tr>
        <td><a href="#register_adc_0_val_detail">ADC_0_VAL</a></td>
        <td>0x06</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Output of ADC 0</td>
    </tr>
    <tr>
        <td><a href="#register_adc_1_val_detail">ADC_1_VAL</a></td>
        <td>0x08</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Output of ADC 1</td>
    </tr>
    <tr>
        <td><a href="#register_adc_2_val_detail">ADC_2_VAL</a></td>
        <td>0x0A</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Output of ADC 2</td>
    </tr>
    <tr>
        <td><a href="#register_adc_3_val_detail">ADC_3_VAL</a></td>
        <td>0x0C</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Output of ADC 3</td>
    </tr>
    <tr>
        <td><a href="#register_adc_4_val_detail">ADC_4_VAL</a></td>
        <td>0x0E</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Output of ADC 4</td>
    </tr>
    <tr>
        <td><a href="#register_irq_src_detail">IRQ_SRC</a></td>
        <td>0x10</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>latching Interrupt source mask</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_0_cfg_detail">GPIO_0_CFG</a></td>
        <td>0x20</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 0</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_1_cfg_detail">GPIO_1_CFG</a></td>
        <td>0x21</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 1</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_2_cfg_detail">GPIO_2_CFG</a></td>
        <td>0x22</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 2</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_3_cfg_detail">GPIO_3_CFG</a></td>
        <td>0x23</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 3</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_4_cfg_detail">GPIO_4_CFG</a></td>
        <td>0x24</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 4</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_5_cfg_detail">GPIO_5_CFG</a></td>
        <td>0x25</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 5</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_6_cfg_detail">GPIO_6_CFG</a></td>
        <td>0x26</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 6</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_7_cfg_detail">GPIO_7_CFG</a></td>
        <td>0x27</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 7</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_8_cfg_detail">GPIO_8_CFG</a></td>
        <td>0x28</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 8</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_9_cfg_detail">GPIO_9_CFG</a></td>
        <td>0x29</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 9</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_10_cfg_detail">GPIO_10_CFG</a></td>
        <td>0x2A</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 10</td>
    </tr>
    <tr>
        <td><a href="#register_gpio_11_cfg_detail">GPIO_11_CFG</a></td>
        <td>0x2B</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Configuration for GPIO 11</td>
    </tr>
    <tr>
        <td><a href="#register_adc_0_cfg_detail">ADC_0_CFG</a></td>
        <td>0x30</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Configuration for ADC 0</td>
    </tr>
    <tr>
        <td><a href="#register_adc_1_cfg_detail">ADC_1_CFG</a></td>
        <td>0x32</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Configuration for ADC 1</td>
    </tr>
    <tr>
        <td><a href="#register_adc_2_cfg_detail">ADC_2_CFG</a></td>
        <td>0x34</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Configuration for ADC 2</td>
    </tr>
    <tr>
        <td><a href="#register_adc_3_cfg_detail">ADC_3_CFG</a></td>
        <td>0x36</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Configuration for ADC 3</td>
    </tr>
    <tr>
        <td><a href="#register_adc_4_cfg_detail">ADC_4_CFG</a></td>
        <td>0x38</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Configuration for ADC 4</td>
    </tr>
    <tr>
        <td><a href="#register_pwm_config_detail">PWM_CONFIG</a></td>
        <td>0x40</td>
        <td>uint32</td>
        <td>RW</td>
        <td>0x00000000</td>
        <td>Configuration for PWM</td>
    </tr>
    <tr>
        <td><a href="#register_who_am_i_detail">WHO_AM_I</a></td>
        <td>0x60</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0xAB</td>
        <td>Device ID</td>
    </tr>
    <tr>
        <td><a href="#register_eeprom_mem_detail">EEPROM_MEM</a></td>
        <td>0x7F</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Start address of EEPROM memory on stm8. User can read/write up to 128 bytes starting at this address</td>
    </tr>

</table>



<hr class="section">
<h2 class="right"> Registers</h2>
<hr class="thick">



<div id="register_gpio_in_detail" class="packet">
<h2>GPIO_IN </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x00]</b></li>
</ul>

<p>Input values for gpio 0-15</p>
<!--*user-block-gpio_in-start*-->

<!--*user-block-gpio_in-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">GPIO_IN</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>GPIO_IN:</b> Input values for gpio 0-15


<div id="register_gpio_out_detail" class="packet">
<h2>GPIO_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x02]</b></li>
</ul>

<p>Output values for gpio 0-15</p>
<!--*user-block-gpio_out-start*-->

<!--*user-block-gpio_out-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">GPIO_OUT</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>GPIO_OUT:</b> Output values for gpio 0-15


<div id="register_adc_0_val_detail" class="packet">
<h2>ADC_0_VAL </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x06]</b></li>
</ul>

<p>Output of ADC 0</p>
<!--*user-block-adc_0_val-start*-->

<!--*user-block-adc_0_val-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">ADC_0_VAL</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>ADC_0_VAL:</b> Output of ADC 0


<div id="register_adc_1_val_detail" class="packet">
<h2>ADC_1_VAL </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x08]</b></li>
</ul>

<p>Output of ADC 1</p>
<!--*user-block-adc_1_val-start*-->

<!--*user-block-adc_1_val-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">ADC_1_VAL</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>ADC_1_VAL:</b> Output of ADC 1


<div id="register_adc_2_val_detail" class="packet">
<h2>ADC_2_VAL </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0A]</b></li>
</ul>

<p>Output of ADC 2</p>
<!--*user-block-adc_2_val-start*-->

<!--*user-block-adc_2_val-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">ADC_2_VAL</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>ADC_2_VAL:</b> Output of ADC 2


<div id="register_adc_3_val_detail" class="packet">
<h2>ADC_3_VAL </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0C]</b></li>
</ul>

<p>Output of ADC 3</p>
<!--*user-block-adc_3_val-start*-->

<!--*user-block-adc_3_val-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">ADC_3_VAL</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>ADC_3_VAL:</b> Output of ADC 3


<div id="register_adc_4_val_detail" class="packet">
<h2>ADC_4_VAL </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0E]</b></li>
</ul>

<p>Output of ADC 4</p>
<!--*user-block-adc_4_val-start*-->

<!--*user-block-adc_4_val-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">ADC_4_VAL</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>ADC_4_VAL:</b> Output of ADC 4


<div id="register_irq_src_detail" class="packet">
<h2>IRQ_SRC </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x10]</b></li>
</ul>

<p>latching Interrupt source mask</p>
<!--*user-block-irq_src-start*-->

<!--*user-block-irq_src-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">IRQ_SRC</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>IRQ_SRC:</b> latching Interrupt source mask


<div id="register_gpio_0_cfg_detail" class="packet">
<h2>GPIO_0_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x20]</b></li>
</ul>

<p>Configuration for GPIO 0</p>
<!--*user-block-gpio_0_cfg-start*-->

<!--*user-block-gpio_0_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_1_cfg_detail" class="packet">
<h2>GPIO_1_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x21]</b></li>
</ul>

<p>Configuration for GPIO 1</p>
<!--*user-block-gpio_1_cfg-start*-->

<!--*user-block-gpio_1_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_2_cfg_detail" class="packet">
<h2>GPIO_2_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x22]</b></li>
</ul>

<p>Configuration for GPIO 2</p>
<!--*user-block-gpio_2_cfg-start*-->

<!--*user-block-gpio_2_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_3_cfg_detail" class="packet">
<h2>GPIO_3_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x23]</b></li>
</ul>

<p>Configuration for GPIO 3</p>
<!--*user-block-gpio_3_cfg-start*-->

<!--*user-block-gpio_3_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_4_cfg_detail" class="packet">
<h2>GPIO_4_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x24]</b></li>
</ul>

<p>Configuration for GPIO 4</p>
<!--*user-block-gpio_4_cfg-start*-->

<!--*user-block-gpio_4_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_5_cfg_detail" class="packet">
<h2>GPIO_5_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x25]</b></li>
</ul>

<p>Configuration for GPIO 5</p>
<!--*user-block-gpio_5_cfg-start*-->

<!--*user-block-gpio_5_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_6_cfg_detail" class="packet">
<h2>GPIO_6_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x26]</b></li>
</ul>

<p>Configuration for GPIO 6</p>
<!--*user-block-gpio_6_cfg-start*-->

<!--*user-block-gpio_6_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_7_cfg_detail" class="packet">
<h2>GPIO_7_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x27]</b></li>
</ul>

<p>Configuration for GPIO 7</p>
<!--*user-block-gpio_7_cfg-start*-->

<!--*user-block-gpio_7_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_8_cfg_detail" class="packet">
<h2>GPIO_8_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x28]</b></li>
</ul>

<p>Configuration for GPIO 8</p>
<!--*user-block-gpio_8_cfg-start*-->

<!--*user-block-gpio_8_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_9_cfg_detail" class="packet">
<h2>GPIO_9_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x29]</b></li>
</ul>

<p>Configuration for GPIO 9</p>
<!--*user-block-gpio_9_cfg-start*-->

<!--*user-block-gpio_9_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_10_cfg_detail" class="packet">
<h2>GPIO_10_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x2A]</b></li>
</ul>

<p>Configuration for GPIO 10</p>
<!--*user-block-gpio_10_cfg-start*-->

<!--*user-block-gpio_10_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_gpio_11_cfg_detail" class="packet">
<h2>GPIO_11_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x2B]</b></li>
</ul>

<p>Configuration for GPIO 11</p>
<!--*user-block-gpio_11_cfg-start*-->

<!--*user-block-gpio_11_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="1">DIR</td>
<td class="field" colspan="1">PP</td>
<td class="field" colspan="2">IRQ</td>
<td class="field" colspan="1">ALT</td>
<td class="empty" colspan="2"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>DIR:</b> Pin Direction<br>
<b>PP:</b> Enables Push/Pull, Otherwise pin is OpenDrain/floating<br>
<b>ALT:</b> Indicates that GPIO is disabled because pin is being used for an alternate function (PWM, ADC, etc)<br>
<b>EN:</b> Enables GPIO<br>

<h2> Fields:</h2>

<b>IRQ:</b> Interrupt selection
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_adc_0_cfg_detail" class="packet">
<h2>ADC_0_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x30]</b></li>
</ul>

<p>Configuration for ADC 0</p>
<!--*user-block-adc_0_cfg-start*-->

<!--*user-block-adc_0_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="12">Treshold</td>
<td class="field" colspan="2">IRQ</td>
<td class="empty" colspan="1"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>EN:</b> Enables ADC Channel<br>

<h2> Fields:</h2>

<b>Treshold:</b> IRQ threshold for ADC channel


<b>IRQ:</b> Interrupt setting for ADC channel
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_adc_1_cfg_detail" class="packet">
<h2>ADC_1_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x32]</b></li>
</ul>

<p>Configuration for ADC 1</p>
<!--*user-block-adc_1_cfg-start*-->

<!--*user-block-adc_1_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="12">Treshold</td>
<td class="field" colspan="2">IRQ</td>
<td class="empty" colspan="1"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>EN:</b> Enables ADC Channel<br>

<h2> Fields:</h2>

<b>Treshold:</b> IRQ threshold for ADC channel


<b>IRQ:</b> Interrupt setting for ADC channel
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_adc_2_cfg_detail" class="packet">
<h2>ADC_2_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x34]</b></li>
</ul>

<p>Configuration for ADC 2</p>
<!--*user-block-adc_2_cfg-start*-->

<!--*user-block-adc_2_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="12">Treshold</td>
<td class="field" colspan="2">IRQ</td>
<td class="empty" colspan="1"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>EN:</b> Enables ADC Channel<br>

<h2> Fields:</h2>

<b>Treshold:</b> IRQ threshold for ADC channel


<b>IRQ:</b> Interrupt setting for ADC channel
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_adc_3_cfg_detail" class="packet">
<h2>ADC_3_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x36]</b></li>
</ul>

<p>Configuration for ADC 3</p>
<!--*user-block-adc_3_cfg-start*-->

<!--*user-block-adc_3_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="12">Treshold</td>
<td class="field" colspan="2">IRQ</td>
<td class="empty" colspan="1"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>EN:</b> Enables ADC Channel<br>

<h2> Fields:</h2>

<b>Treshold:</b> IRQ threshold for ADC channel


<b>IRQ:</b> Interrupt setting for ADC channel
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_adc_4_cfg_detail" class="packet">
<h2>ADC_4_CFG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x38]</b></li>
</ul>

<p>Configuration for ADC 4</p>
<!--*user-block-adc_4_cfg-start*-->

<!--*user-block-adc_4_cfg-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="12">Treshold</td>
<td class="field" colspan="2">IRQ</td>
<td class="empty" colspan="1"></td>
<td class="field" colspan="1">EN</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>EN:</b> Enables ADC Channel<br>

<h2> Fields:</h2>

<b>Treshold:</b> IRQ threshold for ADC channel


<b>IRQ:</b> Interrupt setting for ADC channel
<table>
<tr><td> NONE </td><td> b00 </td><td>  No interrupt</td></tr>
<tr><td> RISING </td><td> b01 </td><td>  Trigger on Rising</td></tr>
<tr><td> FALLING </td><td> b10 </td><td>  Trigger on falling</td></tr>
<tr><td> ANY </td><td> b11 </td><td>  Trigger on any</td></tr>
</table>



<div id="register_pwm_config_detail" class="packet">
<h2>PWM_CONFIG </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x40]</b></li>
</ul>

<p>Configuration for PWM</p>
<!--*user-block-pwm_config-start*-->

<!--*user-block-pwm_config-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 31</th>
    <th> 30</th>
    <th> 29</th>
    <th> 28</th>
    <th> 27</th>
    <th> 26</th>
    <th> 25</th>
    <th> 24</th>
    <th> 23</th>
    <th> 22</th>
    <th> 21</th>
    <th> 20</th>
    <th> 19</th>
    <th> 18</th>
    <th> 17</th>
    <th> 16</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="16">Period</td>
<td class="field" colspan="4">Prescaler</td>
<td class="empty" colspan="4"></td>
<td class="field" colspan="1">CH7_Enable</td>
<td class="field" colspan="1">CH6_Enable</td>
<td class="field" colspan="1">CH5_Enable</td>
<td class="field" colspan="1">CH4_Enable</td>
<td class="field" colspan="1">CH3_Enable</td>
<td class="field" colspan="1">CH2_Enable</td>
<td class="field" colspan="1">CH1_Enable</td>
<td class="field" colspan="1">CH0_Enable</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>CH0_Enable:</b> Enables PWM channel 0<br>
<b>CH1_Enable:</b> Enables PWM channel 1<br>
<b>CH2_Enable:</b> Enables PWM channel 2<br>
<b>CH3_Enable:</b> Enables PWM channel 3<br>
<b>CH4_Enable:</b> Enables PWM channel 4<br>
<b>CH5_Enable:</b> Enables PWM channel 5<br>
<b>CH6_Enable:</b> Enables PWM channel 6<br>
<b>CH7_Enable:</b> Enables PWM channel 7<br>

<h2> Fields:</h2>

<b>Period:</b> Period for PWM signals


<b>Prescaler:</b> Prescaler for PWM, using 16Mhz clock
<table>
<tr><td> PRESCALER_1 </td><td> b0000 </td><td>  divide clock by 1 (16Mhz)</td></tr>
<tr><td> PRESCALER_2 </td><td> b0001 </td><td>  divide clock by 2 (8Mhz)</td></tr>
<tr><td> PRESCALER_4 </td><td> b0010 </td><td>  divide clock by 4  (4Mhz)</td></tr>
<tr><td> PRESCALER_8 </td><td> b0011 </td><td>  divide clock by 8  (2Mhz)</td></tr>
<tr><td> PRESCALER_16 </td><td> b0100 </td><td>  divide clock by 16  (1Mhz)</td></tr>
<tr><td> PRESCALER_32 </td><td> b0101 </td><td>  divide clock by 32  (500Khz)</td></tr>
<tr><td> PRESCALER_64 </td><td> b0110 </td><td>  divide clock by 64  (250Khz)</td></tr>
<tr><td> PRESCALER_128 </td><td> b0111 </td><td>  divide clock by 128 (125Khz)</td></tr>
<tr><td> PRESCALER_256 </td><td> b1000 </td><td>  divide clock by 256 (62.5 Khz)</td></tr>
<tr><td> PRESCALER_512 </td><td> b1001 </td><td>  divide clock by 512  (31.25 Khz)</td></tr>
<tr><td> PRESCALER_1024 </td><td> b1010 </td><td>  divide clock by 1024 (1.5625 KHz)</td></tr>
<tr><td> PRESCALER_2048 </td><td> b1011 </td><td>  divide clock by 2048  ()</td></tr>
<tr><td> PRESCALER_4096 </td><td> b1100 </td><td>  divide clock by 4096  ()</td></tr>
<tr><td> PRESCALER_8192 </td><td> b1101 </td><td>  divide clock by 8192  ()</td></tr>
<tr><td> PRESCALER_16384 </td><td> b1110 </td><td>  divide clock by 16384 ()</td></tr>
<tr><td> PRESCALER_32768 </td><td> b1111 </td><td>  divide clock by 32768 ()</td></tr>
</table>



<div id="register_who_am_i_detail" class="packet">
<h2>WHO_AM_I </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x60]</b></li>
    <li class="note">  Default: <b>[0xAB]</b></li>
</ul>

<p>Device ID</p>
<!--*user-block-who_am_i-start*-->

<!--*user-block-who_am_i-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="field" colspan="8">WHO_AM_I</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>WHO_AM_I:</b> Device ID


<div id="register_eeprom_mem_detail" class="packet">
<h2>EEPROM_MEM </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x7F]</b></li>
</ul>

<p>Start address of EEPROM memory on stm8. User can read/write up to 128 bytes starting at this address</p>
<!--*user-block-eeprom_mem-start*-->

<!--*user-block-eeprom_mem-end*-->
<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   <td class="empty" colspan="8"></td>

  </tr>
</table>


