#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - check code
 * @dest: variable one
 * @src: variable two
 * @n: nomber of bits
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
