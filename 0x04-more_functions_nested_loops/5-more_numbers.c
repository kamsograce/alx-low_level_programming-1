#include "main.h"
/**
 * more_numbers - print 0-14 10x
 *
 * Return: returns void
 */

void more_numbers(void)
{
	int i, counter = 0;

	while (counter < 10)
	{
		for (i = 48; i <= 57; i++)
			_putchar(i);
		for (i = 10; i <= 14; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		counter++;
	}
}
