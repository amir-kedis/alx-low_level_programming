#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to head of list
 */
int sum_listint(listint_t *head)
{
	listint_t *cur;
	int sum;

	if (head == NULL)
		return (0);

	cur = head;
	sum = 0;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}

	return (sum);
}
