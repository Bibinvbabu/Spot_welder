
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{ pinMode(7,INPUT); 
pinMode(8,OUTPUT); 
digitalWrite(8,HIGH); 
lcd.begin(16, 2);
lcd.setCursor(2, 0); 
lcd.print("SPOT WELDER"); 
delay(2000);
lcd.clear(); 
} 
void loop()
{ 
float pot = map(analogRead(A0),0,1023,10,100); 
lcd.setCursor(0, 0);
lcd.print("WELDING TIME"); 
lcd.setCursor(0, 1); 
lcd.print(pot);  
lcd.print("ms"); 
if(digitalRead(7)==1)
{ 
while(digitalRead(7)==1) 
{ 
} 
digitalWrite(8,LOW); 
delay(pot); 
digitalWrite(8,HIGH); 
delay(100);
} 
else 
{ 
digitalWrite(8,HIGH); 
} 
delay(100); 
}
