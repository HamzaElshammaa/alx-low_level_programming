#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int times;
char letter;
for (times = 0; times < 10; times++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
}

