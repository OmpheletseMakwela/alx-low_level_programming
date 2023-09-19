# include "main.h"
# include <string.h>

/**
 * puts_half - A prototype function that prints second half of string
 * @str: A pointer that is assigned
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int n;
	int i;

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}
	for (i = n; i =< length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
