



int i;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Welcome to Ecentra 2K22");
i=0;
}

void loop() {
 Serial.println(i);
 delay(1000);
 i=i+1;         // put your main code here, to run repeatedly:

}
