#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a list
 * @head: pointer
 * Return: count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head < head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
		head = head->next;
	}
	return (count);
}
