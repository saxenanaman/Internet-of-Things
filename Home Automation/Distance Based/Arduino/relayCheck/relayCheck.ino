
int relayInput1 = 12;
int relayInput2 = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(relayInput1,OUTPUT);
  pinMode(relayInput2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayInput1, HIGH);
  digitalWrite(relayInput2, LOW);
  delay(1000);
  digitalWrite(relayInput1, LOW);
  digitalWrite(relayInput2, HIGH);
  delay(1000);
}
