#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit of number
 */
int print_last_digit(int n)
{
	int remainder;

	remainder = n % 10;

	if (remainder < 0)
		remainder = -remainder;
		_putchar(remainder + '0');
	return (remainder);
}
