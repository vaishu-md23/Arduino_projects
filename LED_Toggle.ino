#define led1 12
#define led2 13
#define led3 11
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3, OUTPUT);
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(led1, !digitalRead(led1));

digitalWrite(led2, !digitalRead(led2));

}
