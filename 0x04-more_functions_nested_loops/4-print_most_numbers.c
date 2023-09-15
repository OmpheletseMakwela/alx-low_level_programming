# include "main.h"

/**
 * print_most_numbers - prints single digits from 0 to 0 except for 2 and 4
 * return 0 always a success
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
