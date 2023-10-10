#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * _sqrt_recursion - check the code
 * @n: int
 * Return: teh square root
 */
int _sqrt_recursion(int n)
{
int result;
if (n < 0)
return (-1);
result = (int) sqrt(n);
return (result);
}
