#include "main.h"
#include <stdio.h>

/**
 * _memset - A prototype function that set a memory to unsigned int
 * @s: address memory to print
 * @b: the value to be address
 * @n: an integer a memory is addressed to
 * Return: address memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
