#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer of string (success), NULL (error)
*/

char *_strdup(char *str)
{
	int *str = malloc(str * sizeof(char));

	if (str == 0)
		return (NULL);

	while (str++)
		return (*str);
}
