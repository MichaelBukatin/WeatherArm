#include <Servo.h> //lib
#include <DHT.h>

// pin
const int VRx = A0;
const int VRy = A1;
const int SW = 2;

const int redLED = 4;
const int greenLED = 5;
const int blueLED = 6;

const int servoPin = 3;

const int DHTPIN = 7;

#define DHTTYPE DHT11
Servo myServo;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  pinMode(SW, INPUT_PULLUP); // button

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  myServo.attach(servoPin);
  myServo.write(90); // Start pos

  dht.begin();
}

void loop() {
  int xValue = analogRead(VRx);
  int yValue = analogRead(VRy);
  int swState = digitalRead(SW);

  bool moved = false;

  // axis X — left
  if (xValue < 400) {
    digitalWrite(redLED, HIGH);
    myServo.write(30);
    moved = true;
  } else {
    digitalWrite(redLED, LOW);
  }

  // axis Y — right
  if (yValue > 600) {
    digitalWrite(greenLED, HIGH);
    myServo.write(150); 
    moved = true;
  } else {
    digitalWrite(greenLED, LOW);
  }

  if (!moved) {
    myServo.write(90);
  }

  // DHT11
  if (swState == LOW) {
    digitalWrite(blueLED, HIGH);
    float temp = dht.readTemperature();
    float hum = dht.readHumidity();

    if (!isnan(temp) && !isnan(hum)) {
      Serial.print("Temperature: ");
      Serial.print(temp);
      Serial.print(" °C  |  Humidity: ");
      Serial.print(hum);
      Serial.println(" %");
    } else {
      Serial.println("Eror read DHT11");
    }

    delay(500);
  } else {
    digitalWrite(blueLED, LOW);
  }

  delay(100);
}



