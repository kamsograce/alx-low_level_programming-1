/*
 * File: 6-abs.c
 * Author: Oluwagbeminiyi Samagbeyi
 */
#include "main.h"
/**
 * main: computes the absolute value of an integer
 * Return: Always 0.
 */
int _abs(int x)
{
if (x >= 0)
return (x);
else
return (x * -1);
}
