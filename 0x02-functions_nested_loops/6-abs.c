#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: value of the last digit.
 */
int print_last_digit(int i)
{
	int last = i % 10;

	if (i < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
