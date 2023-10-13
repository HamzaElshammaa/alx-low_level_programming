#include "main.h"
#include <stdio.h>
/**
 * print_name - Print name
 * @name: char string
 * @f: function pointer that takes a string argument
 */
void print_name(char *name, void (*f)(cahr *))
{
	f(name);
}
