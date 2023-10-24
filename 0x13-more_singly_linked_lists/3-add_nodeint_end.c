#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: a pointer that holds the memory address of the fist node
 * @n: constant integer
 * Return: new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
