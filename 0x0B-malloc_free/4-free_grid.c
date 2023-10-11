#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_grid - frees the grid
 * @grid: the grid
 * @height: the length of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i, j, width;
width = (int)sizeof(grid[0]) / (int)sizeof(grid[0][0]);
i = j = 0;
while (i < height)
{
while (j < width)
{
free(grid[i][j]);
j++;
}
i++, j++;
}
return;
}
