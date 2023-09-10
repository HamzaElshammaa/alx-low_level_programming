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
putchar(ch);
}
return (0);
}
