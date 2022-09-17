#include "main.h"

/**
 * print_alphabet_x10 - Prints "a-z" ten times
 */

void print_alphabet_x10(void)
{
	int count = 0, alphabet;

	while (count < 10)
	{
		for (alphabet = 'a'; alphabet = 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
