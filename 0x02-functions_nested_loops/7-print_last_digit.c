#include "main.h"
/**
 * print_last_digit - computes value of last digit
 * @x: integer value to be tested
 *
 * Description: using modulus operator, then print
 * Return: returns value of last digit
 */
int print_last_digit(int x)
{
int lastDigit;
if (x > 0)
;
else
x = x * -1;

lastDigit = x % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
