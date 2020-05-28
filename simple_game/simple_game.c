/*
 * simple_game.c
 *
 * Created: 26/05/2020 4:44:12 PM
 *  Author: M
 */ 


#include "LCD.h"
#include "keypad.h"

int main(void)
{
	int8_t key;
	LCD_init();
	keypad_init();
	LCD_write_string("10/?=2");
	while(1)
    {
	key=keypad_read();	
	if (key!=-1 && key=='5')
	{
		LCD_write_command(0x1);
		LCD_write_command(0x83);
		LCD_write_string("well done");
	}
	else if (key !=-1 && key!='5') {
		LCD_write_command(0x1);
		LCD_write_command(0x83);
		LCD_write_string("wrong answer");
		 }
    }
}