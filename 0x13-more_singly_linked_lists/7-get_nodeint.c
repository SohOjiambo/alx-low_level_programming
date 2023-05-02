
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head
 * @index: index to find in a linked list
 *
 * Return: nth node of a linked list or NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int node_count = 0;

	node = head;

	while (node_count < index)
	{
		if (node)
			node = node->next;
		else
			return (NULL);
		node_count++;
	}
	if (node)
		return (node);
	else
		return (NULL);
}
