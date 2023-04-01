#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: double pointer
 *
 * Return: number of nodes.
 */
void free_list(list_t *head)
{
	list_t *current_node = NULL;
	list_t *temp_node = NULL;


	current_node = head;
	while (current_node != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node->str);
		free(temp_node);
	}
}

