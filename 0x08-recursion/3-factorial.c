#include "main.h"

/**
 * factorial - Calculates a factorial of a number
 * Return: 1 if equal to 0; -1 if less than 0 and rest if else
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
