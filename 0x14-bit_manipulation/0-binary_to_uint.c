#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		r = (r << 1) | (*b - '0');
		b++;
	}
	return (r);
}
