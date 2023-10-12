#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that executes elements of array
 * @array: array of elements
 * @size: of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
