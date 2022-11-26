long dur;

void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(10,INPUT);

  
}

void loop() 
{
    digitalWrite(11,LOW);      //pulse to generate UltraSonicSound waves
    delayMicroseconds(2);
    digitalWrite(11,HIGH);
    delayMicroseconds(10);
    digitalWrite(11,LOW);
    
    dur=pulseIn(10,HIGH);     //to get the total time duration for receiving the reflected UltraSonicWave 
                            //it can able to measure 2cm to 4 meters with ranging accuracy
                            //it emits an Ultrasound at 40,000Hz; which travels through the air and it reflects black if there is obstacle
                           //it travels with speed of sound(340 m/s)or (0.034 cm/us)
    Serial.println(dur*0.034/2);
      
    delay(300);
}
