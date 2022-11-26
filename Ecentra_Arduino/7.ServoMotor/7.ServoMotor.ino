#include<Servo.h>

Servo s1;

void setup()
{
   s1.attach(11);

}

void loop()
{
    s1.write(0);
    delay(1000);

    s1.write(60);
    delay(1000);

    s1.write(130);
    delay(1000);
}
