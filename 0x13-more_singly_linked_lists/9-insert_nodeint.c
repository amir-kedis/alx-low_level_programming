#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head of list
 * @idx: index of the list where the new node should be added.
 * @n: integer to be added to the list
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur, *newNodeToBeAdded;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	cur = *head;
	newNodeToBeAdded = malloc(sizeof(listint_t));
	if (newNodeToBeAdded == NULL)
		return (NULL);
	newNodeToBeAdded->n = n;

	if (idx == 0)
	{
		newNodeToBeAdded->next = *head;
		*head = newNodeToBeAdded;
		return (newNodeToBeAdded);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
	}

	newNodeToBeAdded->next = cur->next;
	cur->next = newNodeToBeAdded;
	return (newNodeToBeAdded);
}
