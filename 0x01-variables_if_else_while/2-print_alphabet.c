#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char start = 'a';
char end = 'z';
for (start; start <= end; start++)
{
putchar(start);
putchar('\n')
}
return (0);
}
