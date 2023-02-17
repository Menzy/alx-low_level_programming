#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * info - prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
