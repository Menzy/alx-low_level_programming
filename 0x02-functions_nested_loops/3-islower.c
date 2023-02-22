#include "main.h"

/**
 * _islower - function to check if a letter is lowercase,
 * by comapring with letter
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);

}
