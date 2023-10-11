#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - check the code
 * @s1: var one
 * @s2: car two
 * Return: something
 */
char *str_concat(char *s1, char *s2)
{
int size1;
int size2;
int i;
char *res;
if (s1 == NULL)
{
size1 = 0;
size2 = strlen(s2);
}
else if (s2 == NULL)
{
size1 = strlen(s1);
size2 = 0;
}
else
{
size1 = strlen(s1);
size2 = strlen(s2);
}
res = malloc((sizeof(char) * size1) +(sizeof(char) * size2) +1);
if (res == NULL)
	return (NULL);
for (i = 0; i < size1; i++)
{
res[i] = s1[i];
}
for (i = (0 + size1); i < (size1 + size2); i++)
{
res[i] = s2[(i - size1)];
}
return (res);
}

