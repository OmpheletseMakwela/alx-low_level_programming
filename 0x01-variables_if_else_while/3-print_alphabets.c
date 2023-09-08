# include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)

{
	char i;

	for (i = 'd'; i <= 'z'; i++)
		putchar(i);
	for (i ='A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
