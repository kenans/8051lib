#include "spi.h"

//  Read from SPI device
uint8_t SPI_Read()
{
    uint8_t dat=0, i=0;
    SCLK = 0;
    for (i = 0; i<8; i++) {
        dat<<=1;  
        SCLK = 1;
        if (MISO)
            dat|=0x01;
        else
            dat&=0xfe;
        SCLK = 0;   
    }
    SCLK = 0;
    return dat;
}
// Write to SPI device
void SPI_Write(uint8_t dat)
{
    uint8_t i = 0;
    SCLK = 0;
    for (i = 0; i<8; i++) {
        SCLK = 0;
        if (dat&0x80)
            MOSI = 1;
        else
            MOSI = 0;
        SCLK = 1;   // rising edge, device sampling
        dat<<=1;
    }
    SCLK = 0;  
}
