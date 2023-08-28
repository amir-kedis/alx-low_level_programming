#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to head of list
 * @n: integer to be added to the new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNodeToBeAdded;

	newNodeToBeAdded = malloc(sizeof(listint_t));
	if (newNodeToBeAdded == NULL)
		return (NULL);

	newNodeToBeAdded->n = n;
	newNodeToBeAdded->next = *head;
	*head = newNodeToBeAdded;

	return (newNodeToBeAdded);
}
