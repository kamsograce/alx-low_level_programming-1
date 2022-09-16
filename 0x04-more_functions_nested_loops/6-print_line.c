#include "main.h"

/**
 * print_line - print the character '_', then a new line.
 * @n: number of times character should be printed
 * Description: Print character, the new line.
 * Return: void.
 */

void print_line(int n)
{
	int count = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (count <= n)
		{
			_putchar(95);
			count++;
		}
		_putchar('\n');
	}
}
