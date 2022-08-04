
<h1>stc3117 Device</h1>
<ul>
  <li> Generated with <a href="https://github.com/uprev-mrt/mrtutils/wiki/mrt-device">MrT Device Utility</a> </li>
  <li> Bus:  I2C</li>
  <li> RegMap: <a href="Regmap.html">Register Map</a>
  <li>Datasheet: <a href="https://www.st.com/content/ccc/resource/technical/document/datasheet/ea/b5/01/6e/dd/f0/49/3e/DM00105047.pdf/files/DM00105047.pdf/jcr:content/translations/en.DM00105047.pdf">https://www.st.com/conte...</a> </li>
  <li> DigiKey: <a href="https://www.digikey.com/products/en?KeyWords=497-15387-1-ND">497-15387-1-ND</a></li>
  <li> I2C Address: 0xE0</li>
</ul>
<hr/>
<h2>Description: </h2>
<p>Gas gauge IC with battery charger control</p>

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
        <td><a href="#register_mode_detail">MODE</a></td>
        <td>0x00</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Mode register</td>
    </tr>
    <tr>
        <td><a href="#register_ctrl_detail">CTRL</a></td>
        <td>0x01</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x00</td>
        <td>Control and status register</td>
    </tr>
    <tr>
        <td><a href="#register_soc_detail">SOC</a></td>
        <td>0x02</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Battery SOC (LSB = 1/512 %)</td>
    </tr>
    <tr>
        <td><a href="#register_counter_detail">COUNTER</a></td>
        <td>0x04</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Number of conversions</td>
    </tr>
    <tr>
        <td><a href="#register_current_detail">CURRENT</a></td>
        <td>0x06</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Battery current</td>
    </tr>
    <tr>
        <td><a href="#register_voltage_detail">VOLTAGE</a></td>
        <td>0x08</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Battery voltage (LSB = 2.2 mV)</td>
    </tr>
    <tr>
        <td><a href="#register_temperature_detail">TEMPERATURE</a></td>
        <td>0x0A</td>
        <td>uint8</td>
        <td>R</td>
        <td>0x00</td>
        <td>Temperature in degrees C (LSB = 1deg C )</td>
    </tr>
    <tr>
        <td><a href="#register_avg_current_detail">AVG_CURRENT</a></td>
        <td>0x0B</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Battery average current or SOC change rate</td>
    </tr>
    <tr>
        <td><a href="#register_ocv_detail">OCV</a></td>
        <td>0x0D</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>OCV register (LSV = 0.55 mV)</td>
    </tr>
    <tr>
        <td><a href="#register_cc_cnf_detail">CC_CNF</a></td>
        <td>0x0F</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x018B</td>
        <td>Battery average current or SOC change rate</td>
    </tr>
    <tr>
        <td><a href="#register_vm_cnf_detail">VM_CNF</a></td>
        <td>0x11</td>
        <td>uint16</td>
        <td>RW</td>
        <td>0x0141</td>
        <td>Voltage gas gauge algorithm parameter</td>
    </tr>
    <tr>
        <td><a href="#register_alarm_soc_detail">ALARM_SOC</a></td>
        <td>0x13</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x02</td>
        <td>SOC alarm level in (LSB = 0.5%)</td>
    </tr>
    <tr>
        <td><a href="#register_alarm_voltage_detail">ALARM_VOLTAGE</a></td>
        <td>0x14</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0xAA</td>
        <td>Battery low voltage alarm level (LSB = 17.6 mV)</td>
    </tr>
    <tr>
        <td><a href="#register_current_thres_detail">CURRENT_THRES</a></td>
        <td>0x15</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x0A</td>
        <td>Current threshold for current monitoring (LSB = 47.04 uV )</td>
    </tr>
    <tr>
        <td><a href="#register_cmonit_count_detail">CMONIT_COUNT</a></td>
        <td>0x16</td>
        <td>uint8</td>
        <td>R</td>
        <td>0x78</td>
        <td>Current monitoring counter</td>
    </tr>
    <tr>
        <td><a href="#register_cmonit_max_detail">CMONIT_MAX</a></td>
        <td>0x17</td>
        <td>uint8</td>
        <td>RW</td>
        <td>0x78</td>
        <td>Maximum counter value for current monitoring</td>
    </tr>
    <tr>
        <td><a href="#register_id_detail">ID</a></td>
        <td>0x18</td>
        <td>uint8</td>
        <td>R</td>
        <td>0x16</td>
        <td>Part type ID = 16h</td>
    </tr>
    <tr>
        <td><a href="#register_cc_adj_detail">CC_ADJ</a></td>
        <td>0x1B</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Coulomb counter adjustment register</td>
    </tr>
    <tr>
        <td><a href="#register_vm_adj_detail">VM_ADJ</a></td>
        <td>0x1D</td>
        <td>uint16</td>
        <td>R</td>
        <td>0x0000</td>
        <td>Voltage mode adjustment register</td>
    </tr>

