#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print values from n to 98, followed by new line
 * @n: The first value
 */
void print_to_98(int n)
{
	int callNumber;

	callNumber = n;
	printf("%d", callNumber);
	if (callNumber == 98)
		;
	else if (callNumber < 98)
	{
		while (callNumber < 98)
		{
			callNumber++;
			printf(", %d", callNumber);
		}

	}
	else
	{
		while (callNumber > 98)
		{
			callNumber--;
			printf(", %d", callNumber);
		}
	}
	printf("\n");
}
