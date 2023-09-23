#include <stdio.h>
#include "main.h"
/**
 * reverse_array - check code
 * @a: variable one
 * @n: number variable
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
int tmp;
int *pntr;
pntr = a;
int i;
for (i = 0; i < n; i++)
a++;
for (i = 0; i < n; i++)
{
tmp = *pntr;
*pntr = *a;
*a = tmp;
a--;
pntr++;
}
return;
}
