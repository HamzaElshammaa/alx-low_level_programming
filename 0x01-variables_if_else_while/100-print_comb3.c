#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int ch1;
int ch2 = 1;
for (ch1 = 0; ch1 <= 8; ch1++)
{
for (ch = ch2; ch <= 9; ch++)
{
putchar('0' + ch1);
putchar('0' + ch);
if (ch1 != 8 && ch22 != 9)
{
putchar(',');
putchar(' ');
}
}
ch2++;
}
putchar('\n');
return (0);
}

