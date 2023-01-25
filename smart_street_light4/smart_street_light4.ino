//Define each pin in ir sensor
int ir1=4;
int ir2=5;
int ir3=6;
int ir4=7;
int led1=8; //Pin for LED 1
int led2=9; //Pin for LED 2
int led3=10; //Pin for LED 3
int led4=11; //Pin for LED 4
int p1=0;
int p2=0;
int p3=0;
int p4=0;

void setup()
{
 pinMode(ir1,INPUT);
 pinMode(ir2,INPUT);
 pinMode(ir3,INPUT);
 pinMode(ir4,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
}
void loop()
{
  //To read the ir sensor to pin in microc controller
 p1=digitalRead(ir1);
 p2=digitalRead(ir2);
 p3=digitalRead(ir3);
 p4=digitalRead(ir4);

//Using condition to set them work together in loop function
if(p1==HIGH)
{
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
}
else
{
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
}
if(p2==HIGH)
{
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
}
else
{
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
}
if(p3==HIGH)
{
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);
}
else
{
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH);
}
if(p4==HIGH)
{
 digitalWrite(led4,LOW);
}
else
{
 digitalWrite(led4,HIGH);
}
}
