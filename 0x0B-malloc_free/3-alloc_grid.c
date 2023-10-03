#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Allocates memmory and conver to 2dim
 * @width: the broadness of the array
 * @height: the lenth of the array
 * Return: the new 2dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **i;
	int c;
	int n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	i = (int **)malloc(height * sizeof(int *));
	if (i == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < height; c++)
	{
		i[c] = (int *)malloc(width * sizeof(int));
		if (i[c] == NULL)
		{
			for (n = 0; n < c; n++)
			{
				free(i[n]);
			}
			free(i);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			i[c][n] = 0;
	}
	return (i);
}
