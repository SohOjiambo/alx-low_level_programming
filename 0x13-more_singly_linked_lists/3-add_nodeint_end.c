#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a list
 * @head: pointer to head of the list
 * @n: value to keep in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *new_node;

	while (node && node->next != NULL)
		node = node->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (node)
		node->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
