#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int a, b, counter = 0;
	char *str, tmp;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	str = s;

	for (a = 0; b < (counter - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			tmp = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = tmp;
		}
	}
}
