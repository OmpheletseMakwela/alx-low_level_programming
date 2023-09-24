#include "main.h"
#include <stddef.h>

/**
 * _strstr - Find first occurance of substring
 * @haystack: The main string
 * @needle: A substring
 * Return: The location of substring
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
