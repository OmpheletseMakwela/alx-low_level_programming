# include "main.h"

/**
 * int_isupper - A prototype that checks for uppercase character
 *
 * Return 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
