#include "main.h"
/**
 * 24_hours - displays time
 * @void: no argument to be passed 
 *
 * Description: prints time form "00:00" to "23:59"
 * Return: 0 Always
 */

int hour, minute;

void time_24(void)
{
	_putchar(hour);
	_putchar(':' + '0'); 
	_putchar(minute);
	_putchar('\n' + '0');
	return;
}

void jack_bauer(void)
{
	hour = 0;
	minute = 0;

	while (hour < 24)
	{
		time_24();
		hour++;
		while (minute < 60)
		{
			time_24();
			minute++;
		}
		minute = 0;
	}
	return;
}
