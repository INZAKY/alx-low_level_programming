#include "lists.h"

/**
 * free_listint - Deallocates memory associated with a linked list
 * @head: The listint_t list that needs to have its memory freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
