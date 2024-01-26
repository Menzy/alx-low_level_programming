#include "lists.h"

/*
 * delete_dnodeint_at_index - deletes the node at given index of a
 * dlistint_t linked list
 * @head: the head of the current dlistint_t list
 * @index: index of the node to be deleted
 *
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int i = 0;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);
	/* Traverse the list */
	while (current_node != NULL)
	{
		/* Check if the current index matches the desired index */
		if (i == index)
		{
			/* Update pointers to bypass the current node */
			if (current_node->prev)
				current_node->prev->next = current_node->next;
			if (current_node->next)
				current_node->next->prev = current_node->prev;

			/* If deleting the first node, update the head */
			if (i == 0)
				*head = current_node->next;

			/* Free the current node and return success */
			free(current_node);
			return (1);
		}

		/* Move to the next node */
		current_node = current_node->next;
		i++;
	}

	/* If the index is out of range, return -1 */
	return (-1);
}
