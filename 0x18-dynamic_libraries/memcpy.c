#include "main.h"

/**
 * _memcpy - A prototype function that copies bytes
 * @dest: A destination where the bytes are copied to
 * @src: A source whre bytes are copied from
 * @n: memory bytes that are copied
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
