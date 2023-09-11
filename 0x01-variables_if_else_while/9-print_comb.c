#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 0; ch <= 9; ch++)
{
putchar('0' + ch);
putchar(',');
if (ch != 9)
{
putchar(' ');
}
}
putchar('\n');
return (0);
}

