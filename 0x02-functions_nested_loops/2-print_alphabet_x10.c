# include <stdio.h>

/**
 * print_alphabet_x10 - Entry point for a prototype function
 *
 * Return: always 0
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
