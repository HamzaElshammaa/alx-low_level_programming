#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - check code
 * @size: int
 * @c: cahr
 * Return: cahr pointer
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
char *array = malloc(sizeof(char) * size);
if (array == NULL)
	return (NULL);
for (int i = 0; i < size; i++)
{
	array[i] = c;
}
return (array);
}

