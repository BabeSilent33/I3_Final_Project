#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
#include <Servo.h> 
Servo myservo; 

#define G_led 2 // choose the pin for the Green Led
#define R_led 3 // choose the pin for the Red Led

#define echopin 4 // echo pin
#define trigpin 5 // Trigger pin

int cm; // Duration used to calculate distance
int degree=0, flag=0;
int set_time=1000;
long rememTime;

void setup() // put your setup code here, to run once 
{
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
  // Print a message on both lines of the LCD.
  lcd.setCursor(1,0);   //Set cursor to character 2 on line 0
  //lcd.print(" ");
  
  lcd.setCursor(2,0);   //Move cursor to character 2 on line 1
  lcd.print("WELCOME TO");

  lcd.setCursor(2,1);
  lcd.print("ITC CITY :)");
Serial.begin(9600);// initialize serial communication at 9600 bits per second:

myservo.attach(8); // declare Servo Motor as output
myservo.write(degree);  

pinMode(R_led,OUTPUT); // declare Red LED as output
pinMode(G_led,OUTPUT); // declare Green LED as output

pinMode(trigpin, OUTPUT); // declare ultrasonic sensor Echo pin as input
pinMode(echopin, INPUT);  // declare ultrasonic sensor Trigger pin as Output 

delay(100);
}
 
void loop(){  
// Write a pulse to the HC-SR04 Trigger Pin
digitalWrite(trigpin, LOW);
delayMicroseconds(20);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);

// Measure the response from the HC-SR04 Echo Pin
long ultra_time = pulseIn (echopin, 1);
  // Determine distance from duration
  // Use 343 metres per second as speed of sound
cm =  ultra_time / 30 / 2; 

Serial.print("cm:");Serial.println(cm);

if(cm<8)rememTime = millis(); // set start time

if((millis()- rememTime) > set_time){ 
digitalWrite(G_led, 0); // LED Turn Off.  
digitalWrite(R_led, 1); // LED Turn On
if(flag==1){ flag=0;
for(degree=100; degree>0; degree-=1){ 
myservo.write(degree);   
delay(25); 
  }    
 }
}else{
digitalWrite(G_led, HIGH); // LED Turn On   
digitalWrite(R_led, LOW); // LED Turn Off 
if(flag==0){ flag=1;
for(degree=0; degree<100; degree+=1){ 
myservo.write(degree);   
delay(5);     
  }    
 }
}

delay(100); 
}
