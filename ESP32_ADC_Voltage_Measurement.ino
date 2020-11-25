// 0 - 5 volts range Example

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println(readVoltage(),1);
  float BatteryVoltage = readVoltage();
  delay(1000);
}

float readVoltage(){
  #define constant 5.9; // 0-5v range example
  // #define constant 7.1;   // 0-6v   range
  // #define constant 14.6;  // 0-12v  range
  // #define constant 18.5;  // 0-15v  range
  // #define constant 30.1;  // 0-24v  range
  // #define constant 38.1;  // 0-30v  range
  // #define constant 64.5;  // 0-50v  range
  // #define constant 130.0; // 0-100v range
  float ADCvoltage = (float)analogRead(36) / 4095 * constant;
  return ADCvoltage;         // 0-5v   range unless constant is changed
}
