#include <stdio.h>
#include "main.h"

/**
 * print_rev - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void print_rev(char *s)
{
        char rev = s[0];
        int counter = 0;
        int i;

        while (s[counter] != '\0')
        counter++;
        for (i = counter; i >= 0; i--)
	{
	putchar(s[i]);
	}
                
return;
}
