
String x;

void setup() 
{
  Serial.begin(9600); 
  pinMode(13,OUTPUT);
}

void loop() 
{
  while(Serial.available())
     {  x=Serial.readString(); }
   
 
  if(x=="on" or x=="ON")
     {  digitalWrite(13,HIGH); }
 
  else if(x=="off" or x=="OFF")
     {  digitalWrite(13,LOW);  }   

}