</table>



<hr class="section">
<h2 class="right"> Registers</h2>
<hr class="thick">



<div id="register_mode_detail" class="packet">
<h2>MODE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x00]</b></li>
</ul>

<p>Mode register</p>
<!--*user-block-mode-start*-->

<!--*user-block-mode-end*-->
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
   <td class="empty" colspan="1"></td>
<td class="field" colspan="1">FORCE_VM</td>
<td class="field" colspan="1">FORCE_CC</td>
<td class="field" colspan="1">GG_RUN</td>
<td class="field" colspan="1">ALM_ENA</td>
<td class="field" colspan="1">FORCE_CD</td>
<td class="field" colspan="1">BIBATD_PU</td>
<td class="field" colspan="1">VMODE</td>

  </tr>
</table>

<h2> Flags:</h2>
<b>VMODE:</b> Power saving voltage mode<br>
<b>BIBATD_PU:</b> BATD internal pull-up enable<br>
<b>FORCE_CD:</b> Force CD output high<br>
<b>ALM_ENA:</b> Enable Alarm function<br>
<b>GG_RUN:</b> creates a flag at bit 1 of the DUMMY register<br>
<b>FORCE_CC:</b> Force the relaxation timer to switch to the Coulomb counter (CC) state<br>
<b>FORCE_VM:</b> Force the relaxation timer to switch to voltage mode (VM) state<br>


<div id="register_ctrl_detail" class="packet">
<h2>CTRL </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x01]</b></li>
</ul>

<p>Control and status register</p>
<!--*user-block-ctrl-start*-->

<!--*user-block-ctrl-end*-->
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



<div id="register_soc_detail" class="packet">
<h2>SOC </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x02]</b></li>
</ul>

<p>Battery SOC (LSB = 1/512 %)</p>
<!--*user-block-soc-start*-->

<!--*user-block-soc-end*-->
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
   <td class="field" colspan="16">SOC</td>

  </tr>
</table>


<h2> Fields:</h2>

<b>SOC:</b> Battery SOC (LSB = 1/512 %)


<div id="register_counter_detail" class="packet">
<h2>COUNTER </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x04]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Number of conversions</p>
<!--*user-block-counter-start*-->

<!--*user-block-counter-end*-->
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
   <td class="field" colspan="16">COUNTER</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>COUNTER:</b> Number of conversions


<div id="register_current_detail" class="packet">
<h2>CURRENT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x06]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Battery current</p>
<!--*user-block-current-start*-->

<!--*user-block-current-end*-->
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
   <td class="field" colspan="16">CURRENT</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>CURRENT:</b> Battery current


<div id="register_voltage_detail" class="packet">
<h2>VOLTAGE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x08]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Battery voltage (LSB = 2.2 mV)</p>
<!--*user-block-voltage-start*-->

<!--*user-block-voltage-end*-->
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
   <td class="field" colspan="16">VOLTAGE</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>VOLTAGE:</b> Battery voltage (LSB = 2.2 mV)


<div id="register_temperature_detail" class="packet">
<h2>TEMPERATURE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0A]</b></li>
    <li class="note">  Default: <b>[0x00]</b></li>
</ul>

<p>Temperature in degrees C (LSB = 1deg C )</p>
<!--*user-block-temperature-start*-->

<!--*user-block-temperature-end*-->
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
   <td class="field" colspan="8">TEMPERATURE</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>TEMPERATURE:</b> Temperature in degrees C (LSB = 1deg C )


<div id="register_avg_current_detail" class="packet">
<h2>AVG_CURRENT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0B]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Battery average current or SOC change rate</p>
<!--*user-block-avg_current-start*-->

<!--*user-block-avg_current-end*-->
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
   <td class="field" colspan="16">AVG_CURRENT</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>AVG_CURRENT:</b> Battery average current or SOC change rate


<div id="register_ocv_detail" class="packet">
<h2>OCV </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0D]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>OCV register (LSV = 0.55 mV)</p>
<!--*user-block-ocv-start*-->

<!--*user-block-ocv-end*-->
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
   <td class="field" colspan="16">OCV</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>OCV:</b> OCV register (LSV = 0.55 mV)


