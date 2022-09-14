#include "main.h"
#include <stdio.h>
/**
 * main - print the sum of all multiples of 3 or 5
 * @void: void argument
 *
 * Description: prints the sum, followed by a new line
 * Return: void
 */

int main(void)
{
	int start, sum; 
	sum = 0;
	
	for (start = 0; start < 1024; start++)
	{
		if (start % 3 == 0 || start % 5 == 0)
			sum += start;
	}
	printf("%d\n", sum);
	return (0);
}

