#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *malloc_checked - A function that allocates memory using malloc
 * @b: an int to be allocated memory
 * Return: pointer with allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
