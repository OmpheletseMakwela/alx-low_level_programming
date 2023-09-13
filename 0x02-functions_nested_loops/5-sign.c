#include "main.h"
# include <stdio.h>

/**
 * print_sign - prototype function that checks for the sign of the character
 *
 * return: 0 (always a success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
