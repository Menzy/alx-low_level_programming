#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: a pointer
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* Check if the list is empty */
	if (head == NULL)
		return (0);

	/* Traverse the list and calculate the sum of all data */
	while (head != NULL)
	{
		sum += head->n;

		/* Move to the next node */
		head = head->next;
	}

	/* Return the sum of all data */
	return (sum);
}
