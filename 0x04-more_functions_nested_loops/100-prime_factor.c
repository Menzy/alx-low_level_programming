#include <stdio.h>

/**
 * main - prints the largest prime factor
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long large_prime = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			large_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", large_prime);
	return (0);
}
