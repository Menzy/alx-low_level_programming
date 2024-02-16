#include "hash_tables.h"

/**
 * hash_djb2 - Function implementing the djb2 algorithm.
 * @str: String used to get the hash value.
 * Return: Hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int i;
	int c;

	i = 5381;
	while ((c = *str++))
	{
		/* i * 33 + c */
		i = ((i << 5) + i) + c;
	}
	return (i);
}
