#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head node receiving argument
 * @n: node data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		/* Print an error message if memory allocation fails */
		printf("Error\n");
		return (NULL);
	}

	/* Set the data of the new node */
	new->n = n;

	/* If the list is empty, set the previous and next pointers to NULL */
	if (*head == NULL)
	{
		new->prev = new->next = NULL;
		*head = new;
		return (new);
	}

	/* Traverse the list to find the last node */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Update pointers to add the new node at the end */
	temp->next = new;
	new->prev = temp;
	new->next = NULL;

	/* Return the address of the new node */
	return (new);
}
