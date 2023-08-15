int sensorPin = A0; // select the input pin for the potentiometer
//int ledPin = 13; // select the pin for the LED
int sensorValue = 0; // variable to store the value coming from the sensor
 //https://tkkrlab.nl/wiki/Arduino_KY-038_Microphone_sound_sensor_module
void setup () 
{
  //pinMode (ledPin, OUTPUT);
  Serial.begin (9600);
}
 
void loop () 
{
  sensorValue = analogRead (sensorPin);
  //digitalWrite (ledPin, HIGH);
  delay (sensorValue);
  //digitalWrite (ledPin, LOW);
  delay (sensorValue);
  Serial.println (sensorValue, DEC);
}
