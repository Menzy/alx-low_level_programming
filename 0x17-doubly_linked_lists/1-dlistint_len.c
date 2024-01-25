#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list.
 * @h: head node receiving argument
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t counter = 0;

    // Loop through the list until the end (NULL) is reached
    while (h != NULL)
    {
        // Move to the next node
        h = h->next;

        // Increment the counter
        counter++;
    }

    // Return the number of nodes in the list
    return (counter);
}
