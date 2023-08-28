#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: nth node of list, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	cur = head;

	for (i = 0; i < index; i++)
	{
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
	}

	return (cur);
}
