# include "main.h"
# include <stdio.h>

/**
 * _isalpha(int c) - A prototype that checks if a character is an alphabet
 *
 * Return 0 always a success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
