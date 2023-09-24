#include "main.h"

/**
 * _strchr - A function that returns a string from the first occurance of int c
 * @s: A string
 * @c: An integer that will have to be spotted in a string
 * Return: string after the occurance of int and NULL if the int doesnt occur
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	s++;
	return ('\0');
}
