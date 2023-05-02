#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *new_node = NULL;

	while (*head)
	{
		new_node = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = new_node;
	}
	*head = new_node;

	return (*head);
}
