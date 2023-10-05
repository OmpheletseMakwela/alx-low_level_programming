#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that returns a pointer with malloc of concat strn
 * @s1: string 1
 * @s2: string 2
 * @n: An integer that holds allocated memory
 * Return: An int with allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	a = strlen(s1);
	b = strlen(s2);

	if (n >= b)
		n = b;

	c = (char *)malloc(a + n + 1);

	if (c == NULL)
		return (NULL);
	strcpy(c, s1);
	strncat(c, s2, n);
	return (c);
}
