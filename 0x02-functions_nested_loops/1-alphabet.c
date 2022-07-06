#include "main.h"

/**
 * main - print an alphabet in lower case
 * Return: Always 0
*/

int print_alphabet(void)
{
	int j;

	for (j = 'a';  j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
