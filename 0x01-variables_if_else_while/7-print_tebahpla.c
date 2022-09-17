#include <stdio.h>

/**
 * main - print the lowercase alphabets in reverse,
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
