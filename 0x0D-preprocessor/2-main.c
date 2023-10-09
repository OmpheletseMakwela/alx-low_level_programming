#include <stdio.h>

/**
 * main - Displays the name of the file it was compiled with
 * Return: 0 always a success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
