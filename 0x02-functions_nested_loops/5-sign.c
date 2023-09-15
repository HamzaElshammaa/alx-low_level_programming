#include <stdio.h>
#include "main.h"

/**
 *print_sign - check the code
 *@n: num to check
 *Return: 0 or 1 depending on sign
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar(48);
return (0);
}
if (n > 0)
{
_putchar(43);
return (1);
}
if (n < 0)
{
_putchar(45);
return ("-1");
}
}
