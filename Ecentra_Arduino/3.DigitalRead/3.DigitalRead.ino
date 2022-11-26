

int x;

void setup() 
{
  pinMode(13,INPUT);
  Serial.begin(9600);
}



void loop() 
{

x=digitalRead(13);
Serial.println(x);
delay(300);
  

}
