#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2 = *head;
	unsigned int node;

	if (temp2 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp2);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (temp2->next == NULL)
			return (-1);

		temp2 = temp2->next;
	}

	temp1 = temp2->next;
	temp2->next = temp1->next;
	free(temp1);
	return (1);
}
