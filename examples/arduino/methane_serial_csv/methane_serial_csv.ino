// Direct SEN0654 I2C reader using the separately installed DFRobot_MHZ9041A library.
// API reference: https://wiki.dfrobot.com/sen0654/docs/20699
// Project example; not compiled or hardware-tested here.
#include <Wire.h>
#include <DFRobot_MHZ9041A.h>

DFRobot_MHZ9041A_I2C methane(&Wire, 0x34);

void setup() {
  Serial.begin(115200);
  while (!methane.begin()) {
    Serial.println(F("# Sensor not found; check power, I2C switch, and wiring."));
    delay(1000);
  }
  methane.setMode(ePassivityMode);
  delay(15000);  // Vendor-specified warm-up; chamber equilibration may take longer.
  Serial.println(F("elapsed_ms,ch4_percent_lel,sensor_temperature_c,fault_code"));
}

void loop() {
  const unsigned long elapsed = millis();
  const float concentration = methane.getCH4Concentration();
  const float temperature = methane.getTemperature();
  const eFaultCode_t fault = methane.getErrorMsg();
  Serial.print(elapsed);
  Serial.print(',');
  Serial.print(concentration, 1);
  Serial.print(',');
  Serial.print(temperature, 2);
  Serial.print(',');
  Serial.println(static_cast<unsigned int>(fault));
  delay(1000);
}
