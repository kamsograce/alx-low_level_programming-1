#include "main.h"

/*
 * _isupper - type int.
 * @c: character to check.
 *
 * Description: checks if character is an upper.
 * Return: returns 1 if uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
