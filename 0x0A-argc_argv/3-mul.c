#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a program that multiplies two numbers
 * @argc: An argument command line
 * @argv: A pointer array to a string
 * Return: 0 always a success and 1 if error
 */
int main(int argc, char *argv[])
{
	int i;
	int n;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	n = atoi(argv[2]);
	res = i * n;

	printf("%d\n", res);
	return (0);
}
