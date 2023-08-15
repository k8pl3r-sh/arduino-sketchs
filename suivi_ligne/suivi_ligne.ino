
// A calibrer pour 1 dans le noir, un dans le blanc

int signalPin = 3; //capteur de ligne grove seeedstudio

int value =0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(signalPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = digitalRead(signalPin);
  Serial.println(value);
  delay(100);
  
}
