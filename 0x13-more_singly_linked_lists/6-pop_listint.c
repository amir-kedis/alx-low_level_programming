#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to pointer to head of list
 * Return: head node's data (n), or 0 if list is empty
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
