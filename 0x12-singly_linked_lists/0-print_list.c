#include <stddef.h>
#include <unistd.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	int len;
	char len_str[20];

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			write(1, "[0] (nil)\n", 10);
		}
		else
		{
			len = snprintf(len_str, sizeof(len_str), "[%d]", h->len);
			write(1, len_str, len);
			write(1, " ", 1);
			write(1, h->str, h->len);
			write(1, "\n", 1);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}
