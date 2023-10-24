#include "main.h"
#include <math.h>

/**
 * square_root - finds the square root of a number
 * @n: a number that we find a sqrt for
 * @g: current square root
 * Return: natural sqrt or -1 if not successful
 */
int square_root(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (square_root(n, g + 1));
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: a number that we find a sqrt for
 * Return: natural sqrt or -1 if not successful
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}
