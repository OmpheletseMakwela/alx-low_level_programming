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
	size_t count = 0;
	char elements_str[20];
	char count_str[12];

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			write(1, "[0] (nil)\n", 11);
		}
		else
		{
			snprintf(count_str, sizeof(count_str), "[%u] ", h->len);
			write(1, count_str, strlen(count_str));
			write(1, h->str, h->len);
			write(1, "\n", 1);
		}
		h = h->next;
		snprintf(elements_str, sizeof(elements_str), "-> %lu elements\n", count);
		write(1, elements_str, strlen(elements_str));
	}
	return (count);
}
