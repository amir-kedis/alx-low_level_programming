#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of list
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *temp = head;

	if (head == NULL)
		exit(98);

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		if (current >= temp)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
