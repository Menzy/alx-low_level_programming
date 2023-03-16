#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Prints all arguments it receives.
 * @argc: - argument count
 * @argv: - array of strings
 *Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
