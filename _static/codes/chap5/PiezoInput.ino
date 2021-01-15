int piezoValue;

void setup() {
  Serial.begin(9600); //begin serial connection for monitoring
}

void loop() {
  piezoValue = analogRead(A0);
  Serial.print("piezo value ");
  Serial.println(piezoValue);
  delay(600);
}
