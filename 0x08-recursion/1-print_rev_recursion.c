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
return;
}
_print_rev_recursion(s + 1);
puts("");
puts(s);
}
