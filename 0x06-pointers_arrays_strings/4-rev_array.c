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
int *start = a;
while (start < end)
{
tmp = *start;
*start = *end;
*end = tmp;
end--;
start++;
}
return;
}
