#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - check the code
 *
 * @c: the num to check
 * Return: Always 0.
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
