# include "main.h"
# include <stdio.h>

/**
 * print_array - A prototype function
 * @a: a pointer that is assigned
 * @n: an integer that is assigned
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	pritnf("\n");
}
