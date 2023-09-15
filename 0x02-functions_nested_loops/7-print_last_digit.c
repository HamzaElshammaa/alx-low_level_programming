#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - Entry point
 *
 * @n: value
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = n * -1;
	}

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}
