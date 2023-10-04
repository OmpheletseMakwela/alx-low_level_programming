#include <stdio.h>
#include "main.h"

/**
 * main - A function that prints the program name
 * @argc: An argument command line
 * @argv: A pointer to a string
 * Return: 0 always a success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
