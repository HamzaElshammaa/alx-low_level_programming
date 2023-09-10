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
for (char ch = start; start <= end; start++)
{
putchar(ch);
putchar('\n');
}
return (0);
}
