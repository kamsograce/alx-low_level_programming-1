/*
 * File: 6-abs.c
 * Author: Oluwagbeminiyi Samagbeyi
 */
#include "main.h"
/**
 * _abs: computes the absolute value of an integer
 * @int: the integer to be computed
 * Return: Always 0.
 */
int _abs(x)
{
if (x >= 0)
return (x);
else
return (x * -1);
}
