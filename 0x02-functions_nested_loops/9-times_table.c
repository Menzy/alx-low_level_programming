#include "main.h"
/**
 * times_table - function that prints 9 times table.
 * Return: void.
 */
void times_table(void)
{
	int i, j, sum;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			sum = i * j;

			if (sum <= 9)
				_putchar(' ');
			else
				_putchar((sum / 10) + '0');

			_putchar((sum % 10) + '0');
		}
		_putchar('\n');
	}
}
