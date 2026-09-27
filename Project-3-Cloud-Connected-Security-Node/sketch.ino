#include <WiFi.h>
#include <PubSubClient.h>

#define TRIG_PIN 5
#define ECHO_PIN 18

const char* ssid = "Wokwi-GUEST";
const char* password = "";

// Adafruit IO
const char* mqtt_server = "io.adafruit.com";

const char* username = "Vidhya21";
const char* aio_key = "aio_pBuF17avmTA6dEc6IBLGfDAKanQ8";

WiFiClient espClient;
PubSubClient client(espClient);

void setup_wifi() {

  Serial.print("Connecting to WiFi");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected!");
}

void reconnect_mqtt() {

  while (!client.connected()) {

    Serial.print("Connecting to Adafruit IO...");

    if (client.connect("DecodeLabsESP32",
                       username,
                       aio_key)) {

      Serial.println("Connected!");

    } else {

      Serial.print("Failed, rc=");
      Serial.println(client.state());

      delay(2000);
    }
  }
}

void setup() {

  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  setup_wifi();

  client.setServer(mqtt_server, 1883);
}

void loop() {

  if (!client.connected()) {
    reconnect_mqtt();
  }

  client.loop();

  // Ultrasonic measurement

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH);

  float distance = duration * 0.034 / 2;

  // Serial output

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Send to Adafruit IO

  char message[20];

  snprintf(message, sizeof(message), "%.2f", distance);

  client.publish("Vidhya21/feeds/distance", message);

  Serial.println("Adafruit IO Data Sent!");

  delay(2000);
}
