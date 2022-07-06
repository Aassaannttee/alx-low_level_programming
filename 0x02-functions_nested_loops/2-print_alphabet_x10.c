#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10x the alphabets, in lowercase
 * Return: Always 0
*/

void print_alphabet_x10(void)
{
	int i, j = 0, n = 122;

	while (j < 10)
	{
		for (i = 97; i <= n; i++)
		{
			_putchar(i);
		}
		_putchar(10);
		j++;
	}
	return (0);
}
