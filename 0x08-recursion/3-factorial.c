#include "main.h"

/**
 * factorial - Calculates a factorial of a number
 * Return: 1 if equal to 0; -1 if less than 0 and rest if else
 */
int factorial(int n)
{
	int res;

	res = 1;
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		while (n > 0)
		{
			res *= n;
			n--;
		}
		return (res);
	}
}
