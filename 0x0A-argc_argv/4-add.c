#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a given string to an integer
 *
 * @s: the given string to be converted to an integer
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, f, len, digit;

	i = 0;
	d = 0;
	n = 0;
	f = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - sums up two positive numbers
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of all arguments passed to the program
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' && argv[i][j] < '0')
			{
				puts("Error\n");
				return (1);
			}
		}

		sum += _atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
