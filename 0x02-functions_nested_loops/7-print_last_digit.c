#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - check code
 * @n: number to get digit of
 * Return: value of last digit
 */
int print_last_digit(int n)
{
if (n < 0)
{
	n = n * -1;
}
int digit = n % 10;
return (digit);
}
