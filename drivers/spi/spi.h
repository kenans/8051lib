#ifndef _SPI_H_
#define _SPI_H_
#include "types.h"
#include "51_config.h"
// Mode
#define SPI_MODE 0
#define CPOL 0
#define CPHA 0
// Default SPI_MODE=0
#ifndef SPI_MODE
#define SPI_MODE 0
#endif 
// Default CPOL=0
#ifndef CPOL
#define CPOL 0
#endif 
// Default CPHA=0
#ifndef CPHA
#define CPHA 0
#endif
#if 1
// Port
sbit MOSI = P1^3;
sbit MISO = P1^4;
sbit SCLK = P1^2;
sbit CS = P1^5;
// Test
#if SPI_MODE != (CPOL*2+CPHA)
#error "SPI_MODE not match CPOL and CPHA."
#endif
// APIs
#define SPI_Init() do{SCLK=CPOL;MISO=1;CS=1;}while(0)
#define SPI_SelectDevice()   CS=0
#define SPI_DeselectDevice() CS=1
void SPI_WriteByte(uint8_t dat);
uint8_t SPI_ReadByte(void);
#elif REG51_TYPE==1
#elif REG51_TYPE==2
#define SPI_SelectDevice()   CS=0
#define SPI_DeselectDevice() CS=1
#define SPI_WriteByte(dat)   do{SPSTA&=0x7fu;SPI_WriteBuf(dat);for(;SPSTA|0x80u;);}while(0)
#define SPI_ReadByte()       SPI_ReadBuf()
#endif  // REG51_TYPE

#endif // _SPI_H_
