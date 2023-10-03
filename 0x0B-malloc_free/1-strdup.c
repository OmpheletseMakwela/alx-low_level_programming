#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - A prototype function that returns a duplicate of a string
 * @str: The original string that we want a duplicate from
 * Return: A duplicate string
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup != NULL)
	{
		strcpy(dup, str);
	}
	return (dup);
}
