# include "main.h"

/**
 * print_numbers - prints single digit numbers from 0 to 9
 * return 0 always a success
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
