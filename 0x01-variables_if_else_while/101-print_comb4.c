#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int units;
int tens;
int hunds;
int ustart = 2;
int tstart = 1;
int hstart = 0;
for (hunds = hstart; hunds <= 7; hunds++)
{
for (tens = tstart; tens <= 8; tens++)
{
for (units = ustart; units <= 9; units++)
{
putchar('0' + hunds);
putchar('0' + tens);
putchar('0' + units);
putchar(',');
putchar(' ');
}
}
ustart++;
}
putchar('\n');
return (0);
}
