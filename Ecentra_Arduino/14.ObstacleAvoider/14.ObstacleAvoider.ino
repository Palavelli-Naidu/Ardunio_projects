
void fun(int p,int q)
  {
    digitalWrite(12,p);   //This is for motor 1
    digitalWrite(13,!p);
    
    
    digitalWrite(8,q);   //This is for motor 2
    digitalWrite(9,!q);
  }


void Stop()
  {
     
     digitalWrite(13,0);   //To stop the running of motors
     digitalWrite(12,0);
     digitalWrite(9,0);
     digitalWrite(8,0);
  }




float dur,dis;
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT); //This 4 pins are connected two motor driver to drive two DC motors
  pinMode(12,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  
  pinMode(7,OUTPUT); //This 7,8 pins are connected to Ultrasonic sensor
  pinMode(6,INPUT);

}



void loop() 
{
   digitalWrite(7,LOW);      //pulse to generate UltraSonicSound waves at trigger pin of ultraSonic sensor
   delayMicroseconds(2);
   digitalWrite(7,HIGH);
   delayMicroseconds(10);
   digitalWrite(7,LOW);
  
  dur=pulseIn(6,HIGH);     //Two measure the total time taken by ultrasonicwave to receive the reflected wave
  
  dis=dur*0.034/2;
  Serial.println(dis);

        if(dis<=7)        //if there is a obstacle at distance of less than 7cm
        {
              fun(0,1);
              delay(300);
              Stop();
        }
        
        else            //if there is no obstacle near to the sensor
        {
              fun(1,1);
        }

        

}
