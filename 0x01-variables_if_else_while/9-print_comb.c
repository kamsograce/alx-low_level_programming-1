#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
int number;
for (number = 48; number <= 57; number++)
{
if (number < 57)
{
putchar(number);
putchar(',');
putchar(' ');
}
else
{
putchar(number\n);
}
}
return (0);
}
