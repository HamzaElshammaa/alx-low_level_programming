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
int i;
i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
return;
}
