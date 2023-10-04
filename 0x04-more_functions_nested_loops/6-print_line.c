#include "main.h"
#include <stdio.h>

/**
 * print_line - Entry point
 * @n: digit
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
}
