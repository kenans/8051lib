#include "25AA.h"

static void _DelayMs(unsigned int num);


/**
 *  EEPROM read a byte
 */
uint8_t EEPROM_25AA_ReadByte(uint16_t addr)
{
    uint8_t dat;
    // Select device
    _SelectDevice();
#ifdef EEPROM_25AA040A
    // Send instruction + addr MSB
    if (addr&0x100)
        SPI_Write(0x08U|EEPROM_25AA_READ);
    else
        SPI_Write(EEPROM_25AA_READ);    
#endif
#ifdef EEPROM_25AA256
    // Instruction
    SPI_Write(EEPROM_25AA_READ);
    // Upper address
    SPI_Write((uint8_t)((addr>>8)&0xff));
#endif
    // Send lower addr 
    SPI_Write((uint8_t)(addr&0xff));
    // Get data
    dat = SPI_Read();
    // Deselect device
    _DeselectDevice();
    return dat;
}
/**
 *  EEPROM write a byte
 */
void EEPROM_25AA_WriteByte(uint16_t addr, uint8_t dat)
{
    EEPROM_25AA_WriteEnable();
    // Select device
    _SelectDevice();
#ifdef EEPROM_25AA040A
    // Send instruction + addr MSB
    if (addr&0x100)
        SPI_Write(0x08U|EEPROM_25AA_WRITE);
    else
        SPI_Write(EEPROM_25AA_WRITE);    
#endif
#ifdef EEPROM_25AA256
    // Instruction
    SPI_Write(EEPROM_25AA_WRITE);
    // Upper address
    SPI_Write((uint8_t)((addr>>8)&0xff));
#endif
    // Send lower addr 
    SPI_Write((uint8_t)(addr&0xff));
    // Send data
    SPI_Write(dat);
    // Deselect device
    _DeselectDevice();
    // Twc = 5ms
    _DelayMs(5);
}
/**
 *  Delay ms
 */
static void _DelayMs(unsigned int num)
{
	unsigned int i = 0;
	for (;num > 0;num--) {
		for (i = 0; i<128 ; i++) {
		  	// Do nothing
		}
	}
}

