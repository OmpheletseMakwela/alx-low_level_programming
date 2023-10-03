#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - A function that concatenates two strings
 * @s1: A pointer to string 1
 * @s2: A pointer to string 2
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *spc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	spc = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (spc != NULL)
	{
		strcpy(spc, s1);
	strcat(spc, s2);
	}
	else
	{
		return (NULL);
	}
	return (spc);
}
