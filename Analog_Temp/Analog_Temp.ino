
//Calibrer valeur pour avoir une température en degrès Celcius
//https://sites.google.com/site/summerfuelrobots/arduino-sensor-tutorials/analogue-temperature-sensor


int sensorPin = A5; // select the input pin for the potentiometer
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(sensorPin);
Serial.println(sensorValue, DEC);
delay(1000);
}
