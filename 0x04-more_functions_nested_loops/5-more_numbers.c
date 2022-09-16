#include "main.h"
/**
 * more_numbers - print 0-14 10x
 *
 * Return: returns void
 */

void more_numbers(void)
{
	int c, x;

	for (c = 0; c < 10; c++)
	{
		for (x = 0; x < 14; x++)
		{
			for (c = 0; c < 10; c++)
			{
				_putchar((x / 10) + 48);
			}
			_putchar((x / 10) + 48);
		}
		_putchar((x / 10) + 48);
	}
	_putchar('\n');
}
