# Arduino based digital thermometer

### Abstract:	
  - The main principle involved is measuring the temperature around the sensor (it might be room temperature or the body temp if hand kept on the sensor).
  - The aim of this project is to display the temperature reading on a 16x2 lcd after the conversion of output voltage reading by an lm35 sensor.
  
### Components Used:  
 1.	Arduino  uno
2.	lm35 sensor
3.	10k potentiometer
4.	lcd display 16*2
5.	bread board
6.	jumper wires
7.	220ohm resistor

### Theory:
  Potentiometer's vin pin is used for adjusting the contrast of the lcd(v0 pin). lm35's middle pin is used to get the input in the form of voltage and we use a formula (input*0.488288) to convert that into centigrade. And then Celsius to Fahrenheit. And the number "0.488288" is derived as "(5*1000)/(1024*10)".
*	5 is the input voltage from Arduino.
*	1000 is to covert the input millivolt into volt.
*	1024 is the number of bits of the input to the Arduino.
*	In the data sheet of lm35 we find the standard value as vout=10mV/0c
* LM35 sensor operates between -550c and +1200c.

### Result:
![image](https://user-images.githubusercontent.com/116136036/200163752-358fee9f-ad51-4053-b187-86576080e164.png)
