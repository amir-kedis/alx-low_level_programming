#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n).
 * @head: pointer to head of list
 * Return: sum of all data (n) of list, or 0 if list is empty
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
