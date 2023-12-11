# include "main.h"
# include <string.h>

/**
 * _strcat - A prototype function that concatenate strings
 * @dest: pointer assigned
 * @src: pointer assigned
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
