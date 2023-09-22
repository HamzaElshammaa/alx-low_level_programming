#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - check code
 * @dest: var one
 * @src: var two
 * @n: num
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
