#include "uart.h"
#define LOCAL_BUFFER_COUNT 16
static char _local_buf[LOCAL_BUFFER_COUNT];     // Local ring buffer
static const uint8_t _size = LOCAL_BUFFER_COUNT;   // ring buffer size
static uint8_t _start=0;
static uint8_t _end=0;

void UART_Init()
{
    UART_SetMode(1);
    UART_MultiCommunicationDisable();
    UART_RecvEnable();
    UART_InterruptEnable();
    UART_Start(9600);
}
void UART_SendChar(const char chr)
{
    UART_SendByte(chr);
    while (!UART_GetTransmitIntFlag()) {
        // Wait until transmitted    
    }
    UART_ClearTransmitIntFlag();
}
void UART_SendNChar(const char *str, const uint8_t count)
{
    uint8_t i = 0;
    for (i=0; i<count ; i++) {
        UART_SendChar(str[i]);
    }
}
void UART_SendString(const char *str)
{
    while (*str!='\0') {
        UART_SendChar(*str);
        str++;
    }
}
char UART_RecvChar(char *chr)
{
     if (!LocalBuf_IsEmpty()) {
        *chr = LocalBuf_Get();
        return *chr;
     } else {
        return 0;
     }
}
void UART_Interrupt() interrupt 4
{
    if (UART_GetRecvIntFlag()) {
        UART_ClearRecvIntFlag();
        if (!LocalBuf_IsFull())         
            LocalBuf_Put(SBUF);
        UART_OnRecvEvent();    
    }
}
