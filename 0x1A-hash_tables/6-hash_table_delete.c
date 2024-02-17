#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table to be deleted.
 *
 * This function frees the memory allocated for the hash table @ht,
 * including all its elements.
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *cur_hashnode;
    unsigned long int i = 0;

    /* Return if the hash table is NULL */
    if (ht == NULL)
        return;

    /* Iterate through each bucket in the hash table */
    while (i < ht->size)
    {
        /* Free memory for each node in the linked list */
        while (ht->array[i] != NULL)
        {
            cur_hashnode = ht->array[i];
            free(cur_hashnode->key);
            free(cur_hashnode->value);
            ht->array[i] = ht->array[i]->next;
            free(cur_hashnode);
        }
        i++;
    }

    /* Free the array of pointers and the hash table structure itself */
    free(ht->array);
    free(ht);
}
