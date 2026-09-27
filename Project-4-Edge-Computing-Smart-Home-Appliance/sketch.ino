#define PIR_PIN 27
#define GAS_PIN 34

#define LIGHT_LED 25
#define RED_LED 26
#define BUZZER 14

int gasThreshold = 2000;

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(GAS_PIN, INPUT);

  pinMode(LIGHT_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {

  int gasValue = analogRead(GAS_PIN);
  int pirValue = digitalRead(PIR_PIN);

  Serial.print("Gas Value: ");
  Serial.print(gasValue);

  Serial.print(" | PIR: ");
  Serial.println(pirValue);

  // Safety override
  if (gasValue > gasThreshold) {

    digitalWrite(LIGHT_LED, LOW);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);

    Serial.println("!!! GAS/SMOKE ALERT !!!");
    Serial.println("Safety Override Activated");
  }

  // Normal operation
  else {

    digitalWrite(RED_LED, LOW);
    digitalWrite(BUZZER, LOW);

    if (pirValue == HIGH) {

      digitalWrite(LIGHT_LED, HIGH);

      Serial.println("Motion Detected");
      Serial.println("Smart Light ON");

    } else {

      digitalWrite(LIGHT_LED, LOW);
    }
  }

  delay(500);
}
