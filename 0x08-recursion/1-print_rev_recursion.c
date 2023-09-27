#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - A prototype that prints a string in reverse
 * @s: A pointer that holds a string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
