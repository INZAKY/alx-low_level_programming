#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a new node to a linked list at a specified position at a given position
 * @head: A reference to the initial node in the list
 * @idx:The position at which the new node is inserted within the list
 * @n: The value to be placed in the new node
 *
 * Return: A reference to the new node's address, or NULL if it was not possible to add the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
