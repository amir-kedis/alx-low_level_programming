#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_to_add = malloc(sizeof(list_t));

	if (node_to_add == NULL)
	{
		return (NULL);
	}

	node_to_add->str = strdup(str);
	node_to_add->len = strlen(str);
	node_to_add->next = *head;

	*head = node_to_add;

	return (node_to_add);
}
