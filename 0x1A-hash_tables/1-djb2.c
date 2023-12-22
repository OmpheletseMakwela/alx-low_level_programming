#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string with djb2 algorithm.
 * @str: The string to be hashed.
 * Return: The hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int a;

	while ((a = *str++))
	{
		hash = ((hash << 5) + hash) + a;
	}
	return (hash);
}
