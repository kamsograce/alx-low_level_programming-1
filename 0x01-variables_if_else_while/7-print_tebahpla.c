#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)

{
char alphabet;
alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);

}
