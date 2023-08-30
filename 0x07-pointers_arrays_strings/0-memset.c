#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to put constant
 * @b: constant byte
 * @n: max bytes to use
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}
