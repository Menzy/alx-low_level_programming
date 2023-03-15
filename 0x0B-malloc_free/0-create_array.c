#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: - amount of memory to allocate
 * @c: The specific char to intialize the array with.
 *Return: 0 Always (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		printf("Memory allocation failed\n");
	else
	{
		for (i = 0; i < size; i++)
		array[i] = c;
	}
	return (array);
}
