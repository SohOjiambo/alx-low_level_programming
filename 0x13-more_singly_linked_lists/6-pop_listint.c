#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head
 *
 * Return: the head node's data (n) or empty on return
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
