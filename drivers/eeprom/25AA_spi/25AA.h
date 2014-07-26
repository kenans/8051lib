#ifndef _25AA_H_
#define _25AA_H_
// Include
#include "spi.h"
#include "types.h"
// Macros
// EEPROM Type
#define EEPROM_25AA256
// Instructions
#define EEPROM_25AA_READ   0x03U   // Read instruction
#define EEPROM_25AA_WRITE  0x02U   // Write instruction
#define EEPROM_25AA_WRDI   0x04U   // Reset write latch (disable write)
#define EEPROM_25AA_WREN   0x06U   // Set write latch (enable write)
#define EEPROM_25AA_RDSR   0x05U   // Read STATUS register
#define EEPROM_25AA_WRSR   0x01U   // Write STATUS register

// Methods
#define EEPROM_25AA_Init()  do{SPI_Init();}while(0)
#define EEPROM_25AA_WriteEnable()  do{_SelectDevice();SPI_Write(EEPROM_25AA_WREN);_DeselectDevice();}while(0)
#define EEPROM_25AA_WriteDisable() do{_SelectDevice();SPI_Write(EEPROM_25AA_WRDI);_DeselectDevice();}while(0)
#define _SelectDevice()     SPI_SelectDevice()
#define _DeselectDevice()   SPI_DeselectDevice()

void EEPROM_25AA_WriteByte(uint16_t addr, uint8_t dat);
//void EEPROM_25AA_WriteBlock(uint16_t addr, uint8_t *dat, uint8_t len);
uint8_t EEPROM_25AA_ReadByte(uint16_t addr);
//void EEPROM_25AA_ReadBlock(uint16_t addr, uint8_t *dat, uint8_t len);

#endif // _25AA_H_
