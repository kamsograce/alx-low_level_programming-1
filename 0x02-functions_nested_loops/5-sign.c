/*
 * File: 5-sign.c
 * Author: Oluwagbeminiyi Samagbeyi
 */
#include "main.h"
/**
 * _isalpha: prints the sign of a number
 * @n: the integer to be tested
 * Return: returns 1 if n > 0; 0 if n == 0;
 * -1 if n < 0. 
 */

int print_sign(int n)
{
if (n > 0){
_putchar(43);
return (1);
}
else if (n == 0){
_putchar(48);
return (0);
}
else{
_putchar(45);
return (-1);
}
}
