#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using the djb2 algorithm.
 * @str: The string to be hashed.
 *
 * Return: The hash value generated from the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = (hash * 33) ^ c;
	}
	return (hash);
}