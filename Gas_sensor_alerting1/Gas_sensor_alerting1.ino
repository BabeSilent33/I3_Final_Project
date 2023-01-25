

int val = A0; //variable to store sensor value


void setup()
{
  pinMode (9,OUTPUT);
  pinMode (A0,INPUT);
  Serial.begin(9600); // sets the serial port to 9600 
}

void loop()
{
  val = analogRead (A0); // read analog input pin 0
  if (val <500 )
  {digitalWrite (9, LOW);}
  else 
  {digitalWrite(9, HIGH);}
}
