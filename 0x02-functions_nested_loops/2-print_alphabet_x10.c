# include <stdio.h>

/**
 * print_alphabet_x10 - Entry point for a prototype function
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
	}
	putchar('\n');
}
/**
 * main - Entry point 
 *
 * Return: 0 always
 */
int main_alphabet_x10(void)
{
	print_alphabet_x10();
	return (0);
}
