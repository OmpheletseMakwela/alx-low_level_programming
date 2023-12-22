#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Calculates the key index
 * @key: The key for which the index needs to be determined.
 * @size: The size of the hash table (number of slots/buckets).
 * Return: The index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
