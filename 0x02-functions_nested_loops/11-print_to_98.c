#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print values from n to 98
 * @n: The first value
 *
 * Description: prints from n to 98, followed by a new line
 * Return: void
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
