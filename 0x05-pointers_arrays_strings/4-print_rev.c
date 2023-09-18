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
char *tmp = s + len - 1;
for (i = (len - 1); i > 0; i--)
{
putchar(tmp[i]);
}
putchar("/n");
return;
}
