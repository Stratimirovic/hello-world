// Cassandra Oliva

void setup() {
pinMode(0, OUTPUT);    // sets the digital pin 0 as output
pinMode(1, OUTPUT);    // sets the digital pin 1 as output
pinMode(2, OUTPUT);    // sets the digital pin 2 as output
pinMode(9, INPUT);    // sets the digital pin 9 as input
}
//MY NAME IS RIGHT HERE -> Luka Stratimirovic
void loop() {
  
if (digitalRead(9) == HIGH) { 
  digitalWrite(0, HIGH); // sets the digital pin 0 on
  delay(20000);            // waits for a second
  digitalWrite(0, LOW);  // sets the digital pin 0 off
  delay(20000);            // waits for a second
    digitalWrite(1, HIGH); // sets the digital pin 1 on
  delay(20000);            // waits for a second
  digitalWrite(1, LOW);  // sets the digital pin 1 off
  delay(20000);            // waits for a second
    digitalWrite(2, HIGH); // sets the digital pin 2 on
  delay(20000);            // waits for a second
  digitalWrite(2, LOW);  // sets the digital pin 2 off
  delay(20000);            // waits for a second
}
else{}
}
