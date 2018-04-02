/*
 * Final code with integrated Ultrasonic sensor with relay
 */

// Pin declaration for HC-SR04
int trigPin = 9;
int echoPin = 8;

// Variables for HC-SR04
long duration;
int distance;

// Pin declaration for the relay
int relay1InputPin = 12;
int relay1VccPin = 13;

void setup() {
  //Pin setup for the ultrasonic sensor
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  
  //Pin setup for the relay
  pinMode(relay1InputPin, OUTPUT);
  pinMode(relay1VccPin, OUTPUT);
  digitalWrite(relay1VccPin, HIGH);
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trig Pin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echo Pin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;

  // Condition to activate the relay
  if( distance<10 )
    digitalWrite(relay1InputPin, HIGH);
  else
    digitalWrite(relay1InputPin, LOW);
}