<div id="register_cc_cnf_detail" class="packet">
<h2>CC_CNF </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0F]</b></li>
    <li class="note">  Default: <b>[0x018B]</b></li>
</ul>

<p>Battery average current or SOC change rate</p>
<!--*user-block-cc_cnf-start*-->

<!--*user-block-cc_cnf-end*-->
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
   <td class="field" colspan="16">CC_CNF</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>CC_CNF:</b> Battery average current or SOC change rate


<div id="register_vm_cnf_detail" class="packet">
<h2>VM_CNF </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x11]</b></li>
    <li class="note">  Default: <b>[0x0141]</b></li>
</ul>

<p>Voltage gas gauge algorithm parameter</p>
<!--*user-block-vm_cnf-start*-->

<!--*user-block-vm_cnf-end*-->
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
   <td class="field" colspan="16">VM_CNF</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>VM_CNF:</b> Voltage gas gauge algorithm parameter


<div id="register_alarm_soc_detail" class="packet">
<h2>ALARM_SOC </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x13]</b></li>
    <li class="note">  Default: <b>[0x02]</b></li>
</ul>

<p>SOC alarm level in (LSB = 0.5%)</p>
<!--*user-block-alarm_soc-start*-->

<!--*user-block-alarm_soc-end*-->
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
   <td class="field" colspan="8">ALARM_SOC</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>ALARM_SOC:</b> SOC alarm level in (LSB = 0.5%)


<div id="register_alarm_voltage_detail" class="packet">
<h2>ALARM_VOLTAGE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x14]</b></li>
    <li class="note">  Default: <b>[0xAA]</b></li>
</ul>

<p>Battery low voltage alarm level (LSB = 17.6 mV)</p>
<!--*user-block-alarm_voltage-start*-->

<!--*user-block-alarm_voltage-end*-->
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
   <td class="field" colspan="8">ALARM_VOLTAGE</td>

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
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>ALARM_VOLTAGE:</b> Battery low voltage alarm level (LSB = 17.6 mV)


<div id="register_current_thres_detail" class="packet">
<h2>CURRENT_THRES </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x15]</b></li>
    <li class="note">  Default: <b>[0x0A]</b></li>
</ul>

<p>Current threshold for current monitoring (LSB = 47.04 uV )</p>
<!--*user-block-current_thres-start*-->

<!--*user-block-current_thres-end*-->
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
   <td class="field" colspan="8">CURRENT_THRES</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>CURRENT_THRES:</b> Current threshold for current monitoring (LSB = 47.04 uV )


<div id="register_cmonit_count_detail" class="packet">
<h2>CMONIT_COUNT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x16]</b></li>
    <li class="note">  Default: <b>[0x78]</b></li>
</ul>

<p>Current monitoring counter</p>
<!--*user-block-cmonit_count-start*-->

<!--*user-block-cmonit_count-end*-->
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
   <td class="field" colspan="8">CMONIT_COUNT</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>CMONIT_COUNT:</b> Current monitoring counter


<div id="register_cmonit_max_detail" class="packet">
<h2>CMONIT_MAX </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x17]</b></li>
    <li class="note">  Default: <b>[0x78]</b></li>
</ul>

<p>Maximum counter value for current monitoring</p>
<!--*user-block-cmonit_max-start*-->

<!--*user-block-cmonit_max-end*-->
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
   <td class="field" colspan="8">CMONIT_MAX</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>CMONIT_MAX:</b> Maximum counter value for current monitoring


<div id="register_id_detail" class="packet">
<h2>ID </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x18]</b></li>
    <li class="note">  Default: <b>[0x16]</b></li>
</ul>

<p>Part type ID = 16h</p>
<!--*user-block-id-start*-->

<!--*user-block-id-end*-->
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
   <td class="field" colspan="8">ID</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>ID:</b> Part type ID = 16h


<div id="register_cc_adj_detail" class="packet">
<h2>CC_ADJ </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x1B]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Coulomb counter adjustment register</p>
<!--*user-block-cc_adj-start*-->

<!--*user-block-cc_adj-end*-->
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
   <td class="field" colspan="16">CC_ADJ</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>CC_ADJ:</b> Coulomb counter adjustment register


<div id="register_vm_adj_detail" class="packet">
<h2>VM_ADJ </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x1D]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Voltage mode adjustment register</p>
<!--*user-block-vm_adj-start*-->

<!--*user-block-vm_adj-end*-->
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
   <td class="field" colspan="16">VM_ADJ</td>

  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>


<h2> Fields:</h2>

<b>VM_ADJ:</b> Voltage mode adjustment register

