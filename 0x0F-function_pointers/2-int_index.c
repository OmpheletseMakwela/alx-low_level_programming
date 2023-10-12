#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: of elements to be compared
 * @size: of elements
 * @cmp: function pointer
 * Return: -1 if failure and i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 1)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			return (i);
		}
	}
	return (-1);
}
