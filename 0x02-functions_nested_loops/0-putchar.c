#include "main.h"

/**
 * main - prints the string "_putchar"
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char string[] = "_putchar";
	int index;

	for (index = 0; index <= 7; index++)
		_putchar(string[index]);
	_putchar('\n');

	return (0);
}
