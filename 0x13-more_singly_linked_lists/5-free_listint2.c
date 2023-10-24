#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a listint_t list
 * @head: A pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
