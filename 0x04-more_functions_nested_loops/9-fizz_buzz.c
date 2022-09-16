#include <stdio.h>
#include "main.h"

/**
 * main - print 1 - 100, if a multiple of 3,
 * print Fizz, if a multiple of 5, print Buzz
 * else, print the number.
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%i", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
