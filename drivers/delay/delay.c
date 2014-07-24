#include "delay.h"

void DelayMs(unsigned int num)
{
	unsigned int i = 0;
	for (;num > 0;num--) {
		for (i = 0; i<128 ; i++) {
		  	// Do nothing
		}
	}
}

void Delay10Us(unsigned int num)
{
	for (;num > 0;num--) {
		//_nop_();
	}
}