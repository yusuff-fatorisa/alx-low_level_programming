#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @strg: pointer to the string
 *
 * Return: pointer to the string 'strg'
 */

char *cap_string(char *strg)
{
	int i = 0, l;

	while (*(strg + i) != '\0')
	{
		if (i == 0 && *(strg + i) >= 'a' && *(strg + i) <= 'z')
			*(strg + i) -= 32
		if (*(strg + i) == ' ' || *(strg + i) == '\t' ||
				*(strg + i) == '\n' || *(strg + i) == ',' ||
				*(strg + i) == ';' || *(strg + i) == '.' ||
				*(strg + i) == '!' || *(strg + i) == '?' ||
				*(strg + i) == '"' || *(strg + i) == '(' ||
				*(strg + i) == ')' || *(strg + i) == '{' ||
				*(strg + i) == '}')
		{
			l = i + 1;
			if (*(strg + l) >= 'a' && *(strg + l) <= 'z')
				*(strg + l) -= 32;
		}
		i++;
	}
	return (strg);
}
