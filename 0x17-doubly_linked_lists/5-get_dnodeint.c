#include "lists.h"

/* 
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * head: a pointer
 * index: index of node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	/* Check if the list is empty */
	if (head == NULL)
		return (NULL);

	/* Traverse the list */
	while (head != NULL)
	{
		/* Check if the current index matches the desired index */
		if (i == index)
			return (head);

		/* Move to the next node */
		head = head->next;

		/* Increment the counter */
		i++;
	}

	/* If the index is out of bounds, return NULL */
	return (NULL);
}
