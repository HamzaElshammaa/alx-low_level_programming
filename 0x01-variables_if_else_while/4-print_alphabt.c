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
char ch;
for (ch = start; ch <= end; ch++)
{
if (ch != 65 || ch != 71)
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
