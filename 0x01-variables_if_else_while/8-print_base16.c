#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)

{
	char base16;

	for (base16 = 48; base16 <= 57; base16++)
		putchar(base16);
	for (base16 = 97 ; base16 <= 102; base16++)
		putchar(base16);
	putchar ('\n');

	return (0);
}
