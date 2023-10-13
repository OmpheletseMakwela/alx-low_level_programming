#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a comma
 * @separator: a comma
 * @n: numbers
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	int numbers;

	va_start(arg, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(arg, int);
		printf("%d", numbers);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
