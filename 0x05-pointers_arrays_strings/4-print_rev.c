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
int i;
int len = strlen(s);
char rev[len + 1];
for (i = 0; i < len; i++)
{
rev[i] = s[len - 1 - i];
}
puts(rev);
return;
}
