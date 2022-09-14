#include "main.h"
/**
 * times_table - prints the n times multiplication table
 * @n: stop at n
 *
 * Description: prints n times table, starting from 0
 * Return: returns void
 */
void print_times_table(int n)
{
	int value;
	int line_counter = 0, multiplier = 0, number = 0;

	while (value <= ((n*n) - n))
	{
		while (line_counter <= n)
		{
			value = number * multiplier;
			if (line_counter == 0)
			{
				_putchar(value + '0');
			}
			else
				if (value > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((value / 100) + '0');
					_putchar((value / 10) % 10 + '0' );
					_putchar((value % 10) + '0');
				}
				else if (value < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(value + '0');
				}
				else 
				{
					_putchar(',');
					_putchar(' ');
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
