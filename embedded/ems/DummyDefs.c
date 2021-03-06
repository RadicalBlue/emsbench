/*
 * This file is part of EmsBench.
 *
 * Copyright 2015 University of Augsburg
 *
 * EmsBench is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EmsBench is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EmsBench.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * $Id: header-ems.c 480 2015-10-27 12:42:40Z klugeflo $
 * @file DummyDefs.c
 * @brief Variable definitions for all registers used by the original code.
 * @author Andreas Meixner, Claudius Heine,
 * Florian Kluge <kluge@informatik.uni-augsburg.de>
 */


#include "inc/DummyDefs.h"

#define IO __attribute__ ((__section__(".io")))
// add (init only) where applicable

volatile IO unsigned char ARMCOP; // DVUCP(0x003F) w
volatile IO unsigned char ATD0CTL2; // DVUCP(0x02C2) w (init only)
volatile IO unsigned char ATD0CTL3; // DVUCP(0x02C3) w (init only)
volatile IO unsigned char ATD0CTL4; // DVUCP(0x02C4) w (init only)
volatile IO unsigned char ATD0CTL5; // DVUCP(0x02C5) w (init only)
volatile IO unsigned short ATD0DR0; // DVUSP(ATD0_BASE + 0x0) r
volatile IO unsigned short ATD0DR1; // DVUSP(ATD0_BASE + 0x2) r
volatile IO unsigned short ATD0DR2; // DVUSP(ATD0_BASE + 0x4) r
volatile IO unsigned short ATD0DR3; // DVUSP(ATD0_BASE + 0x6) r
volatile IO unsigned short ATD0DR4; // DVUSP(ATD0_BASE + 0x8) r
volatile IO unsigned short ATD0DR5; // DVUSP(ATD0_BASE + 0xA) r
volatile IO unsigned short ATD0DR6; // DVUSP(ATD0_BASE + 0xC) r
volatile IO unsigned short ATD0DR7; // DVUSP(ATD0_BASE + 0xE) r
volatile IO unsigned char ATD1CTL0; // DVUCP(0x0080) w (init only)
volatile IO unsigned char ATD1CTL2; // DVUCP(0x0082) w (init only)
volatile IO unsigned char ATD1CTL3; // DVUCP(0x0083) w (init only)
volatile IO unsigned char ATD1CTL4; // DVUCP(0x0084) -
volatile IO unsigned char ATD1CTL5; // DVUCP(0x0085) -
volatile IO unsigned short ATD1DR0; // DVUSP(ATD1_BASE + 0x0) r
volatile IO unsigned short ATD1DR1; // DVUSP(ATD1_BASE + 0x2) r
volatile IO unsigned short ATD1DR2; // DVUSP(ATD1_BASE + 0x4) r
volatile IO unsigned short ATD1DR3; // DVUSP(ATD1_BASE + 0x6) r
volatile IO unsigned short ATD1DR4; // DVUSP(ATD1_BASE + 0x8) r
volatile IO unsigned short ATD1DR5; // DVUSP(ATD1_BASE + 0xA) r
volatile IO unsigned short ATD1DR6; // DVUSP(ATD1_BASE + 0xC) r
volatile IO unsigned short ATD1DR7; // DVUSP(ATD1_BASE + 0xE) r
volatile IO unsigned char CLKSEL; // DVUCP(0x0039) wr (init only)
volatile IO unsigned char COPCTL; // DVUCP(0x003C) w
volatile IO unsigned char CRGFLG; // DVUCP(0x0037) wr
volatile IO unsigned char CRGINT; // DVUCP(0x0038) wr (init only)
volatile IO unsigned char DDRA; // DVUCP(0x0002) w (init only)
volatile IO unsigned char DDRB; // DVUCP(0x0003) w (init only)
volatile IO unsigned char DDRC; //  DVUCP(0x0006) w (init only)
volatile IO unsigned char DDRD; //  DVUCP(0x0007) w (init only)
volatile IO unsigned char DDRE; // DVUCP(0x0009) w (init only)
volatile IO unsigned char DDRH; // DVUCP(0x0262) w (init only)
volatile IO unsigned char DDRJ; // DVUCP(0x026A) w (init only)
volatile IO unsigned char DDRK; // DVUCP(0x0033) w (init only)
volatile IO unsigned char DDRM; // DVUCP(0x0252) w (init only)
volatile IO unsigned char DDRP; // DVUCP(0x025A) w (init only)
volatile IO unsigned char DDRS; // DVUCP(0x024A) w (init only)
volatile IO unsigned char DDRT; // DVUCP(0x0242) w (init only)
volatile IO unsigned char FCLKDIV; // DVUCP(0x0100) w (init only)
volatile IO unsigned char FCMD; // DVUCP(0x0106) w
volatile IO unsigned char FPROT; // DVUCP(0x0104) w (init only)
volatile IO unsigned char FSTAT; // DVUCP(0x0105) wr
volatile IO unsigned char INT_CFADDR; // DVUCP(0x0127) w (init only)
volatile IO unsigned char INT_CFDATA0; // DVUCP(0x0128) w (init only)
volatile IO unsigned char INT_CFDATA1; // DVUCP(0x0129) w (init only)
volatile IO unsigned char IVBR; // DVUCP(0x0121) w (init only)
volatile IO unsigned short MCCNT; // DVUSP(0x0076) w
volatile IO unsigned char MCCTL; // DVUCP(0x0066) w (init only)
volatile IO unsigned char MCFLG; // DVUCP(0x0067) w
volatile IO unsigned char PIEH; // DVUCP(0x0266) w (init only)
volatile IO unsigned char PIFH; // DVUCP(0x0267) w
volatile IO unsigned char PIFJ; // DVUCP(0x026F) w
volatile IO unsigned char PIFP; // DVUCP(0x025F) w
volatile IO unsigned char PITCFLMT; // DVUCP(0x0340) w (init only)
volatile IO unsigned char PITMTLD0; // DVUCP(0x0346) w (init only)
volatile IO unsigned char PITMTLD1; // DVUCP(0x0347) w (init only)
volatile IO unsigned char PITTF; // DVUCP(0x0345) wr
volatile IO unsigned char PLLCTL; // DVUCP(0x003A) wr (init only)
volatile IO unsigned char PORTE; // DVUCP(0x0008) w (init only)
volatile IO unsigned char PORTH; // DVUCP(0x0260) w isr (init only)
volatile IO unsigned char PORTJ; // DVUCP(0x0268) wr
volatile IO unsigned char PORTK; // DVUCP(0x0032) wr
volatile IO unsigned char PORTM; // DVUCP(0x0250) w
volatile IO unsigned char PORTP; // DVUCP(0x0258) wr
volatile IO unsigned char PORTS; // DVUCP(0x0248) wr
volatile IO unsigned char PORTT; // DVUCP(0x0240) w
volatile IO unsigned char PPAGE; // DVUCP(0x0030) wr
volatile IO unsigned char PPSH; // DVUCP(0x0265) w (init only)
volatile IO unsigned char PTMCPSR; // DVUCP(0x006F) w (init only)
volatile IO unsigned char PTPSR; // DVUCP(0x006E) w (init only)
volatile IO unsigned char PWMCLK; // DVUCP(0x0302) w (init only)
volatile IO unsigned char PWMDTY0; // DVUCP(0x031C) w (utils init)
volatile IO unsigned char PWMDTY1; // DVUCP(0x031D) w (utils init)
volatile IO unsigned char PWMDTY2; // DVUCP(0x031E) w (utils init)
volatile IO unsigned char PWMDTY3; // DVUCP(0x031F) w (utils init)
volatile IO unsigned char PWMDTY4; // DVUCP(0x0320) w (utils init)
volatile IO unsigned char PWMDTY5; // DVUCP(0x0321) w (utils init)
volatile IO unsigned char PWMDTY6; // DVUCP(0x0322) w (utils init)
volatile IO unsigned char PWMDTY7; // DVUCP(0x0323) w (utils init)
volatile IO unsigned char PWME; // DVUCP(0x0300) w (init only)
volatile IO unsigned char PWMPER0; // DVUCP(0x0314) w (init only)
volatile IO unsigned char PWMPER1; // DVUCP(0x0315) w (init only)
volatile IO unsigned char PWMPER2; // DVUCP(0x0316) w (init only)
volatile IO unsigned char PWMPER3; // DVUCP(0x0317) w (init only)
volatile IO unsigned char PWMPER4; // DVUCP(0x0318) w (init only)
volatile IO unsigned char PWMPER5; // DVUCP(0x0319) w (init only)
volatile IO unsigned char PWMPER6; // DVUCP(0x031A) w (init only)
volatile IO unsigned char PWMPER7; // DVUCP(0x031B) w (init only)
volatile IO unsigned char PWMPRCLK; // DVUCP(0x0303) w (init only)
volatile IO unsigned char PWMSCLA; // DVUCP(0x0308) w (init only)
volatile IO unsigned char PWMSCLB; // DVUCP(0x0309) w (init only)
volatile IO unsigned char REFDV; // DVUCP(0x0035) w (init only)
volatile IO unsigned char RPAGE; // DVUCP(0x0016) wr
volatile IO unsigned char RTICTL; // DVUCP(0x003B) w (init only)
volatile IO unsigned short SCI0BD; // DVUSP(SCI0_BASE + 0x0) w (init only)
volatile IO unsigned char SCI0CR1; // DVUCP(SCI0_BASE + 0x2) w (init only)
volatile IO unsigned char SCI0CR2; // DVUCP(SCI0_BASE + 0x3) w
volatile IO unsigned char SCI0DRL; // DVUCP(SCI0_BASE + 0x7) w
volatile IO unsigned char SCI0SR1; // DVUCP(SCI0_BASE + 0x4) w
volatile IO unsigned char SYNR; // DVUCP(0x0034) w (init only)
volatile IO unsigned short TC0; // DVUSP(0x0050) r
volatile IO unsigned short TC1; // DVUSP(0x0052) r
volatile IO unsigned short TC2; // DVUSP(0x0054) -
volatile IO unsigned short TC3; // DVUSP(0x0056) -
volatile IO unsigned short TC4; // DVUSP(0x0058) -
volatile IO unsigned short TC5; // DVUSP(0x005A) -
volatile IO unsigned short TC6; // DVUSP(0x005C) -
volatile IO unsigned short TC7; // DVUSP(0x005E) -
volatile IO unsigned char TCTL1; // DVUCP(0x0048) w
volatile IO unsigned char TCTL2; // DVUCP(0x0049) w (staticinit only)
volatile IO unsigned char TCTL3; // DVUCP(0x004A) w (init only)
volatile IO unsigned char TCTL4; // DVUCP(0x004B) w (init only)
volatile IO unsigned char TFLG; // DVUCP(0x004E) w
volatile IO unsigned char TFLGOF; // DVUCP(0x004F) wr
volatile IO unsigned char TIE; // DVUCP(0x004C) wr
volatile IO unsigned char TIOS; // DVUCP(0x0040) wr
volatile IO unsigned char TSCR1; // DVUCP(0x0046) w (init only)
volatile IO unsigned char TSCR2; // DVUCP(0x004D) w (init only)
volatile IO unsigned char VREGAPICL; // DVUCP(0x02F2) wr
volatile IO unsigned short VREGAPIR; // DVUSP(0x02F4) w (init only)
volatile IO unsigned char VREGCTRL; // DVUCP(0x02F1) wr
volatile IO unsigned short XGMCTL; // DVUSP(0x0380) w (init only)
volatile IO unsigned short XGSWT; // DVUSP(0x0398) w
volatile IO unsigned short XGVBR; // DVUSP(0x0386) w (init only)
volatile IO unsigned char _PORTAB[2];
volatile IO unsigned short * _PAB = (unsigned short *)_PORTAB;

#ifdef NEED_START
void _start() {}
#endif

void StackBurner() {}
void xgateThread0End(void) {}
void xgateThread0(void) {}

