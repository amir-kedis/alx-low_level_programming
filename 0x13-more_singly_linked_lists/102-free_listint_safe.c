#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to pointer to head of list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);
	current = *h;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp < current)
			break;
	}

	*h = NULL;
	return (count);
}
