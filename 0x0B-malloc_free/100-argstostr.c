#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments supplied to a program
 * @ac: argument counts
 * @av: a pointer to an array of size ac
 * Return: NULL if ac == 0 or av == NULL, pointer to new string.
 * NULL on FAIL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;
	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc(sizeof(char) * size + 1);
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
