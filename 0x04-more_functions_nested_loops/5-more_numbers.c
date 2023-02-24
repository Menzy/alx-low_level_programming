#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int a;
int i;
int b;
for (a = 0; a < 10; a++)
{
for (i = 0; i <= 14; i++)
{
b = i;
if (i > 9)
{
_putchar ('1');
b = i % 10;
}
_putchar('0' + b);
}
_putchar('\n');
}
}
