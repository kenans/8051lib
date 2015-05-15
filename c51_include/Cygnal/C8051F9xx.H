/*--------------------------------------------------------------------------
C8051F9xx.H
Registers definition for Silicon Labs C8051F9xx

Copyright (c) 2008 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.
-------------------------------------------------------------------------- */

/* Byte Addresses */
sfr   P0   	 = 0x80;
sfr   SP   	 = 0x81;
sfr   DPL   	 = 0x82;
sfr   DPH   	 = 0x83;
sfr   SPI1CFG    = 0x84;
sfr   SPI1CKR    = 0x85;
sfr   TOFFL      = 0x85;
sfr   SPI1DAT    = 0x86;
sfr   TOFFH      = 0x86;
sfr   PCON   	 = 0x87;
sfr   TCON   	 = 0x88;
sfr   TMOD   	 = 0x89;
sfr   TL0   	 = 0x8A;
sfr   TL1   	 = 0x8B;
sfr   TH0   	 = 0x8C;
sfr   TH1   	 = 0x8D;
sfr   CKCON   	 = 0x8E;
sfr   PSCTL   	 = 0x8F;
sfr   P1   	 = 0x90;
sfr   TMR3CN   	 = 0x91;
sfr   CRC0DAT    = 0x91;
sfr   TMR3RLL    = 0x92;
sfr   CRC0CN     = 0x92;
sfr   TMR3RLH    = 0x93;
sfr   CRC0IN     = 0x93;
sfr   TMR3L   	 = 0x94;
sfr   CRC0FLIP   = 0x94;
sfr   TMR3H   	 = 0x95;
sfr   DC0CF   	 = 0x96;
sfr   CRC0AUTO   = 0x96;
sfr   DC0CN   	 = 0x97;
sfr   CRC0CNT    = 0x97;
sfr   SCON0   	 = 0x98;
sfr   SBUF0   	 = 0x99;
sfr   CPT1CN   	 = 0x9A;
sfr   CPT0CN   	 = 0x9B;
sfr   CPT1MD   	 = 0x9C;
sfr   CPT0MD   	 = 0x9D;
sfr   CPT1MX   	 = 0x9E;
sfr   CPT1MX   	 = 0x9F;
sfr   P2   	 = 0xA0;
sfr   SPI0CFG    = 0xA1;
sfr   SPI0CKR    = 0xA2;
sfr   SPI0CKR    = 0xA3;
sfr   SPI0CKR    = 0xA4;
sfr   SPI0CKR    = 0xA5;
sfr   P2MDOUT    = 0xA6;
sfr   SFRPAGE    = 0xA7;
sfr   IE   	 = 0xA8;
sfr   CLKSEL   	 = 0xA9;
sfr   EMI0CN   	 = 0xAA;
sfr   EMI0CF   	 = 0xAB;
sfr   RTC0ADR    = 0xAC;
sfr   P0DRV      = 0xAC;
sfr   RTC0DAT    = 0xAD;
sfr   P1DRV      = 0xAD;
sfr   RTC0KEY    = 0xAE;
sfr   P2DRV      = 0xAE;
sfr   EMI0TC   	 = 0xAF;
sfr   SPI1CN   	 = 0xB0;
sfr   OSCXCN   	 = 0xB1;
sfr   OSCICN   	 = 0xB2;
sfr   OSCICL   	 = 0xB3;
sfr   PMU0CF   	 = 0xB5;
sfr   FLSCL   	 = 0xB6;
sfr   FLKEY   	 = 0xB7;
sfr   IP   	 = 0xB8;
sfr   IREF0CN    = 0xB9;
sfr   ADC0PWR    = 0xB9;
sfr   ADC0AC   	 = 0xBA;
sfr   ADC0MX   	 = 0xBB;
sfr   ADC0CF   	 = 0xBC;
sfr   ADC0L   	 = 0xBD;
sfr   ADC0TK     = 0xBD;
sfr   ADC0H   	 = 0xBE;
sfr   P1MASK   	 = 0xBF;
sfr   SMB0CN   	 = 0xC0;
sfr   SMB0CF   	 = 0xC1;
sfr   SMB0DAT    = 0xC2;
sfr   ADC0GTL    = 0xC3;
sfr   ADC0GTH    = 0xC4;
sfr   ADC0LTL    = 0xC5;
sfr   ADC0LTH    = 0xC6;
sfr   P0MASK   	 = 0xC7;
sfr   TMR2CN   	 = 0xC8;
sfr   REG0CN   	 = 0xC9;
sfr   TMR2RLL    = 0xCA;
sfr   TMR2RLH    = 0xCB;
sfr   TMR2L   	 = 0xCC;
sfr   TMR2H   	 = 0xCD;
sfr   PCA0CPM5   = 0xCE;
sfr   P1MAT   	 = 0xCF;
sfr   PSW   	 = 0xD0;
sfr   REF0CN   	 = 0xD1;
sfr   PCA0CPL5   = 0xD2;
sfr   PCA0CPH5   = 0xD3;
sfr   P0SKIP   	 = 0xD4;
sfr   P1SKIP   	 = 0xD5;
sfr   P2SKIP   	 = 0xD6;
sfr   P0MAT   	 = 0xD7;
sfr   PCA0CN   	 = 0xD8;
sfr   PCA0MD   	 = 0xD9;
sfr   PCA0CPM0   = 0xDA;
sfr   PCA0CPM1   = 0xDB;
sfr   PCA0CPM2   = 0xDC;
sfr   PCA0CPM3   = 0xDD;
sfr   PCA0CPM4   = 0xDE;
sfr   PCA0PWM    = 0xDF;
sfr   ACC   	 = 0xE0;
sfr   XBR0   	 = 0xE1;
sfr   XBR1   	 = 0xE2;
sfr   XBR2   	 = 0xE3;
sfr   IT01CF   	 = 0xE4;
sfr   EIE1   	 = 0xE6;
sfr   EIE2   	 = 0xE7;
sfr   ADC0CN   	 = 0xE8;
sfr   PCA0CPL1   = 0xE9;
sfr   PCA0CPH1   = 0xEA;
sfr   PCA0CPL2   = 0xEB;
sfr   PCA0CPH2   = 0xEC;
sfr   PCA0CPL3   = 0xED;
sfr   PCA0CPH3   = 0xEE;
sfr   RSTSRC   	 = 0xEF;
sfr   B   	 = 0xF0;
sfr   P0MDIN   	 = 0xF1;
sfr   P1MDIN   	 = 0xF2;
sfr   P2MDIN   	 = 0xF3;
sfr   SMB0ADR    = 0xF4;
sfr   SMB0ADM    = 0xF5;
sfr   EIP1   	 = 0xF6;
sfr   EIP2   	 = 0xF7;
sfr   SPI0CN   	 = 0xF8;
sfr   PCA0L   	 = 0xF9;
sfr   PCA0H   	 = 0xFA;
sfr   PCA0CPL0   = 0xFB;
sfr   PCA0CPH0   = 0xFC;
sfr   PCA0CPL4   = 0xFD;
sfr   PCA0CPH4   = 0xFE;
sfr   VDM0CN   	 = 0xFF;
/* Bit Addresses */

