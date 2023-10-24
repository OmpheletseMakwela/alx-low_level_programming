#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - a program that adds positive numbers
 * @argc: int
 * @argv: char
 * Return: 0 success always
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int i, j, num;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
				return (1);
				}
			}
			num = atoi(argv[i]);
			if (num > 0)
			{
				result += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", result);
	}
	return (0);
}
