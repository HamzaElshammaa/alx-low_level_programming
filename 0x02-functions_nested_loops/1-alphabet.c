#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(){
char letter;
for (letter = 'a'; letter < 'z'; letter++){
putchar(letter);
}
putchar('\n');
}
