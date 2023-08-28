#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to head of list
 * @n: integer to be added to the new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNodeToBeAdded, *current;
	current = *head;

	newNodeToBeAdded = malloc(sizeof(listint_t));
	if (newNodeToBeAdded == NULL)
		return (NULL);

	newNodeToBeAdded->n = n;

	if (*head == NULL)
	{
		*head = newNodeToBeAdded;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = newNodeToBeAdded;

	return (newNodeToBeAdded);
}
