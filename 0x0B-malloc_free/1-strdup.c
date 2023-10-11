#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - check code
 * @str: string pointer
 * Return: a char pointer
 */
char *_strdup(char *str)
{
int i;
char *dup;
int size;
if (str == NULL)
return (NULL);
size = strlen(str);
dup = malloc(sizeof(char) * size + 1);
if (dup == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
dup[i] = str[i];
}
return (dup);
}
