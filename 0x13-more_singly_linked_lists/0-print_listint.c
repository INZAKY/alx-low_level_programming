#include "lists.h"

/**
 * print_listint - Displays the contents of a linked list, showing all its elements
 * @h: A list of listint_t type to be printed
 *
 * Return: The count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
