#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data (n), or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		temp = head;
		sum += temp->n;
		head = head->next;
	}

	return (sum);
}
