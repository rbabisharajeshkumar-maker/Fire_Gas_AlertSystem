#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const int gasPin=A0;
const int flamePin=8;
const int buzzerPin=7;
const int ledPin=6;
int gasValue;
int flameValue;

void setup(){
  pinMode(flamePin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(ledPin,OUTPUT);
  digitalWrite(buzzerPin,LOW);
  digitalWrite(ledPin,LOW);
  lcd.begin();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0,0);
  lcd.print("Fire & Gas");
  lcd.setCursor(0,1);
  lcd.print("Alert System");
  delay(2000);
  lcd.clear();
}
void loop(){
  gasValue=analogRead(gasPin);
  flameValue=digitalRead(flamePin);
    lcd.setCursor(0,0);
    lcd.print("Gas:");
    lcd.print(gasValue);
    lcd.print(" ");
    if(gasValue>400){
      digitalWrite(buzzerPin,HIGH);
      digitalWrite(ledPin,HIGH);
      lcd.setCursor(0,1);
      lcd.print("Gas Leak Alert");
      Serial.println("GAS LEAK ALERT!");
      
    }
    else if(flameValue==LOW){
     digitalWrite(buzzerPin,HIGH);
     digitalWrite(ledPin,HIGH);
     lcd.setCursor(0,1);
     lcd.print("FIRE DETECTED!!!");
     Serial.println("FIRE DETECTED!");
     
    }
    else{
    digitalWrite(buzzerPin,LOW);
    digitalWrite(ledPin,LOW);
    lcd.setCursor(0,1);
    lcd.print("STATUS:SAFE");
    }
  delay(500);
}
  