#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - chekc code
 * @width: width
 * @height: height
 * Return: something
 */
int **alloc_grid(int width, int height)
{
int **arrayrows;
int i, j;
if (width <= 0 || height <= 0)
	return (NULL);
arrayrows = malloc(sizeof(int *) * height);
if (arrayrows == NULL)
{
free(arrayrows);
	return (NULL);
}
for (i = 0; i < height; i++)
{
arrayrows[i] = malloc(sizeof(int) * width);
if (arrayrows[i] == NULL)
{
for (; i >= 0; i--)
{
free(arrayrows[i]);
}
free(arrayrows);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arrayrows[i][j] = 0;
}
}
return (arrayrows);
}

