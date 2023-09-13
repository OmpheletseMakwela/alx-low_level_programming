# include <stdio.h>
# include <ctype.h>

/**
 * _islower - Entry point of a function prototype
 *
 * Return:0 (success)
 */
int _islower(int c)
{
	if (islower(c) != 0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

