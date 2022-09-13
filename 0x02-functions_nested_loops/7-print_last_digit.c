#include "main.h"
/**
 * print_last_digit - computes value of last digit
 * @x: integer value to be tested
 *
 * Description: using modulus operator
 * Return: returns value of last digit
 */
int print_last_digit(int x)
{
if (x >= 0)
return (x % 10);
else
return ((-1 * x) % 10);
}
