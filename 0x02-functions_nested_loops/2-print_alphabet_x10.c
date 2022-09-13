#include "main.h"
/*
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: prints a-z 10 times
 */

void print_alphabet_x10()
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
