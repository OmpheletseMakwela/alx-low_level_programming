# include "main.h"
# include <string.h>

/**
 * _strncpy - A function that copies two strings
 * @dest: A pointer assigned
 * @src: Apointer assigned
 * @n: an integer assigned
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		src++;
		n--;
	}
	return (dest);
}
