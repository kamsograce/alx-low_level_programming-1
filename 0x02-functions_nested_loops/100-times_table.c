#include "main.h"

/**
 * print_times_table - print n times table from 0
 * @n: limit
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		;
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('0');
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				}
				else if (result < 100)
				{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				}
				else
				{
				_putchar((result / 100) + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
