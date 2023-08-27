/*
  EPD_Driver_demo
  This is a demo sketch for the 5.8" small EPD from Pervasive Displays, Inc.
  The aim of this demo and the library used is to introduce CoG usage and global update functionality.
  
  Hardware Suggested:
  * Launchpad MSP432P401R or (Tiva-C) with TM4C123/Arduino M0 Pro/Raspberry Pi Pico
  * EPD Extension Kit (EXT2 or EXT3)
  * 5.81" EPD
  * 10-pin rainbow jumper cable
*/

#include <EPD_Driver.h>

// DEMO Image Set <Comment out when in User Mode>
#define SCREEN 581
// #include "globalupdate_src/demoImageData.h"
#include "demoImageData.h"
// #include "fastupdate_src/FuPu_Data_581.h"
#include "FuPu_Data_581.h"
//------------------------------------------------------------

#define EPD_SIZE eScreen_EPD_581
#define BOARD_TYPE boardRaspberryPiPico_RP2040_EXT3

void setup()
{
	EPD_Driver epdtest(EPD_SIZE, BOARD_TYPE);

	epdtest.globalUpdate(BW_monoBuffer, BW_0x00Buffer);
	delay(2000);
	epdtest.fastUpdate(FastPic_2, FastPic_1);
	epdtest.fastUpdate(FastPic_1, FastPic_2);
	epdtest.fastUpdate(FastPic_2, FastPic_1);
	epdtest.fastUpdate(FastPic_1, FastPic_2);
	delay(2000);
	epdtest.fastUpdate(FastPic_b, FastPic_1);
	epdtest.fastUpdate(FastPic_w, FastPic_b);
  epdtest.fastUpdate(FastPic_b, FastPic_g_25);
  delay(2000);
  epdtest.fastUpdate(FastPic_g_25, FastPic_g_50);
  delay(2000);
  epdtest.fastUpdate(FastPic_g_50, FastPic_g_75);
  delay(2000);
  epdtest.fastUpdate(FastPic_g_75, FastPic_clearpath);
}

void loop()
{
  delay(1000);
}
