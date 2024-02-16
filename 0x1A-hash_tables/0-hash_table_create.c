#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: NULL if an error is encountered; otherwise,
 * a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table;
	unsigned long int i;

	/* Allocate memory for the hash table */
	my_hash_table = malloc(sizeof(hash_table_t));

	/* Return NULL if memory allocation fails */
	if (my_hash_table == NULL)
		return (NULL);

	/* Set the size of the hash table */
	my_hash_table->size = size;

	/* Allocate memory for the array of hash_node_t pointers */
	my_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	/* Return NULL if memory allocation fails */
	if (my_hash_table->array == NULL)
	{
		free(my_hash_table); // Free previously allocated memory
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
	{
		my_hash_table->array[i] = NULL;
	}

	return (my_hash_table);
}
