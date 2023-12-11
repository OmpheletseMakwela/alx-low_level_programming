#include "main.h"

/**
 * _strspn - A function that the length of the string segment
 * @s: A string
 * @accept: Set of segment of character
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	for (; *s; s++)
	{
		int found = 0;

		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
	}
	return (count);
}
