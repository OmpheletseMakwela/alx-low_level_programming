# include "main.h"

/**
 * swap_int-A prototype function that swaps integers
 * @a: a pointer that is being swaped with integer b
 * @b: a pointer that is being swaped with integer a
 * return 0 always a success
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
