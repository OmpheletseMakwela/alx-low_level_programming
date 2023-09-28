#include "main.h"

/**
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
		res = res * n - 1;
		return (res);
	}
		
}
