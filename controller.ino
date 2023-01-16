/*
 * This file contains the code for the ESP32 (Node-MCU) for our P5-Project
 * The code in this not only controlls the airship, but also servers a web server over WiFi for controlling it remotly. 
 * Further it serves the purpose to transmit, and save data gathered by the sensors on board.
*/


// Imports
#include <Arduino.h>
#include <DHT.h>
#if defined(ESP32)
  #include <WiFi.h>
#elif defined(ESP8266)
  #include <ESP8266WiFi.h>
#endif
#include <MQ135.h>
#include <Wire.h>
#include <Adafruit_BMP085.h>

// Setting up DHT11 sensor (temperature and humidity)
#define WIRE Wire
#define DHTPIN 16
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// Setting up MQ135 (CO2/Airquality sensor)
int val;
int sensorPin = 34;
int sensorValue = 0;
MQ135 gasSensor = MQ135(sensorPin, 54.51, 22); 

// Setting up bmp (Pressure sensor)
Adafruit_BMP085 bmp;

// Setting up wifi data
#define WIFI_SSID "Airship"
#define WIFI_PASSWORD "SuperSecretPassword"

// Startup/setup (Code runs only once) 
// Initialize and configure things needed later
void setup () {
  // Setting up sensors, wifi and servos
}

// Code that will be repeatet after controller startup
void loop () {
  // Serve website and send Data, controll motors and servos
}
