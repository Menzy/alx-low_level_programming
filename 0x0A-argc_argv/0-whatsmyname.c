#include <stdio.h>

/**
 * main - entry point
 * description: a program that prints its name
 * @argc: argument count
 * @argv: argumrnt vector
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
