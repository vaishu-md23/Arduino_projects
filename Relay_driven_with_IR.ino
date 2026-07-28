void setup() {
  // put your setup code here, to run once:
pinMode(7,INPUT);
pinMode(13,OUTPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
int x=digitalRead(7);
if(x==HIGH)
{digitalWrite(13,x);
delay(1000);
Serial.println("IR OFF");
Serial.println(x);
}
else
{
digitalWrite(13,x);
delay(1000);
Serial.println("IR ON");
Serial.println(x);
}
}
