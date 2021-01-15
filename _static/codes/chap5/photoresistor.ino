void setup() {
  Serial.begin(9600); // initialize serial communications at 9600 bps:
}

void loop() {
  int sensorValue;        // value read from the voltage divider (resistor + photoresistor)

  sensorValue = analogRead(A0); // read the analog in value
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\n");
  delay(1000); //Wait 1000 ms before the next loop
}
