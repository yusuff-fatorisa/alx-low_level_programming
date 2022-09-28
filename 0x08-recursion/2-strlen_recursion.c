#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: a pointer to the string params
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
