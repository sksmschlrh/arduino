int led1=4;
int led2=5;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the lpinModeoop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);
  delay(20);
  digitalWrite(led1, LOW);// turn the LED on (HIGH is the voltage level)
  delay(20);                       // wait for a second
  digitalWrite(led2, HIGH);
  delay(20);
  digitalWrite(led2, LOW);// turn the LED off by making the voltage LOW
  delay(20);                       // wait for a second
}
