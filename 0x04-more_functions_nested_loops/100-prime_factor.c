#include <stdio.h>
/**
 * main - print the largest prime factor of 612852475143
 * followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	long number = 612852475143;
	long initial = number, start;

	if ((number % 2) == 0)
	{
		while ((number % 2) == 0)
			number = number / 2;
	}

	for (start = 3; start < initial; start = start + 2)
	{
		if ((number % start) == 0)
		number = number / start;
	}
	printf("%ld\n", start);
	return (0);
}
