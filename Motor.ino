#define in_1 8
#define in_2 7
#define en_1 6
void setup() {
  // put your setup code here, to run once:
pinMode(in_1,OUTPUT);
pinMode(in_2,OUTPUT);
pinMode(en_1,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
analogWrite(en_1,200);
delay(500);

digitalWrite(in_1,HIGH);
digitalWrite(in_2,LOW);
analogWrite(en_1,125);
delay(1500);

analogWrite(en_1,50);
digitalWrite(in_1,HIGH);
digitalWrite(in_2,LOW);
delay(1500);

analogWrite(en_1,200);
digitalWrite(in_1,LOW);
digitalWrite(in_2,HIGH);
delay(1500);

analogWrite(en_1,255);
digitalWrite(in_1,LOW);
digitalWrite(in_2,HIGH);

delay(1500);

}