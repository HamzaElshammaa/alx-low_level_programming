#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * string_toupper - check code
 * @c: cahr pntr
 * Return: char pointer
 */
char *string_toupper(char *c)
{
char *start = c;
char tmp;
while (*c != '\0')
{
tmp = *c;
toupper(tmp);
*c = tmp;
c++;
}
return (start);
}
