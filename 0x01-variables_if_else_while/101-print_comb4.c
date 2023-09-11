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
int ch2;
int ch3 = 2;
int start1 = 0;
int start2 = 1;
int start3 = 2;
for (ch1 = start1; ch1 <= 7; ch1++)
{
for (ch2 = start2; ch2 <= 8; ch2++)
{
for (ch = ch3; ch <= 9; ch++)
{
putchar('0' + ch1);
putchar('0' + ch2);
putchar('0' + ch);
if (ch1 != 7 &&  ch2 != 8 && ch3 != 9)
{
putchar(',');
putchar(' ');
}
}
ch3++;
}
ch2++;
}
putchar('\n');
return (0);
}
