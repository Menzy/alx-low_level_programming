#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value of a key in a hash table.
 * @ht: Hash table being searched.
 * @key: Key being sought.
 * Return: Returns the value of the element,
 *         or NULL if the key was not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	/* Return NULL if hash table or key is invalid */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Compute the index using a key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Return NULL if the index is out of range */
	if (index >= ht->size)
		return (NULL);

	/* Get the hash node at the index */
	node = ht->array[index];

	/* Traverse linked list until the key is found or the end is reached */
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	/* Return the value if the key was found, otherwise return NULL */
	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
