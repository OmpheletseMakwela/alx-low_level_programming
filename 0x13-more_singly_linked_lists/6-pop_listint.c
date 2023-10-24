#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint -a function that deletes the head node
 * @head: A pointer
 * Return: data
 */
int pop_listint(listint_t **head)
{
	int d = 0;

	if (*head != NULL)
	{
		listint_t *t = *head;

		d = (*head)->n;
		*head = (*head)->next;
		free(t);
	}
	return (d);
}
