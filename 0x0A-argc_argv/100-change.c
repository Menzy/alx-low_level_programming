#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * Description: prints the minimum number of coins to make\
 change for an amount of money.
 * @argc: - argument count
 * @argv: - array of strings
 *Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	coins += i / 25;
	i %= 25;
	coins += i / 10;
	i %= 10;
	coins += i / 5;
	i %= 5;
	coins += i / 2;
	i %= 2;
	coins += i;

	printf("%d\n", coins);

	return (0);
}
