#include "main.h"

/**
 * _islower - checks if the argument is in lower case
 * @c: char type
 *
 * Return: 1 if lowercase,
 * 0 if not lowercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
