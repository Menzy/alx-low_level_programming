#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head node receiving argument
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	/* Loop through the list until the end (NULL) is reached */
	while (h != NULL)
	{
		/* Print the data of the current node */
		printf("%d\n", h->n);

		/* Move to the next node */
		h = h->next;

		/* Increment the counter */
		counter++;
	}

	/* Return the number of nodes in the list */
	return (counter);
}
