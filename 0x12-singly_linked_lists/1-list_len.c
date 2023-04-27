#include "lists.h"

/**
 * list_len - returns the number of elements in a ranked list
 * @h: linked list
 *
 *Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
