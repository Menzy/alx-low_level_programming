#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i, j;
	hash_node_t *help;

	if (!ht)
		return;

	printf("{");
	j = 0;
	for (i = 0; i < ht->size; ++i)
	{
		for (help = ht->array[i]; help != NULL; help = help->next)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", help->key, help->value);
			j = 1;
		}
	}
	printf("}\n");

}
