# ESP32-ADC-Voltage-Measurement
Using the ADC to measure voltage

The function that corrects for the ESP32 ADC input impedance loading of an attached voltage divder. I have estimated the ESp32 ADC input impedance to be 1.3Mohms

float readVoltage(){
  
  #define constant 5.9; 
  
  // 0-5v range example, should be a factor of 5, but loading increases it to 5.9
  
  // defined constant 5.9   // 0-5v   range
  
  // #define constant 7.1   // 0-6v   range
  
  // #define constant 14.6  // 0-12v  range
  
  // #define constant 18.5  // 0-15v  range
  
  // #define constant 30.1  // 0-24v  range
    
  // #define constant 38.1  // 0-30v  range
  
  // #define constant 64.5  // 0-50v  range
  
  // #define constant 130.0 // 0-100v range
  
  float ADCvoltage = (float)analogRead(36) / 4095 * constant;
  
  return ADCvoltage * constant; // 0-5v   range
}

// I cannot fully explain why as input voltage increases and effective load on the voltage divider by the ESP32 decreases that the constant offset increases, it should be the opposite!
