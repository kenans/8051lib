#ifndef _SPI_H_
#define _SPI_H_
#include "reg51.h"
#include "types.h"
// Mode
#define CPOL 0
#define CPHA 0
// Port
sbit MOSI = P1^3;
sbit MISO = P1^4;
sbit SCLK = P1^2;
sbit CS = P1^5;
// Macro
#define SPI_Init() do{SCLK=CPOL;MISO=1;CS=1;}while(0)
#define SPI_SelectDevice()   CS=0
#define SPI_DeselectDevice() CS=1
// Methods
void SPI_Write(uint8_t dat);
uint8_t SPI_Read(void);

#endif // _SPI_H_