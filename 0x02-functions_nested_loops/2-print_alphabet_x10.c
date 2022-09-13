#include "main.h"
/*
 * main - print 10 times the alphabet
 * followed by a new line
 * Return - void.
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
count += 1;
}
return;
}
