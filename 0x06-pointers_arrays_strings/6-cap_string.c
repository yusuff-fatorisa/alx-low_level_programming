#include "main.h"

/**
 * cap_string - capitalizes every word of a given string
 *
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
	               ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + i] -= 32;
				}
			}
		}
	}

	return (s);
}