#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to an unsigned long int.
 * @index: The index of the bit to set to 0.
 *
 * Return: If successful - 1. Otherwise - (-1).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
