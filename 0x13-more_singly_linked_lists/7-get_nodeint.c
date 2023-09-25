#include "lists.h"

/**
 * get_nodeint_at_index - Provides access to the node located at a specific position within a linked list
 * @head: The initial node within the linked list
 * @index: The first node in the linked list
 *
 * Return: A reference to the sought-after node, or NULL if it's not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
