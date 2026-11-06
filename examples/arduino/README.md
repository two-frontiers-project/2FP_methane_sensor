# Direct sensor-to-Arduino CSV example

This route connects **SEN0654 directly to an Arduino over I2C**. It does not program or read through the SCI DAQ.

1. Install Arduino IDE and the `DFRobot_MHZ9041A` library using Library Manager.
2. With power off, select I2C on the sensor. Follow the [official Arduino wiring diagram](https://wiki.dfrobot.com/sen0654/docs/20699), matching power requirements and SDA/SCL pins for your board. The library's default sensor address here is `0x34`.
3. Open `methane_serial_csv/methane_serial_csv.ino`, select your board and serial port, and upload.
4. Open Serial Monitor at 115200 baud. Allow initialization and the 15-second warm-up; the header appears afterward.
5. Capture serial output with your chosen terminal if a file is needed. Serial Monitor display alone is not an automatic file archive.

Columns: `elapsed_ms` (Arduino uptime, not UTC), `ch4_percent_lel`, `sensor_temperature_c`, and `fault_code`. Nonzero fault codes must be investigated using the [upstream API](https://github.com/DFRobot/DFRobot_MHZ9041A#methods). Preserve rows and flag faults during analysis. The separate library calls are not guaranteed to represent an atomic sample. Arduino millis() wraps after roughly 49.7 days.

The one-second output interval is a starting choice. The example omits calibration/reset commands. It has been checked against the published API but has not been compiled or run on hardware in this repository. Install the vendor library separately under its own license.
