#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head node
 * @idx: index of the given node
 * @n: node data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp1, *temp2 = NULL, *new;
    unsigned int i = 0;

    // Create a new node
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    // Insert n value into the new node
    new->n = n;

    // If the list is empty, insert at the beginning
    if (*h == NULL)
    {
        *h = new;
        return (new);
    }

    // If index is 0, insert at the beginning
    if (idx == 0)
    {
        new->next = *h;
        (*h)->prev = new;
        *h = new;
        return (new);
    }

    // Initialize temporary pointers to traverse the list
    temp1 = temp2 = *h;

    // Traverse the list
    while (temp1 != NULL)
    {
        if (i == idx)
        {
            // Insert the new node into the list
            new->next = temp1;
            new->prev = temp2;
            temp2->next = temp1->prev = new;
            return (new);
        }
        temp2 = temp1;
        temp1 = temp1->next;
        i++;
    }

    // If the index is out of range, free the new node and return NULL
    if (i < idx)
        free(new);

    return (NULL);
}
