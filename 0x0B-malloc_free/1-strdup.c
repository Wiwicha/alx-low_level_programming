#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer of string (success), NULL (error)
*/

char *_strdup(char *str)
{
	int i = 0, leng = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[leng] != '\0'; leng++)
	;
	m = malloc(leng * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);

	else
	{
		for (; i < leng; i++)
			m[i] = str[i];
	}
	return (m);
}
