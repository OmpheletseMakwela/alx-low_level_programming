# include "main.h"
# include <stdio.h>
# include <limits.h>

/**
 * _atoi - A prototype function
 * @s: A pointer that is assigned
 *Return: results times sign
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX / 10) || (result == INT_MAX / 10 && (*s - '0') > (INT_MAX % 10)))
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return result * sign;
}
