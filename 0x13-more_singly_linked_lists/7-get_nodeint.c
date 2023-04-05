#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: index of node starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n = 0;

	while (head != NULL)
	{
		temp = head;
		if (n == index)
			return (temp);

		head = head->next;
		n++;
	}

	return (head);
}
