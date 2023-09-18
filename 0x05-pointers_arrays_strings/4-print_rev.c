# include "main.h"
# include <string.h>

/**
 * print_rev - A function that prints a string in reverse
 * @s: A pointer that is printed in reverse
 * Return: A string in reverse
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
