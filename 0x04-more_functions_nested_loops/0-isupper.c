#include "main.h"

/*
 * _isupper - type int.
 * @c: character to check.
 *
 * Description - checks if character is an uppercase alphabet.
 * Return: 1 if uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (65 <= c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
