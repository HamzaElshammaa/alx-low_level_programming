#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - check code
 * @s: variable
 * Return: always 0
 */
void print_rev(char *s)
{
int len = strlen(s);
char *rev = *(s + len);
for (int i = 0; i < len; i++)
{
putchar(*rev);
}
return;
}
