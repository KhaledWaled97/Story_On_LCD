/*
 * main.c
 *
 *  Created on: Oct 24, 2023
 *      Author: Khaled Waled
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "LCD_interfac.h"


#include <util/delay.h>

	u8 customChar[8] = {0x04,0x0A,0x04,0x04,0x0E,0x15,0x04,0x0A}; 		//  person 1
	u8 customChar_1[8] = {0x00,0x0E,0x11,0x15,0x1B,0x0E,0x00, 0x00};	// Sad face
	u8 customChar_2[8] = {0x00,0x0A,0x1F,0x1F,0x1F, 0x0E,0x04,0x00};	// Heart
int main()
{
	HLCD_voidLcdIntiate();
	HLCD_voidLcdDraw(customChar, 0, 0, 0);

	HLCD_voidLcdWriteString(" I was lonely", 0, 1);

	HLCD_voidLcdDraw(customChar_1, 1, 0, 14);
	_delay_ms(1000);
	HLCD_voidLcdWriteString("most", 0, 15);
	HLCD_voidLcdWriteString("of the time ", 1, 0);
	_delay_ms(500);
	HLCD_voidLcdWriteString("till met", 1, 12);
	HLCD_voidLcdWriteString("my friend Sosa ", 2, 0);
	HLCD_voidLcdDraw(customChar_2, 2, 2, 15);
	_delay_ms(1000);
	HLCD_voidLcdWriteString("she", 2, 16);
	HLCD_voidLcdWriteString("was kind,lovely and", 3, 0);

	HLCD_voidLcdWriteString("                    ", 0, 0);
	HLCD_voidLcdWriteString("pretty.", 0, 0);
	_delay_ms(1000);
	HLCD_voidLcdWriteString("We talked ...", 0, 7);
	HLCD_voidLcdWriteString("                    ", 1, 0);
	HLCD_voidLcdWriteString("                    ", 2, 0);
	HLCD_voidLcdWriteString("                    ", 3, 0);
	HLCD_voidLcdWriteString("alot,", 1, 0);
	HLCD_voidLcdWriteString("laughed,joked,", 1, 5);
	HLCD_voidLcdWriteString("and made happy...", 2, 0);
	HLCD_voidLcdWriteString("memories,and we are", 3, 0);
	_delay_ms(500);
	HLCD_voidLcdWriteString("                    ", 0, 0);
	HLCD_voidLcdWriteString("                    ", 1, 0);
	HLCD_voidLcdWriteString("                    ", 2, 0);
	HLCD_voidLcdWriteString("                    ", 3, 0);
	_delay_ms(500);
	HLCD_voidLcdDraw(customChar_2, 2, 1, 3);

	HLCD_voidLcdWriteString("now married", 1, 4);
	HLCD_voidLcdDraw(customChar_2, 2, 1, 15);
	_delay_ms(500);
	HLCD_voidLcdDraw(customChar, 0, 2, 9);
	HLCD_voidLcdDraw(customChar, 0, 2, 10);

	while(1)
	{

	}
	return 0;
}

