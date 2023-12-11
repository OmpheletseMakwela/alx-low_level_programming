#include <stdio.h>

/**
 * add - adds two integers
 * @a: interger 1
 * @b: integer 2
 * Return: sum of two integers
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts twon integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of division
 */
int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * mod - mod function
 * @a: integer 1
 * @b: integer 2
 * Return: mod result
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a % b);
}
