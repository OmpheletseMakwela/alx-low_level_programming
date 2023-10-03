#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr -concatenates all arguments
 * @ac: integer
 * @av: character string
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int n;
	int len;
	char *r;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (n = 0; n < ac; n++)
	{
		if (av[n] != NULL)
		{
			len += strlen(av[n]) + 1;
		}
	}
	r = (char *)malloc((len + 1) * sizeof(char));
	if (r != NULL)
	{
		r[0] = '\0';
		for (n = 0; n < ac; n++)
		{
			if (av[n] != NULL)
			{
				strcat(r, av[n]);
				strcat(r, "\n");
			}
		}
	}
	return (r);
}
