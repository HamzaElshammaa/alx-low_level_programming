#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char start = '0';
char end = '9';
char ch;
char hex1 = 'a';
char hex2 = 'f';
for (ch = start; ch <= end; ch++)
{
putchar(ch);
}
for (ch = hex1; ch <= hex2; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
