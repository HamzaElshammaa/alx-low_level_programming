#include <stdio.h>
#include "main.h"
/**
 * swap_int - Swaps ints
 * @a: int a
 * @b: int b
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int tempa = *a;
int tempb = *b;
a = tempb;
b = tempa;
return;
}
