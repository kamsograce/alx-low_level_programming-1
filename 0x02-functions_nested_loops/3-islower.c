#include "main.h"
/**
 * _islower - checks if the argument is in lower case
 * @c: char type
 * Description: checks for lowercase and return value
 * Return: 1 if lowercase, 0 if not lowercase.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
