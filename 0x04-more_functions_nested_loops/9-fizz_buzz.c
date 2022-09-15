#include <stdio.h>

/*
 * print_size - type void.
 * @size: size of the square
 * 
 * Description: prints a square, then a new line
 * Return: void.
 */

int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FIzzBuzz");
		else
			printf("%i", i);
		printf(" ");
	}
	return 0;
}
