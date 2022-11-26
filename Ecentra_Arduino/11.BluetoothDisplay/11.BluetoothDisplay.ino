#include<LiquidCrystal.h>

LiquidCrystal p1(12,13,4,5,6,7);
String x;

void setup()
{
  p1.begin(16,2);
  Serial.begin(9600);            
  p1.print("ARDUINO");
}

void loop()
{
                                     
   while(Serial.available())
   {
      x=Serial.readString();

      p1.clear();
      p1.print(x);
   }


}
