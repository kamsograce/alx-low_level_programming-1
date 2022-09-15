#include "main.h"

/*
 * print_most_numbers - type void.
 * @void: no argument required
 * 
 * Description: prints 0 to 9 except 2 & 4.
 * Return: void
 */

void print_most_numbers(void)
{
	int character;

	for (character = 48; character <= 57; character++)
	{
		if (character != 50 && character != 52)
			_putchar(character);
	}
	_putchar('\n');
}
