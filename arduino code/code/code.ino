#include <LiquidCrystal.h>

LiquidCrystal lcd(6 , 7, 5, 4, 3, 2);
const int trigPin = 11;
const int echoPin = 10;
long duration;
int distanceCm;
int b;

void setup() {
  
lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

Serial.begin(9600);

lcd.print("   Your Height");
lcd.print("      Measurement");
delay(3000);

}

void loop() {
  
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
//distanceInch = duration*0.0133/2;
b=180-distanceCm;
delay(300);
lcd.setCursor(0,0);
//lcd.print("Set 0:"); // Prints string "Distance" on the LCD
//lcd.print(b); // Prints the distance value from the sensor
//lcd.print("centimeter");
delay(300);
lcd.setCursor(0,1);
if(b<20)
{
   //lcd.print("Your Height:");
   lcd.print(b);
   lcd.print("cm");
   Serial.println(b);
   delay(300);
}
if(b>=30&&b<=40)
{
  //  lcd.print("Your Height:");
   lcd.print(b+1);
   lcd.print("cm");
   Serial.println(b+1);
   delay(300);
}
if(b>=41&&b<=49)
{
  //  lcd.print("Your Height:");
   lcd.print(b+2);
   lcd.print("cm");
   Serial.println(b+2);
   delay(300);
}
if(b>=50&&b<=60)
{
  //  lcd.print("Your Height:");
   lcd.print(b+3);
   lcd.print("cm");
   Serial.println(b+3);
   delay(300);
}
if(b>=61&&b<=69)
{
  //  lcd.print("Your Height:");
   lcd.print(b+4);
   lcd.print("cm");
   Serial.println(b+4);
   delay(300);
}
if(b>=70&&b<=80)
{
  //  lcd.print("Your Height:");
   lcd.print(b+5);
   lcd.print("cm");
   Serial.println(b+5);
   delay(300);
}
if(b>=80&&b<=85)
{
  //  lcd.print("Your Height:");
   lcd.print(b+6);
   lcd.print("cm");
   Serial.println(b+6);
   delay(300);
}
if(b>=86&&b<=90)
{
  //  lcd.print("Your Height:");
   lcd.print(b+7);
   lcd.print("cm");
   Serial.println(b+7);
   delay(300);
}
if(b>=91&&b<=95)
{
  //  lcd.print("Your Height:");
   lcd.print(b+8);
   lcd.print("cm");
   Serial.println(b+8);
   delay(300);
}
if(b>=96&&b<=100)
{
  //  lcd.print("Your Height:");
   lcd.print(b+9);
   lcd.print("cm");
   Serial.println(b+9);
   delay(300);
}
if(b>=101&&b<=105)
{
  //  lcd.print("Your Height:");
   lcd.print(b+10);
   lcd.print("cm");
   Serial.println(b+10);
   delay(300);
}
if(b>=106)
{
  //  lcd.print("Your Height:");
   lcd.print(b+11);
   lcd.print("cm");
   Serial.println(b+11);
   delay(300);
}

}