# include "main.h"

/**
 * _islower - A prototype of a function that checks for a lowercase character
 *
 * c is a variable declared
 *
 * _islower is the prototype function
 *
 * Return : 0 Always success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
