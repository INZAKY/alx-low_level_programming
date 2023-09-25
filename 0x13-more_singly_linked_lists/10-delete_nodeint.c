#include "lists.h"

/**
 * delete_nodeint_at_index - Removes a node at a specific position within a linked list
 * @head: A reference to the initial element in the list
 * @index: The position of the node to be removed within the list
 *
 * Return:Returns either 1 to indicate success or -1 to indicate failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
