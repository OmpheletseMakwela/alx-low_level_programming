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
/**
 * main_islower - Entry point of function
 *
 * return:0 (success)
 */
int main_islower(void)
{
	int i;

	i = _islower('a');
	if (i == 1)
	{
		putchar(1);
	}
	else
	{
		putchar(0);
	}
	return (0);
}
