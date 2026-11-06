# Sources and provenance

Documentation checked: **2026-11-06**. Linked upstream pages may change.

| Source | Used for |
| --- | --- |
| James Henriksen, note shared by the repository owner, November 3, 2026 | Sensor identity, manufacturer/address, specifications, prices, product links, and report that newer SCI DAQ firmware includes sensor support |
| [SEN0654 product](https://www.dfrobot.com/product-2973.html) | Cross-check of supplied specifications, $69 reference price, product identity |
| [DFR0999 product](https://www.dfrobot.com/product-2655.html) | $39.90 reference price and logger identity |
| [Methane + SCI DAQ tutorial supplied by James](https://wiki.dfrobot.com/sen0654/docs/16752) | No-code workflow, hookup diagram, V1.0.5 minimum firmware |
| [Code-free methane tutorial](https://wiki.dfrobot.com/sen0654/docs/20698) | Additional confirmation of minimum firmware |
| [SCI DAQ getting started](https://wiki.dfrobot.com/dfr0999/docs/21430) | Firmware installation, backup, storage formatting |
| [SCI DAQ reference](https://wiki.dfrobot.com/dfr0999/docs/21424) | Port selection, logging buttons, export, settings |
| [SCI DAQ firmware](https://github.com/DFRobot/DFRobot_RP2040_SCI/tree/master/resources/firmware) | Official firmware download location |
| [Direct Arduino tutorial](https://wiki.dfrobot.com/sen0654/docs/20699) | Library installation, I2C switch, address, direct sensor API |
| [Methane library and methods](https://github.com/DFRobot/DFRobot_MHZ9041A#methods) | Direct driver API and fault-code reference |
| [SCI DAQ library](https://github.com/DFRobot/DFRobot_RP2040_SCI) | Separate controller-to-logger library |
| [Winsen website](https://www.winsen-sensor.com/) | Manufacturer website supplied in the note; no separate Winsen datasheet verified here |

The original private email is summarized rather than archived with recipient details. The two photographs were supplied by the repository owner; their original filenames are recorded in images/README.md. Filename dates are not treated as confirmed acquisition dates.

Repository recommendations such as run IDs, keeping raw exports, a trial recording, and a one-second starting interval are proposed project practices. They are not claims of a manufacturer-validated experimental protocol.

Still to establish: physical unit serial numbers; installed firmware; calibration/reference-gas records; methane LEL conversion reference; chamber and flow-path dimensions; leak testing; field protocol; actual native CSV header; and hardware validation of the example sketch.
