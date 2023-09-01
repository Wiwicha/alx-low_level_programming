#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int intr = 0;

	while (intr < n)
	{
		dest[intr] = src[intr];
		intr++;
	}

	return (dest);
}
