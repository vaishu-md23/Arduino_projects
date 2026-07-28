#define led1 12
#define led2 13
int interval_1=500;
int interval_2=1000;
int pm1;
int pm2;//previous millis
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
}
void loop() {
int cm=millis();//current millis
if((cm-pm1)>=interval_1)
{
  pm1=cm;
digitalWrite(led1, !digitalRead(led1));
}
if((cm-pm2)>=interval_2)
{
  pm2=cm;
digitalWrite(led2, !digitalRead(led2));
}
if((cm-pm3)>=interval_3)
{
  pm3=cm;
  
}
}