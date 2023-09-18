#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
char rev = (char *)malloc((len + 1)* sizeof(char));
for (i = 0; i < len; i++)
{
rev[i] = s[len - 1 - i];
}
puts(rev);
return;
}
