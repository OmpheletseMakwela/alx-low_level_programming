#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * is_substring_palindrome - A function
 * @s: variable
 * @start: variable
 * @end: variable
 * Return: 1 always a success
 */

int is_substring_palindrome(char *s, int start, int end);
/**
 * is_palindrome - A function
 * @s: variable
 * Return: length
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_substring_palindrome(s, 0, length - 1));
}
/**
 * is_substring_palindrome - A function
 * is_palindrome - A function
 * @s: variable
 * @start: variable
 * @end: variable
 * Return: 1 always a success
 */
int is_substring_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_substring_palindrome(s, start + 1, end - 1));
}
