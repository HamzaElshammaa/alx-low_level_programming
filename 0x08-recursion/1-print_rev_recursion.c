#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - check the code
 * @s: string pntr
 * Return: nothibg
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar(s);
}
_print_rev_recursion(++s);
return;
}
