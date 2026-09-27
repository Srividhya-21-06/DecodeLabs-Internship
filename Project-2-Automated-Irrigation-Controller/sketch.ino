#define SOIL_PIN A0
#define RELAY_PIN 7

int threshold = 500;

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  int moistureValue = analogRead(SOIL_PIN);

  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);

  if (moistureValue < threshold) {
    digitalWrite(RELAY_PIN, HIGH);
    Serial.println("Soil is DRY - Water Pump ON");
  } 
  else {
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("Soil is WET - Water Pump OFF");
  }

  Serial.println("--------------------");
  delay(2000);
}
