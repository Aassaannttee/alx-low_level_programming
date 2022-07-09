#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 10)
	{
		x = -n;
		_putchar('-');
	}
	else
		x = n;
	if (x / 10)
		print_number(x / 10);

	_putchar((x % 10) + '0');
}
