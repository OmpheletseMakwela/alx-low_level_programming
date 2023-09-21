# include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - A funtion declared
 * @str: A pointer assigned
 * Return: str
 */
char *leet(char *str)
{
	char *p = str;
	char leetMap[] = "aAeEoOtTlL";
	char leetCodes[] = "43370171";
	int i;

	for (; *p; ++p)
	{
		for (i = 0; leetMap[i]; ++i)
		{
			if (*p == leetMap[i])
			{
				*p = leetCodes[i];
				break;
			}
		}
	}
	return (str);
}
