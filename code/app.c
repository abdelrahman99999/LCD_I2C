
#include "util/delay.h"
#include "lcd_I2C.h"

int main(void)
{
	LCD_init();
	LCD_clearScreen();
	LCD_displayString("Abdelrahman");
	_delay_ms(1000);
	LCD_moveCursor(1, 0);
	LCD_displayString("elsayed 123");
	_delay_ms(1000);
	uint8 counter=0;
	while(1)
	{
		LCD_clearScreen();
	    LCD_intgerToString(counter++);
		_delay_ms(500);
	}
	return 0;
}
