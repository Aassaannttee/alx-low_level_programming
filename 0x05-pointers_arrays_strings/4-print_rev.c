#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: The input string
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
