#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head node receiving argument
 * @n: node data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
	/* Set the next pointer of the new node to the current head */
	new->next = *head;

	/* Set the previous pointer of the new node to NULL */
	new->prev = NULL;

	/* If the list is not empty, set the previous pointer */
	if (*head != NULL)
		(*head)->prev = new;

	/* Update the head to point to the new node */
	*head = new;

	/* Return the address of the new node */
	return (new);
}
