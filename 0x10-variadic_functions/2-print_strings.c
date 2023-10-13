#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints steings followed by a new line
 * @separator: a comma separating the strings
 * @n: the first argument of the function
 * Return: strings separated by a comma
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *string;
	va_list arg;

	va_start(arg, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, const char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
