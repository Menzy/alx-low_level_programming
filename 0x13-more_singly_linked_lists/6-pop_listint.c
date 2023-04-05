#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 *
 * Return: 0 if the linked list is empty, otherwise the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int ret;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	ret = temp->n;
	*head = temp->next;
	free(temp);

	return (ret);
}
