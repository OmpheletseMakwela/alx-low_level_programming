#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - A function that reallocates memory
 * @old_size: old size
 * @new_size: new size
 * Return: new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min;
	void *new;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	min = (old_size < new_size) ? old_size : new_size;
	new = malloc(new_size);

	if (new == NULL)
	{
		return (NULL);
	}
	memcpy(new, ptr, min);
	free(ptr);
	return (new);
}
