# include "main.h"
# include <string.h>
# include <ctype.h>

/**
 * isSeparator - separates characters with symbols
 * @c: assigned value
 * Return: 1 if success and and str
 */
int isSeparator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - A prototype function
 * @str: An assigned pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int len = strlen(str);
	int capitalizeNext = 1;
	int i;

	for (i = 0; i < len; i++)
	{
		if (isSeparator(str[i]))
		{
			capitalizeNext = 1;
		}
		else if
			(capitalizeNext)
			{
				str[i] = toupper(str[i]);
				capitalizeNext = 0;
			}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	return (str);
}
