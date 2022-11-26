#include<LiquidCrystal.h>

LiquidCrystal P1(12,13,4,5,6,7);

void setup()
{
 P1.begin(16,2); 
 P1.print("Arduino");
}

void loop() 
{

P1.setCursor(1,1);
P1.print("Ecentra");
delay(1000);
P1.clear();
delay(1000);  
}
