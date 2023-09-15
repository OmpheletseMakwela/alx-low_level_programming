# include "main.h"
# include <ctype.h>

/**
 *_isdigit check for a digit number from 0 to 9
 *@c is an integer
 *return 1 if cis a digit and 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
