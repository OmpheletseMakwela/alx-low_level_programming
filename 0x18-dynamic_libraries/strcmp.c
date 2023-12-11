# include "main.h"

/**
 * _strcmp - A prototype function that compares two string
 * @s1: A pointer assigned
 * @s2: A pointer assigned
 * Return: 1 if success and -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if
			(*s1 > *s2)
			{
				return (1);
			}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else if
		(*s1 == '\0')
	{
		return (-1);
	}
	else
        return (1);
}
