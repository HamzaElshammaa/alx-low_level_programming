#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				printf("%d", result);
			}
			else
			{
				printf(", %2d", result);
			}
		}
		printf("\n");
	}
}
