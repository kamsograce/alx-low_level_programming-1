#include "main.h"

/**
 * main - check if character is lowercase
 *
 * Return 1; else 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
