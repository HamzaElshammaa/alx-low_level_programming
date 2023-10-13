#include "function_pointers.h"
/**
 * array_iterator - check code
 * @array: an array
 * @size: size of an array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if ( array == NULL || action == NULL)
	return;
for (i = 0; i < size; i++)
action((array[i]));
}
