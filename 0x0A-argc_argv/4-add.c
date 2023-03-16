#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"


/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, sum;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			if (!isdigit(s[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(s);
	}

	printf("%d\n", sum);

	return (0);
}
