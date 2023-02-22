#include "main.h"
/**
 * print_to_98 - print natural numbers from n to 98
 * @n: user input
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
		n--;
	}
	printf("98\n");
}
