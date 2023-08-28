#include "lists.h"

/**
 * reallocarr - reallocates a memory block
 * @list: the old list
 * @new_size: the new size
 * @new_list: the new list
 * Return: the new list
 */
const listint_t **reallocarr(const listint_t **list, size_t new_size,
														 const listint_t *new_list)
{
	const listint_t **new;

	size_t i;

	new = malloc(sizeof(listint_t *) * new_size);
	if (!new)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < new_size - 1; i++)
		new[i] = list[i];
	new[i] = new_list;
	free(list);
	return (new);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: the head of the list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, j;

	const listint_t **list = NULL;

	for (i = 0; head; i++)
	{
		for (j = 0; j < i; j++)
			if (head == list[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (i);
			}
		list = reallocarr(list, i + 1, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (i);
}
