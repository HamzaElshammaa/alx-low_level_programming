#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter < 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
