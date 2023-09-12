# include <stdio.h>

/**
 * main - entry point
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
int main(void)
{
	print_alphabet();
		return (0);
}
