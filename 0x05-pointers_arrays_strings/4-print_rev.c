#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: character array to be printed.
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != 0)
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j - 1]);
	}

	_putchar('\n');
}
