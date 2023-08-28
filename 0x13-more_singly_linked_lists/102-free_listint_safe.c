#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to pointer to head of list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *current;
	size_t size = 0;

	if (!h || !*h)
		return (0);
	current = *h;
	while (current)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
		{
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (size);
}
