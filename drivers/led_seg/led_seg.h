#ifndef _LED_SEG_H_
#define _LED_SEG_H_
// --------------------------------------------------
//                  Includes
// --------------------------------------------------
#include "types.h"
// --------------------------------------------------
//                    APIs
// -------------------------------------------------- 
#define LED_MAX_COUNT 16u
#define LED(num) (~_led_inverse[num])
#define LED_OFF 0x00u
extern const uint8_t code _led_inverse[LED_MAX_COUNT];
#endif // _LED_SEG_H_
