int i;
void setup() 
{
  i=0;
pinMode(10,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
  i=0;
while(i<=255)
  {
   analogWrite(10,i);
   delay(100);
   i=i+1;
  }

 
}
