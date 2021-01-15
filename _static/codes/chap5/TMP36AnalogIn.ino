void setup() {
  Serial.begin(9600); // initialize serial communications at 9600 bps:
}

void loop() {
  int sensorValue;        // value read from the TMP36

  sensorValue = analogRead(A0); // read the analog in value:
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\n");
  delay(200); //Wait 200 ms before the next loop
}
