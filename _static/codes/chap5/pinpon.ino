void setup() {
  //No specific setup when using the tone function on an input
}

void loop() {
      tone(2, 440, 1000); // Play a 440Hz A during 1 sec on pin 2
      delay(1050);
      tone(2, 494, 1000); // Play a 494Hz B during 1 sec on pin 2
      delay(1050);
}
