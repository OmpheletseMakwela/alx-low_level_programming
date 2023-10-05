#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Function that allocates memory for an array
 * @nmemb: number of elements
 * @size: The size of each element
 * Return: A pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t n;
	void *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = (size_t)nmemb * size;
	pointer = malloc(n);

	if (pointer == NULL)
		return (NULL);
	memset(pointer, 0, n);
	return (pointer);
}
