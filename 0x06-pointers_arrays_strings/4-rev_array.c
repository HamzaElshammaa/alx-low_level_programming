#include "main.h"
/**
 * reverse_array - Check the code
 * @a: var
 * @n: var
 * Return: nohig
 */
void reverse_array(int *a, int n)
{
int *end = a + n - 1;
int tmp;
int i;
for (i = 0; i < end; i++)
{
tmp = *a[i];
*a[i] = *a[end];
*a[end] = tmp;
end--;
}
return;
}
