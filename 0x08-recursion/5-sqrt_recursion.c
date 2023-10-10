#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - check the code
 * @n: int
 * Return: teh square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
int result;
result = sqrt(n);
return (result);
