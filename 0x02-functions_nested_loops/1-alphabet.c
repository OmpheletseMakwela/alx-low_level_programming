# include <stdio.h>

/**
 * print_alphabet - entry point of a function prototype
 *
 * return:0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
/**
 * main_alphabet- entry point for the print_alphabet
 *
 * Return: Always 0
 */
int main_alphabet(void)
{
	print_alphabet();
		return (0);
}
