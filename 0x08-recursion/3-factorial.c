#include "main.h"
#include <stdio.h>
/**
 * factorial - check code
 * @n: int
 * Return: an int factorial
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}