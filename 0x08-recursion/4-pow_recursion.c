#include "main.h"
#include <math.h>

/**
 * _pow_recursion - It calculates the power of an int
 * @x: an integer tocalculate a power of
 * @y: an integer to calculate a power of
 * Return: -1 if not successful
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
