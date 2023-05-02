#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to head
 *
 * Return: the sum of all data or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
		return (0);

	for (node = head; node != NULL; node = node->next)
		sum += node->n;

	return (sum);
}
