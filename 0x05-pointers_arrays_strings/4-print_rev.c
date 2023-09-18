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
int counter = 0;
char rev = s[0];
while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
	counter--;
	rev = s[i];
	s[i] = s[counter];
	s[counter] = rev;
}
_puts(rev);
return;
}
