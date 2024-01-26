#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head node
 * @idx: index of the given node
 * @n: node data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1, *temp2 = NULL, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t)); /* Create a new node */
	if (new == NULL)
		return (NULL);
	new->n = n;	/* Insert n value into the new node */
	if (*h == NULL) 	/* If the list is empty, insert at the beginning */
	{
		*h = new;
		return (new);
	}
	if (idx == 0) /* If index is 0, insert at the beginning */
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	temp1 = temp2 = *h; /* Initialize temporary pointer to traverse list */

	while (temp1 != NULL) /* Traverse the list */
	{
		if (i == idx)
		{
			new->next = temp1; /* Insert the new node into the list */
			new->prev = temp2;
			temp2->next = temp1->prev = new;
			return (new);
		}
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}
	/* If the index is out of range, free the new node and return NULL */
	if (i < idx)
		free(new);
	return (NULL);
}
