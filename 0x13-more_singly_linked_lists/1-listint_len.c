#include "lists.h"

/**
 * listint_len - Provides the count of elements within a linked list
 * @h: A list of the listint_t type to be traversed
 *
 * Return: The count of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
