#include "main.h"
/*
 * print_alphabet_x10(void) - prints the alphabet 10 times
 * Description: prints a-z 10 times
 * Return: void
 */

void print_alphabet_x10(void) 
{
char alphabet;
int count = 0;
while (count < 10)
{
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
count++;
}
return;
}
