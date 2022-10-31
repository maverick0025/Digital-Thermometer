
                   //ARDUINO BASED DIGITAL THERMOMETER

#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

char f,c;
long int lm=A0;
float value;
void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
    lcd.print("Hello Rig");
    lcd.setCursor(0,1);
    lcd.print("Good Evening");
    delay(2000);}

void loop() {
  value=analogRead(lm);
  float cent=(value*0.488281250);
    float farh=((1.8*cent)+32);
lcd.clear();

lcd.print("Room temp is:");
lcd.setCursor(1,1 );
lcd.print(cent);
lcd.setCursor(6,1);
lcd.print("c");
lcd.setCursor(10,1);
lcd.print(farh);
lcd.setCursor(15,1);
lcd.print("f");
Serial.print(cent);
Serial.print(farh);
delay(1000);
lcd.clear();
lcd.home();
delay(1000);
}
