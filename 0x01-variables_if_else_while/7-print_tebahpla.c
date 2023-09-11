#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char start = 'z';
char end = 'a';
char ch;
for (ch = start; ch >= end; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
