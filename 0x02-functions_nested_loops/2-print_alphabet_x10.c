#include "main.h"
/*
 * print_alphabet_x10: print the alphabet 10 times
 * followed by a new line
 * @void - no argument required
 * Description: function returns void and
 * has no argument
 * section header: It prints the alphabet in order as
 * specified by the count test, here it is 10.
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
