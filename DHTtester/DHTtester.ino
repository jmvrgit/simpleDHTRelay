#include "DHT.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

#define DHTPIN 2
#define DHTTYPE DHT11   // DHT 11
#define threshold_high 30
#define RELAY_PIN 3

LiquidCrystal_I2C lcd(0x27,16,2);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(500);
  lcd.clear();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  Serial.print(t);
  Serial.print(F("°C "));
  lcd.print(t);
  lcd.print(F("C"));
  
  if (t > threshold_high){
    digitalWrite(RELAY_PIN, LOW);
  } else {
    digitalWrite(RELAY_PIN, HIGH);
  }
}
