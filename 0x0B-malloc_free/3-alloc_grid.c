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
int i;
int j;
if (width <= 0 || height <= 0)
	return (NULL);
arrayrows = malloc(sizeof(int) * width);
if (arrayrows == NULL)
	return (NULL);
for (i = 0; i < width; i++)
{
arrayrows[i] = malloc(sizeof(int) * height);
if (arrayrows[i] == NULL)
return (NULL);
}
for (i = 0; i < width; i++)
{
for (j = 0; j < heigth; j++)
{
arrayrows[i][j] = 0;
}
return (arrayrows);
}

