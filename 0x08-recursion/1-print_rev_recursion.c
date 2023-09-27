#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - A prototype that prints a string in reverse
 * @s: A pointer that holds a string
 */
void _print_rev_recursion(char *s)
{
	int i;
	int length;

	length = strlen(s);

	for (i = length; i >= 0; i--)
		_putchar(s[i]);
}
