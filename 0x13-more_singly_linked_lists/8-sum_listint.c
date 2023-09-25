#include "lists.h"

/**
 * sum_listint - Determines the total by adding up the data within a listint_t linked list
 * @head: The initial node within the linked list
 *
 * Return: The sum obtained as a result
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
