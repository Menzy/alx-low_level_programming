#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Prints 10 times the alphabet, in lowercase.
 * Return. Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}

