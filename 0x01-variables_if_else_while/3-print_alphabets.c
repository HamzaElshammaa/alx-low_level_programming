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
char biga = 'A';
char bigz = 'Z';
char ch;
for (ch = start; ch <= end; ch++)
{
putchar(ch);
}
for (ch = biga; ch <= bigz; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
