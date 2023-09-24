#include "main.h"
#include <stdio.h>

/**
 * set_string - sets pointer to a string
 * @s: Double pointer
 * @to: Single pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
