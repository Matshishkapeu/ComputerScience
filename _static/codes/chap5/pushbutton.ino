void setup() {
  pinMode(13, OUTPUT); // initialize the LED pin as an output:
  pinMode(2, INPUT); // initialize the pushbutton pin as an input:
}

void loop() {
  int buttonState;

  // read the state of the pushbutton value:
  buttonState = digitalRead(2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(13, HIGH);
  } else {
    // turn LED off:
    digitalWrite(13, LOW);
  }
}