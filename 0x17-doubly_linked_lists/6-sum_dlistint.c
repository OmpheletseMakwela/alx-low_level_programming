#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data in a list.
 * @head: Pointer to the head.
 * Return: Sum, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
