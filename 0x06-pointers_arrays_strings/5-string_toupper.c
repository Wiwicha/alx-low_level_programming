#include "main.h"

/**
 * *string_toupper - function changes all lower letters of a string to upper
 * @str: string
 * Return: string
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
