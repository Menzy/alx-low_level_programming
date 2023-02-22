#include "main.h"

/**
 *print_alphabet -  a function that prints the alphabet in lowercase..
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

