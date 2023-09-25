#include "lists.h"

/**
 * add_nodeint -Inserts a new node at the start of a linked list
 * @head: A pointer to the initial node in the list
 * @n: The information to be placed in the new node
 *
 * Return: A reference to the new node's address, or NULL in case of failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
