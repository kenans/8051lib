#ifndef _UART_H_
#define _UART_H_

// Include
#include "51_pdd.h"
#include "type.h"
#include "ringbuf.h"
#include "51_conifg.h"
// APIs
void UART_SendChar(const char chr);
void UART_SendNChar(const char *str, const uint8_t count);
void UART_SendString(const char *str);
char UART_RecvChar(char *chr);

#ifndef UART_OnSentEvent
#define UART_OnSentEvent()
#endif // UART_OnSentEvent
#ifndef UART_OnRecvEvent
#define UART_OnRecvEvent()
#endif // UART_OnRecvEvent

#endif // _UART_H_
