#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 48; /*48 decimal representation of 0*/

	while (digit <= 102) /*102 is the decimal representation of f*/
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
