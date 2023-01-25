
void displayseg (int x);

void setup()
{
  pinMode(13, OUTPUT); //To Seg A
  pinMode(12, OUTPUT); //To Seg B
  pinMode(11, OUTPUT); //To Seg C
  pinMode(10, OUTPUT); //To Seg D
  pinMode(9, OUTPUT);  //To Seg E
  pinMode(8, OUTPUT);  //To Seg F
  pinMode(7, OUTPUT);  //To Seg G
  pinMode(3, OUTPUT); 
  pinMode(2, OUTPUT); 
  pinMode(1, OUTPUT); 
}

void loop() 
{
  
  digitalWrite(1,0);
  digitalWrite(2,0);
  digitalWrite(3,1);
  displayseg(6);
  delay(1000);
  displayseg(5);
  delay(1000);
  displayseg(4);
  delay(1000);
  displayseg(3);
  delay(1000);
  displayseg(2);
  delay(1000);
  displayseg(1);
  delay(1000);
  
  digitalWrite(1,0);
  digitalWrite(2,1);
  digitalWrite(3,0);
  displayseg(9);
  delay(1000);
  displayseg(8);
  delay(1000);
  displayseg(7);
  delay(1000);
  displayseg(6);
  delay(1000);
  displayseg(5);
  delay(1000);
  displayseg(4);
  delay(1000);
  displayseg(3);
  delay(1000);
  displayseg(2);
  delay(1000);
  displayseg(1);
  delay(1000);

  digitalWrite(1,1);
  digitalWrite(2,0);
  digitalWrite(3,0);
  displayseg(3);
  delay(1000);
  displayseg(2);
  delay(1000);
  displayseg(1);
  delay(1000);
} 

void displayseg(int x) {
  
  switch (x) 
  {
  case 1:
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,1);
    digitalWrite(10,0);
    digitalWrite(9,0);
    digitalWrite(8,0);
    digitalWrite(7,0);
    break;

  case 2:
  digitalWrite(13,1);
  digitalWrite(12,1);
  digitalWrite(11,0);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,0);
  digitalWrite(7,1);
  break;

    case 3:
  digitalWrite(13,1);
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(7,1);
  break;

  case 4:
  digitalWrite(13,0);
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,0);
  digitalWrite(9,0);
  digitalWrite(8,1);
  digitalWrite(7,1);
  break;
    
    case 5:
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,1);
  digitalWrite(7,1);
  break;
    
  case 6:
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(7,1);
  break;

  case 7:
  digitalWrite(13,1);
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,0);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(7,0);
  break;

  case 8:
  digitalWrite(13,1);
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(7,1);
  break;

  case 9:
  digitalWrite(13,1);
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,1);
  digitalWrite(7,1);
  break;
  }
}
