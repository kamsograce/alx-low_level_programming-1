#include "main.h"

/*
 * _isdigit - type int.
 * @c: character to check.
 *
 * Description: checks for a digit 0 through 9.
 * Return: 1 if uppercase, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c > 46 && c < 58)
		return (1);
	else
		return (0);
	_putchar('\n')
}
