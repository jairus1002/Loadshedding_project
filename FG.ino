void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
}

void loop() {
  int sensorValue = analogRead(A0); // Read the analog voltage from pin A0
  float voltage = sensorValue * (25/1023.0); // Convert the sensor value to voltage (assuming 5V reference voltage)

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println("V");

  delay(1000); // Wait for 1 second before taking another reading
}
