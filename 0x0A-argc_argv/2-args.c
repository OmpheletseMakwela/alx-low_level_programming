#include <stdio.h>

/**
 * main - Prints all the arguments passed to the program
 * @argc: An argument command
 * @argv: A pointer arry to a string
 * Return: 0 always a success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > i; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
