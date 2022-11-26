float t=0,x;

void setup() 
{
 Serial.begin(9600);
}

void loop() 
{
  x=5*sin((2*PI*4*t));
  Serial.println(x);
  t=t+0.01;
}
