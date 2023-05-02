#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index 'index'
 * of a linked list
 * @head: pointer to head
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *temp;
	unsigned int x = 0;

	node = *head;
	if (*head == NULL)
		return (-1);

	while (x < index)
	{
		x++;
		temp = node;

		if (node->next)
			node = node->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = node->next;
	else if (node->next)
		temp->next = node->next;
	else
		temp->next = NULL;

	free(node);
	return (1);
}
