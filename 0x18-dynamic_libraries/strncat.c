# include "main.h"
# include <string.h>

/**
 * _strncat - A prototype function that concatenate two strings
 * @dest: an assigned pointer
 * @src: an assigned pointer
 * @n: an assigned integer
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
