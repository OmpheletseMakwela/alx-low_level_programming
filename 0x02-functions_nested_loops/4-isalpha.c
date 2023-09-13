# include <stdio.h>
# include <ctype.h>

/**
 * _isalpha - Entry point of a function prototype
 *
 * return: 0 always success
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
