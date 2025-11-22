#define analogPin A0
#define ledPin     13     // digital pin for LED
#define THRESHOLD_TEMP 10.0  // threshold in °C

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorRead = analogRead(analogPin);
  float voltageOut = sensorRead * (5.0 / 1024.0);   // 5V reference
  float tempC = (voltageOut - 0.5) * 100.0;         // 

  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" °C");

  if (tempC < THRESHOLD_TEMP) {
    // flicker the LED
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(2000);   // wait 2 seconds between readings
}

