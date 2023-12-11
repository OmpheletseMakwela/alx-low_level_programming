# include "main.h"
# include <stdio.h>

/**
 * _strcpy - A prototype function that copies a string
 * _strcpy - A pinter prototype function
 * @dest: A pointer that is assigned
 * @src: A pointer that is assigned
 * Return: dest_start
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
