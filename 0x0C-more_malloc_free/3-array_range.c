#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - A function that creates an array of integers
 * @min: an integer
 * @max: an integer
 * Return: r
 */
int *array_range(int min, int max)
{
	int n;
	int *r;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min  + 1;
	r = (int *)malloc(n * sizeof(int));

	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
		r[i] = min + 1;
	return (r);
}
