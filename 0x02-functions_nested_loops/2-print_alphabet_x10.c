#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
int times;
char letter;
for (times = 0; times < 10; times++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
}
putchar('\n');
}

