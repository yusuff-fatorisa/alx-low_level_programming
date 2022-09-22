#include "main.h"

/**
 * _strcat - concatenates n-bytes of strings to another
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of strings to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *str, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
