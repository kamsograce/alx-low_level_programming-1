#include "main.h"
/*
 * times_table - 9 times multiplication table
 * @void: no arguments
 *
 * Description: 9 times table, starting from 0.
 * Return: void
 */
void times_table(void)
{
	int value;
	int line_counter = 0, multiplier = 0, number = 0;
	
	while (value <= 72)
	{
		while (line_counter <= 9) /*to make it 10 in a row*/
		{
			value = number * multiplier;
			if (line_counter == 0)
			{
				_putchar(value + '0');
			}
			else
				if (value < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(value + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((value / 10) + '0');
					_putchar((value % 10) + '0');
				}
			number++;
			line_counter++;
		}
		_putchar('\n');
		line_counter = 0;
		multiplier++;
		number = 0;
	}
}
