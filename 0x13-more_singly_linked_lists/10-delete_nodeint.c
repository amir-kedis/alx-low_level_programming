#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked
 * list.
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *nextNode;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	cur = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (cur == NULL)
			return (-1);
		cur = cur->next;
	}

	nextNode = cur->next;
	cur->next = nextNode->next;
	free(nextNode);
	return (1);
}
