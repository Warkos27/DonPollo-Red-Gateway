#include <Arduino.h>
#include <WiFi.h>

const char *ssid = "DonPollo_Red";
const char *password = "12345678";

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("\nConfigurando ESP32 como Punto de Acceso (AP)...");
  
  WiFi.softAP(ssid, password);
  
  IPAddress IP = WiFi.softAPIP();
  Serial.println("🌐 ¡Red Local Creada con Éxito!");
  Serial.print("SSID: ");
  Serial.println(ssid);
  Serial.print("IP del Gateway: ");
  Serial.println(IP);
}

void loop() {
  delay(5000);
}