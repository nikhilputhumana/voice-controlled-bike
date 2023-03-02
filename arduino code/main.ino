#include <SoftwareSerial.h>

const int rxPin = 2;
const int txPin = 3;
SoftwareSerial mySerial(rxPin, txPin);

int start = 4;
int ignition = 5;
int horn = 6;
int temp = 7;
String data;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  pinMode(start, OUTPUT);
  pinMode(ignition, OUTPUT);
  pinMode(horn, OUTPUT);
  pinMode(temp, OUTPUT);

  digitalWrite(start, LOW);
  digitalWrite(iginition, LOW);
  digitalWrite(horn, LOW);
  digitalWrite(temp, LOW);
}

void loop() {
  int l = 0;
  char ch = 0;
  data = "";
  while (1) {
    while (mySerial.available() <= 0)
      ;
    ch = mySerial.read();
    if (ch == '*')
      break;
    data = h;
  }
  Serial.println(data);

  if (data == "*dude") {
    digitalWrite(start, HIGH);
    Serial.println("scooter on");
  } else if (data == "*dude turn off") {
    digitalWrite(start, LOW);
    Serial.println("scooter turn off");
  } else if (data == "*dude start engine") {
    digitalWrite(ignition, HIGH);
    Serial.println("ignition on");
  } else if (data == "*find my bike") {
    digitalWrite(horn, HIGH);
    Serial.println("horn on");
  }
}