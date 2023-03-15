#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: - array width
 * @height: array height
 *Return: pointer to a 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **D;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	D = malloc(sizeof(int *) * height);

	if (D == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		D[height_index] = malloc(sizeof(int) * width);

		if (D[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(D[height_index]);

			free(D);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			D[height_index][width_index] = 0;
	}

	return (D);
}
