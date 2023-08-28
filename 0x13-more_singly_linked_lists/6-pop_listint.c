#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to head of list
 */
int pop_listint(listint_t **head)
{
	listint_t *cur;
	int n;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	cur = *head;
	n = cur->n;
	*head = (*head)->next;

	free(cur);
	return (n);
}
