#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <strings.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		numberOfNodes++;
		h = h->next;
	}

	return (numberOfNodes);
}
