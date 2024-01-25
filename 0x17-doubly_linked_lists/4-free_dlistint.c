#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head node receiving argument
 * Return:
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    // Traverse the list and free each node
    while (head != NULL)
    {
        // Store the current node in a temporary variable
        temp = head;

        // Move to the next node
        head = head->next;

        // Free the current node
        free(temp);
    }
}
