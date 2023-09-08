#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main()

{
	int n;
	int lastDigit;

        srand(time(NULL));

        n = rand();
        lastDigit = n % 10;
	printf("The last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return 0;
}

