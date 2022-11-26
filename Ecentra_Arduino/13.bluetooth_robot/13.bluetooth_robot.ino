

void fun(int p,int q)
  {
     digitalWrite(12,p);
     digitalWrite(13,!p);
     
     digitalWrite(8,q);
     digitalWrite(9,!q);
  }


void Stop()
  {
     digitalWrite(13,0);
     digitalWrite(12,0);
     digitalWrite(9,0);
     digitalWrite(8,0);
  }


char x;
void setup()
{
  Serial.begin(9600); 
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() 
{
  while(Serial.available()) 
   { x=Serial.read();  }                    

  
  if(x=='Z')
   {
     Stop();
   }

  else if(x=='R')
   {
     fun(1,0);
     delay(1000);
     Stop();
   } 

  else if(x=='L')
  {
     fun(0,1);
     delay(1000);
     Stop();
  }

  else if(x=='F')                                                                 
  {
     fun(1,1);
  }

  else if(x=='B')
  {
    fun(0,0);
  }

}
