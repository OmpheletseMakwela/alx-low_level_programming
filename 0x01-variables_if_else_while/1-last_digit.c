# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)

{
	int n;
	int lastDigit;
	scanf("%d", &n);

	lastDigit = abs(n) % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of n is %d\n", lastDigit);
	if (lastDigit > 5)
	{
		printf("and is greater than 5");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
