#include "main.h"
# include <ctype.h>
# include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = isalpha('H');
    putchar(r + '0');
    r = isalpha('o');
    putchar(r + '0');
    r = isalpha(108);
    putchar(r + '0');
    r = isalpha(';');
    putchar(r + '0');
    putchar('\n');
    return (0);
}
