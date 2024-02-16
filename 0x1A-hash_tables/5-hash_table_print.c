#include "hash_tables.h"

/**
 * hash_table_print - Prints out a hash table.
 * @ht: Pointer to the hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	int cflag;
	unsigned long int i;

	/* Return if hash table is NULL */
	if (ht == NULL)
		return;

	cflag = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			/* Print comma and space if not the first entry */
			if (cflag == 0)
				cflag = 1;
			else
				printf(", ");

			/* Print key-value pair */
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}
