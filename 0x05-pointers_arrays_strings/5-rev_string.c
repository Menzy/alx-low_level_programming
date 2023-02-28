#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer for string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{

	int i = 0;
	int len = 0;
	char tmp;

	while (s[i++])

		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}

}
