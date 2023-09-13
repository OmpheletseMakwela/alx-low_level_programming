# include "main.h"
# include <stdio.h>

/**
 * print_alphabet_x10 - the function prototype
 *
 * Return: 0 always success
 */
void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
		n++;
	}
}
