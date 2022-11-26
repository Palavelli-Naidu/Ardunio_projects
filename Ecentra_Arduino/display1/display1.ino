//#include<LiquidCrystal.h>



void setup() {

pinMode(12,OUTPUT);
pinMode(13,OUTPUT);

pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
//==============================================4 bit mode setting 0010=(7 6 5 4)

digitalWrite(12,LOW);

digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);

//=========================================clear display 0000 00001=(7 6 5 4)
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);

digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);
//========================================================= display on 0000 1100=(7 6 5 4)
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);

digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,LOW);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);
//==========================================================ASCII code :"H"=72  0100 1000=(7 6 5 4)
digitalWrite(12,HIGH);

digitalWrite(7,LOW);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,LOW);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);

digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);
//==============================================================
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,LOW);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);

digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);

digitalWrite(13,LOW);
delay(10);
digitalWrite(13,HIGH);
delay(10);
digitalWrite(13,LOW);
delay(10);


}

void loop() {
  // put your main code here, to run repeatedly:

}
