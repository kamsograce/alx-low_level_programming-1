#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success/correct)
 */
void print_alphabet(void);

int main()
{
	print_alphabet();
	putchar('\n');
	return (0);
}	

void print_alphabet(void)
{
	int number;
	for(number =  97; number <= 122; number++)
		putchar(number);
	return;
}
