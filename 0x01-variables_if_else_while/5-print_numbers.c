#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * info - prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
