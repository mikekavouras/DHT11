#include "Adafruit_Sensor.h"
#include "DHT.h"
#include "DHT_U.h"

#include <DHT.h>
#include <DHT_U.h>

#define DHT_11_PIN A0
#define DHTTYPE DHT11

DHT dht(DHT_11_PIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println("DHT11 test");

  dht.begin();
}

void loop() {

  float humidity = dht.readHumidity();
  float temp = dht.readTemperature(true);

  Serial.print("Temperature = ");
  Serial.println(temp);

  Serial.print("Humidity = ");
  Serial.println(humidity);

  delay(1000);
}
