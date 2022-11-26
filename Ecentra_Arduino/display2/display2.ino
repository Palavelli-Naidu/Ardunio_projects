
void fun(int RS,int D7,int D6, int D5,int D4)
{
digitalWrite(12,RS);      //RS=0(LOW) for giving commands like 4 bit mode,display on,curser ect
                         //RS=1 for writing something in to the display
digitalWrite(7,D7);
digitalWrite(6,D6);
digitalWrite(5,D5);
digitalWrite(4,D4);

digitalWrite(13,LOW);     //E(enable) simply like a clock pulse after every command and data to lcddisplay
delayMicroseconds(10);
digitalWrite(13,HIGH);   
delayMicroseconds(10);
digitalWrite(13,LOW);
delayMicroseconds(10);
} 



void setup() 
{
pinMode(12,OUTPUT);  //RS(Register select pin)
pinMode(13,OUTPUT);  //E(enable)

pinMode(7,OUTPUT);    //D7
pinMode(6,OUTPUT);    //D6
pinMode(5,OUTPUT);    //D5
pinMode(4,OUTPUT);    //D4

fun(0,0,0,1,0);     //4 bit mode setting 0010=(7 6 5 4) ;RS=0

                    //clear display 0000 0001=(7 6 5 4) ;RS=0
                    //Return Home(0000 0010) ; RS=0

fun(0,0,0,0,0);     // display on 0000 1100=(7 6 5 4)    ;RS=0
fun(0,1,1,0,0);

//---------------------------------------------------------------------

fun(1,0,1,0,0);     //(H= 72 decimal); RS=1
fun(1,1,0,0,0);

fun(1,0,1,0,0);     //(I=73 decimal) ; RS=1
fun(1,1,0,0,1);

}

void loop()
{

}
