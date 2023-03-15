#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(strlen(str) * sizeof(char) + 1);
	if (ptr == NULL)
		printf("Memory allocation failed\n");
	else
	{
		for (i = 0; i < strlen(str); i++)
		ptr[i] = str[i];
	}
	return (ptr);
}
