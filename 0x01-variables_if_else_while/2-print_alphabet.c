#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	char character;

	for (character  = 'a'; character <= 'z'; character++)
		putchar(character);
	putchar('\n');

	return (0);
}
