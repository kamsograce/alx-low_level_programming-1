#include <stdio.h>

/*
 * main - type int.
 * @void: no argument required
 * 
 * Description: print 1 - 100, if a multiple
 * of 3, print Fizz, a multiple of 5, print Buzz
 * else, print the number.
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
			printf("FizzBuzz");
		else
			printf("%i", i);
		printf(" ");
	}
	return 0;
}
