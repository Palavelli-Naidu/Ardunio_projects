char x;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 
  while(Serial.available())
   {  x=Serial.read();   }

  

     if(x=='A')
        {digitalWrite(13,HIGH);}

     else if(x=='a')
        {digitalWrite(13,LOW);}

     if(x=='B')
        {digitalWrite(12,HIGH);}

     else if(x=='b')
        {digitalWrite(12,LOW);}

}
