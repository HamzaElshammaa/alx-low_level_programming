#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check the code
 *
 * @c: the num to check
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}

