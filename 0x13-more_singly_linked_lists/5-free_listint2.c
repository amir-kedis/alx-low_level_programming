#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
	}
}
