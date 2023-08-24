#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_to_add = malloc(sizeof(list_t));

	if (node_to_add == NULL)
	{
		return (NULL);
	}

	node_to_add->str = strdup(str);
	node_to_add->len = strlen(str);
	node_to_add->next = NULL;
	if (node_to_add->str == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = node_to_add;
	}
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = node_to_add;
	}

	return (node_to_add);
}
