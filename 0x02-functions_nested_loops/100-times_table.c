#include "main.h"
/**
 * print_times_table - of type void, prints n times table
 * @n: stop at n
 *
 * Description: prints n times table, starting from 0
 * Return: returns void
 */ 
void print_times_table(int n)
{
	int i, j, k, check = 0;

	if (n > 15 || n < 0)
		return;
	while (check <= n)
	{
		for (i = 0, j = 0; j < n; j++)
			k = i * j;
		if (k > 99)
		{
			_putchar(k / 100 + '0');
			_putchar((k / 10 % 10) + '0');
			_putchar(k % 10 + '0');
		}
		else if (k > 9)
		{	
			_putchar(' ');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		else if (k != 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		else
		{
			_putchar(k + '0');
		}
		if (k != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	
	check++;
	_putchar('\n');	
	}
}
