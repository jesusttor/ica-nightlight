// light_sensor.ino - reads the photoresistor on LIGHT_SENSOR_PIN
// Returns 0 (dark) up to 1023 (bright).

int readLight() {
  // TODO Task 1 (Developer A): average SENSOR_SAMPLES readings.
  // Return the averaged reading.
  int total = 0;
  for (int i = 0; i < SENSOR_SAMPLES; i++) {
    total += analogRead(LIGHT_SENSOR_PIN);
  }
  return total / SENSOR_SAMPLES;
}

// TODO Task 8 (Project Manager): add lightLabel() below this line
