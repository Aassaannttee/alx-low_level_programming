#include "main.h"

/**
 * _memcpy - Copies content from source to destination
 * memory area
 * @src: Source memory area
 * @dest: Destination memory area
 * @n: Number of bytes
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		n--;
	}
	return (dest);
}
