#include <stdio.h>

/**
 * main - prints the number of arguments passed to a program
 * @argc: Argument command line
 * @argv: A pointer to a string
 * Return: 0 always a success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
