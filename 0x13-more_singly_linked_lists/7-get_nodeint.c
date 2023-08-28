#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to head of list
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
