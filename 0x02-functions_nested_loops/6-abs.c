#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: an integer
 *
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
