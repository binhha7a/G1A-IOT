#include <DHT.h>
#include <LiquidCrystal.h>
  LiquidCrystal lcd(7,6,5,4,3,2);
#define sensor 2
const int DHTType =DHT11;
DHT dht(sensor, DHTType);
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  lcd.print("nhiet do: ");lcd.print(t);
  lcd.setCursor(1,0);
  lcd.print("do am: ");
  lcd.print(h);
  //Serial.println();
  delay(1000);
}
