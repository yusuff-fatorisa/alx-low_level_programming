#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a character in the string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: a pointer to the occurence of the character
 * c in the string s, or null if the character is not found
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
