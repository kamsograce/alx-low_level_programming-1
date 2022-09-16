#include "main.h"

/*
 * print_diagonal - type void.
 * @n: number of times character should be printed
 *
 * Description: print the character '\', then a new line
 * Return: void.
 */

void print_diagonal(int n)
{
	int count, counter;

	if (n <= 0)
		;
	else
	{
		_putchar(92);
		_putchar('\n');
		for (count = 2; count <= n; count++)
		{
			for (counter = 2; counter <= count; counter++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}

	}
	_putchar('\n');
}
