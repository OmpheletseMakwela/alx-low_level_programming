#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: a number that we find a sqrt for
 * Return: natural sqrt or -1 if not successful
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int guess = n / 2;
		int new_guess = (guess + n / guess) / 2;

		if (new_guess == guess)
			return (guess);
		else
			return (_sqrt_recursion(new_guess));
	}
}
