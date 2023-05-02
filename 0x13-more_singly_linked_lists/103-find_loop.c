#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: pointer to the head of the list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fptr, *sptr;

	if (head == NULL || head->next == NULL)
		return (NULL);

	fptr = head->next->next;
	sptr = head->next;

	while (fptr)
	{
		sptr = sptr->next;
		fptr = fptr->next;

		if (fptr)
			fptr = fptr->next;

		if (sptr == fptr)
		{
			sptr = head;

			while (sptr != fptr)
			{
				sptr = fptr->next;
				fptr = fptr->next;
			}
			return (sptr);
		}
	}
	return (NULL);
}
