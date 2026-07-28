#include<SoftwareSerial.h>
#define DE 8
#define RE 9
#define rx 10
#define tx 11
#define LED 13
#define SW 3
//double c=400;
SoftwareSerial MasterSerial= SoftwareSerial(rx,tx);
void setup() {
// put your setup code here, to run once:
pinMode(DE,OUTPUT);
pinMode(RE,OUTPUT);
MasterSerial.begin(9600);
Serial.begin(9600);
pinMode(LED,OUTPUT);
pinMode(SW,INPUT_PULLUP);
}
void loop() {
// put your main code here, to run repeatedly:
if(digitalRead(SW)==LOW)
{
digitalWrite(DE,HIGH);
digitalWrite(RE,HIGH);
int data= random(0,100);//Master code
//MasterSerial.write(c);
MasterSerial.write(data);
Serial.println("Data sending");
Serial.println(data);
}
else
{
digitalWrite(DE,LOW);
digitalWrite(RE,LOW);
int data=MasterSerial.read();
Serial.println("Data recieving");
Serial.println(data);
digitalWrite(LED,HIGH);
}
delay(1000);
}
