#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free listint
 * @h: pointer
 * Return: count
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h != NULL)
	{
		count++;
		if (*h < (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	return (count);
}
