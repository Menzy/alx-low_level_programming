#include "main.h"

/**
 * _strlen_recursion - returns the lenngth of a string
 * @s: the string to be measured
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
		return (0);

	i++;
	i = i + _strlen_recursion(s + 1);
	return (i);
}
