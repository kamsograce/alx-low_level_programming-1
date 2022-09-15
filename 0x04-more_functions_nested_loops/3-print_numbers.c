#include "main.h"
/**
 * print_numbers - type void.
 * @void: no argument required
 * 
 * Description: prints numbers 0 to 9.
 * Return: void.
 */

void print_numbers(void)
{
	int character;

	for(character = 48; character <= 57; character++)
		_putchar(character);
}
