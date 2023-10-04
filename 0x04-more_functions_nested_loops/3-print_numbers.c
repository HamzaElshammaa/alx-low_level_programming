#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
