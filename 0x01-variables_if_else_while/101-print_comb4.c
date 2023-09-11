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
int hstart = 0;
int uorigin = 2;
int torigin = 1;
int ustart = uorigin;
int tstart = torigin;
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
ustart++;
}
torigin++;
uorigin++;
tstart = torigin;
ustart = uorigin;
}
putchar('\n');
return (0);
}