/* P0 */

/* TCON */
sbit   IT0   	 = TCON^0;
sbit   IE0   	 = TCON^1;
sbit   IT1   	 = TCON^2;
sbit   IE1   	 = TCON^3;
sbit   TR0   	 = TCON^4;
sbit   TF0   	 = TCON^5;
sbit   TR1   	 = TCON^6;
sbit   TF1   	 = TCON^7;

/* SCON0 */
sbit   RI   	 = SCON0^0;
sbit   TI   	 = SCON0^1;
sbit   RB8   	 = SCON0^2;
sbit   TB8   	 = SCON0^3;
sbit   REN   	 = SCON0^4;
sbit   SM3   	 = SCON0^5;
sbit   SM1   	 = SCON0^6;
sbit   SM0   	 = SCON0^7;

/* IE */
sbit   EX0   	 = IE^0;
sbit   ET0   	 = IE^1;
sbit   EX1   	 = IE^2;
sbit   ET1   	 = IE^3;
sbit   ES   	 = IE^4;
sbit   EA   	 = IE^7;


/* IP */
sbit   PX0   	 = IP^0;
sbit   PT0   	 = IP^1;
sbit   PX1   	 = IP^2;
sbit   PT1   	 = IP^3;
sbit   PS   	 = IP^4;

/* PSW */
sbit   P   	 = PSW^0;
sbit   OV   	 = PSW^2;
sbit   RS0   	 = PSW^3;
sbit   RS1   	 = PSW^4;
sbit   F0   	 = PSW^5;
sbit   AC   	 = PSW^6;
sbit   CY   	 = PSW^7;


