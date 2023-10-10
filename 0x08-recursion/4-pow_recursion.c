#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _pow_recursion - check code
 * @x: int
 * @y: int
 * Return: and int
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
return (pow(x, y));
}
