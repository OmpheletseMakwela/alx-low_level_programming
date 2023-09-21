# include "main.h"

/**
 * string_toupper - converts lowercasr letters to uppercase
 * @str: A pointer assigned
 * Return: original string
 */
char *string_toupper(char *str)
{
	char *original = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (original);
}
