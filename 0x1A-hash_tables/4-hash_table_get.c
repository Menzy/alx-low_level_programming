#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: Pointer to the hash table.
 * @key: Key (string) in the key/value pair.
 *
 * Return: The value associated with the element, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hashnode;
	unsigned long int i;

	/* Return NULL if the hash table is NULL */
	if (ht == NULL)
		return (NULL);

	/* Return NULL if the key is an empty string or NULL */
	if (key == NULL || key[0] == '\0')
		return (NULL);

	/* Get the index for the key */
	i = key_index((unsigned char *)key, ht->size);

	/* Get the hash node at the index */
	hashnode = ht->array[i];

	/* If the hash node is NULL, the key is not found */
	if (hashnode == NULL)
		return (NULL);

	/* Traverse the linked list to find the key */
	while (hashnode != NULL)
	{
		if (strcmp(hashnode->key, key) == 0)
			return (hashnode->value);
		hashnode = hashnode->next;
	}

	/* Return NULL if the key is not found */
	return (NULL);
}
