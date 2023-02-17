#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * info - prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
