#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
  
int count = 0;
while (n!= 0)
{
n = n/10;
count++;
}

if (n[count - 1] > 5)
{
printf("Last digit of %d is greater than 5")
}
else if (n[count - 1] == 0)
{
printf("Last digit of %d is 0")
}
else
{
printf("Last digit of %d is less than 6 and not 0")
}
return (0);
}
