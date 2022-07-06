#include "main.h"
#include <stdio.h>

/**
 * main - print an alphabet in lower case
 * Return: Always 0
*/

void print_alphabet(void)
{
	int j, n = 122;

	for (j = 97;  j <= n; j++)
	{
		_putchar(j);
	}
	_putchar(10);
	return (0);
}
