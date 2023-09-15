# include "main.h"

/**
 * more_numbers - frints numbers 10 times
 * return 0 always a success
 */
void more_numbers(void)
{
	int i;
	int n;

	for (n = '0'; n <= '9'; n++)
		for (i = '0'; i <= 14; i++)
			_putchar(n);
	_putchar(i);
	_putchar('\n');
}
