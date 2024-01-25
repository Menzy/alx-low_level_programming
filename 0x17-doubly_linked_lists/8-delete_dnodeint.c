#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list.
 * @head: a pointer to the head node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;
	unsigned int i = 0;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	temp2 = NULL;
	temp1 = *head;

	/* Traverse the list */
	while (temp1 != NULL)
	{
		/* Check if the current index matches the desired index */
		if (i == index)
		{
			if (index == 0)
			{
				/* If deleting the first node, update the head and free the node */
				*head = temp1->next;
				free(temp1);
				return (1);
			}

			/* Delete the node from the list */
			temp2->next = temp1->next;
			free(temp1);
			return (1);
		}

		/* Move to the next node */
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}

	/* If the index is out of range, return -1 */
	return (-1);
}
