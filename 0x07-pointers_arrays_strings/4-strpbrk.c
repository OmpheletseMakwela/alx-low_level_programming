#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - used to find the first occurance of characters in a string
 * @s: A string where charactters are found
 * @accept: Characters that are to be found in a string
 * Return: Null if no character is found or s if they are found
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				return (s);
			}
			accept_ptr++;
		}
		s++;
	}
	return ('\0');
}
