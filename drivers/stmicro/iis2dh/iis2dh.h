#ifndef IIS2DH_H
#define IIS2DH_H

// From STMicro's datasheet 'iis2dh.pdf' first public release 2015-04-21:
// SD0 connected to VDD:
#define IIS2DH_I2C_ADDRESS__SDO_HIGH (0x19) // 0b0011001
// SD0 connected to GND:
#define IIS2DH_I2C_ADDRESS__SDO_LOW  (0x18) // 0b0011000

#endif // IIS2DH_H
