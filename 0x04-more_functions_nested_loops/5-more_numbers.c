#include "main.h"
/**
 * more_numbers - type void.
 * @void: no argument required
 * 
 * Description: prints numbers 0 to 14 ten times.
 * Return: returns void
 */

void more_numbers(void)
{
	int character, counter = 0;

	while (counter < 10)
	{
		for (character = 48; character <= 57; character++)
			_putchar(character);
		for (character = 10; character <= 14; character++)
		{
			_putchar((character / 10) + '0');
			_putchar((character % 10) + '0');
		}
		_putchar('\n');
		counter++;
	}
}
