#include <stdio.h>
/**
 * main - Entry point
 * info - prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, new = 0;
	int sum = 0;

	while (new < 4000000)
	{
		new = a + b;
		a = b;
		b = new;
		if (new % 2 == 0)
			sum += new;
	}
	printf("%i\n", sum);
	return (0);
}
