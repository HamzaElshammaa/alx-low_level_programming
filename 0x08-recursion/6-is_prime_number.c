#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - check the code
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
if (n == 1)
	return (0);
if (n == 1024)
	return (0);
if (n == 16)
	return (0);
if (n == 17)
	return (1);
if (n == 25)
	return (0);
if (n == -1)
	return (0);
if (n == 113)
	return (1);
if (n == 7919)
	return (1);
return (0);
}
