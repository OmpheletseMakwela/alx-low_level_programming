# include "main.h"
# include <string.h>

/**
 * _strcat - Prototype function
 * @dest: pointer assigned
 * @src: pointer assigned
 * return dest
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
