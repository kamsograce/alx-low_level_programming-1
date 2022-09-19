#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: character array to be printed.
 */
void print_rev(char *s)
{
	int i = 0, j, count = 0;

	while (s[i] != 0)
	{
		count++;
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
