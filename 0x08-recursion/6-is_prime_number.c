#include "main.h"
#include <math.h>

/**
 * is_prime_number - checks if int is a prime number
 * @n: integer
 * Return: 1 if is it and 0 if its not
 * is_divisible - is a function divides an it
 * @divisor: is an integer that is divided
 * is_divisible - A function that divides an int
 */
int is_divisible(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (0);
	}
	else if (n % divisor == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, divisor + 1));
	}
}
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (!is_divisible(n, 2));
	}
}
