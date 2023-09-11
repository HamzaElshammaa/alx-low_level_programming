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
int ch1start = 0;
int ch2start = 1;
int ch3start = 2;
for (ch1 = ch1start; ch1 <= 7; ch1++)
{
for (ch2 = ch2start; ch2 <= 8; ch2++)
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
