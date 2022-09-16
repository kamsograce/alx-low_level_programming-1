#include "main.h"

/**
 * print_size - type void.
 * @size: size of the square
 *
 * Description: prints a square, then a new line
 * Return: void.
 */

void print_square(int size)
{
	int count, counter;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (count = 1; count <= size; count++)
		{
			for (counter = 1; counter <= size; counter++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}

	}
}
