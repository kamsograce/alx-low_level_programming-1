#include "main.h"

/*
 * _isupper - type void.
 * @c: character to check.
 *
 * Description - checks if character is an uppercase alphabet.
 * Return: 1 if uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);

}
