# include <stdio.h>
# include "main.h"

/**
 * Main - Entry point
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
}
int man(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
