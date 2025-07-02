#include <WiFi.h>

const char* ssid = " name ";      // Replace with your WiFi network name
const char* password = " password ";  // Replace with your WiFi password

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  Serial.print("Connecting to WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("\nConnected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("WiFi is connected!");
  } else {
    Serial.println("WiFi is disconnected!");
  }
  delay(1000);
}
