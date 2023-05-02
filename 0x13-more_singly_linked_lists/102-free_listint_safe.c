#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: pointer to head
 *
 * Return: the sizw of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node = *h;
	listint_t *tmp;
	size_t node_count = 0;

	while (node != NULL)
	{
		node_count++;
		tmp = node;
		node = node->next;
		free(tmp);

		if (tmp < node)
			break;
	}
	*h = NULL;

	return (node_count);
}
