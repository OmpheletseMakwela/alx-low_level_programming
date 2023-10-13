#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - prints all variables
 * @format: first argument
 * Return: all argumets
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char c;
	int i;
	float f;
	char * s;

	va_start(arg, format);

	while (*format)
	{
		if (*format == c)
		{
			c = va_arg(arg, int);
			printf("%c", c);
		}
		else if (*format == i)
		{
			i = va_arg(arg, int);
			printf("%d", i);
		}
		else if (*format == f)
		{
			f = (float)va_arg(arg, double);
			printf("%f", f);
		}
		else if (*format == 's')
		{
			s = va_arg(arg, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		*format++;
		if (*format)
		{
			printf(",");
		}
	}
	va_end(arg);
	printf("\n");
}
