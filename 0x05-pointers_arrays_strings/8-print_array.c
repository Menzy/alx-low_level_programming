#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the array
 * @a: array to print
 * @n: number of elements to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
