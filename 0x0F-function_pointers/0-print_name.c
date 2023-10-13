#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print a name from a function pointer
 * @name: char string
 * @f: function pointer that takes a string argument
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;	
f(name);
}
