#include "main.h"
/**
 * cap_string - check code
 * @str: var
 * Return: char pntr
 */
char *cap_string(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (i == 0)
str[i] = str[i] - 32;
switch (str[i])
{
case ' ':
	str[i] = ' ';
case '\n':
	str[i] = ' ';
case ',':
	str[i] = ' ';
case ';':
	str[i] = ' ';
case '.':
	str[i] = ' ';
case '!':
	str[i] = ' ';
case '?':
	str[i] = ' ';
case '"':
	str[i] = ' ';
case '(':
	str[i] = ' ';
case ')':
	str[i] = ' ';
case '{':
	str[i] = ' ';
case '}':
	str[i] = ' ';
default:
	str[i] = str[i] - 32;
}
i++;
}
return (str);
}
