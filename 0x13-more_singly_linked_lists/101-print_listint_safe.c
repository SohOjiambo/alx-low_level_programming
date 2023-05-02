#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head of the lisy
 *
 * Return: the number of nodes in the list
 * exit with status 98 on failure
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head;
	const listint_t *former_node = NULL;
	size_t node_count = 0;

	if (head == NULL)
		exit(98);

	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node_count++;
		former_node = node;
		node = node->next;

		if (former_node <= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			exit(98);
		}
	}
	return (node_count);
}
