# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
		for (n = 0; n <= 9; n++)
			putchar(i);
	if (n != 0)
	{
		putchar(',');
	}
	putchar('\n');
	return (0);
}
