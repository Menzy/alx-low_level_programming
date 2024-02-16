#include "hash_tables.h"

/**
 * hash_table_delete - Clears a hash table.
 * @ht: Pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *next;
	unsigned long int i;

	/* Return if hash table is NULL */
	if (ht == NULL)
		return;

	/* Iterate through each bucket in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		/* Traverse the linked list and free each node */
		while (current != NULL)
		{
			next = current->next;  /* Store next pointer before freeing */
			free(current->key);
			free(current->value);
			free(current);
			current = next;  /* Move to the next node */
		}
	}
	free(ht->array);  /* Free the array of pointers */
	free(ht);  /* Free the hash table structure */
}
