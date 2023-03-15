#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: - array width
 * @height: array height
 *Return: pointer to a 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	ptr = (int **)malloc(width * sizeof(int *));
	for (a = 0; a < width; a++)
		ptr[a] = (int *)malloc(height * sizeof(int));
	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		for (a = 0; a < width; a++)
		{
			free(ptr[a]);
		}
		free(ptr);
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
				ptr[a][b] = 0;
		}

	}
	return (ptr);
}
