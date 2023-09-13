#include "main.h"
# include <stdio.h>

/**
 * print_sign - prototype function
 * print_sign - prototype function that checks for the sign of the character
 * @n: The number to check
 *
 * return: 1 if is greater than zero,0 if n is zero and -1 if n is less than 0
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
