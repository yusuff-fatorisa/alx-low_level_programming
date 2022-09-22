#include "main.h"

/**
 * string_to_upper - changes all lowercase characters
 * of a string to uppercase
 *
 * @s: string to modify
 *
 * Return: the resulting string
 */

char string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
