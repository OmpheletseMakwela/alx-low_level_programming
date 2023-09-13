# include <stdio.h>

/**
 * print_alphabet_x10 - Entry point for a prototype function
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	 char letter;

    for (int line = 0; line < 10; line++)
    {
	    for (letter = 'a'; letter <= 'z'; letter++)
	    {
		    putchar(letter);
        }
        putchar('\n');
    }
}
/**
 * main_alphabet_x10 - Entry point
 *
 * Return: 0 always
 */
int main_alphabet_x10(void)
{
	print_alphabet_x10();
	return (0);
}
