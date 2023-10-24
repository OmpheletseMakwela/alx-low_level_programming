#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of element
 * @h: a pointer that holds the memory address of a node
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
